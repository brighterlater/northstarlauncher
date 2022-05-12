#include "pch.h"
#include "hooks.h"
#include "latencyflex.h"
#include "hookutils.h"
#include "convar.h"

ConVar* Cvar_r_latencyflex;

HMODULE m_lfxModule {};
typedef void (*PFN_winelfx_WaitAndBeginFrame)();
PFN_winelfx_WaitAndBeginFrame m_winelfx_WaitAndBeginFrame {};

typedef void (*OnRenderStartType)();
OnRenderStartType OnRenderStart;
void OnRenderStartHook()
{
	if (Cvar_r_latencyflex->GetInt())
		m_winelfx_WaitAndBeginFrame();

	OnRenderStart();
}

ON_DLL_LOAD_CLIENT_RELIESON("client.dll", LatencyFlex, ConVar, [](HMODULE baseAddress)
{
	// Connect to the LatencyFleX service
	// LatencyFleX is an open source vendor agnostic replacement for Nvidia Reflex input latency reduction technology.
	// https://ishitatsuyuki.github.io/post/latencyflex/
	m_lfxModule = LoadLibraryA("latencyflex_wine.dll");

	if (m_lfxModule == nullptr)
	{
		spdlog::info("Unable to load LatencyFleX library, LatencyFleX disabled.");
		return;
	}

	m_winelfx_WaitAndBeginFrame =
		reinterpret_cast<PFN_winelfx_WaitAndBeginFrame>(reinterpret_cast<void*>(GetProcAddress(m_lfxModule, "winelfx_WaitAndBeginFrame")));
	spdlog::info("LatencyFleX initialized.");

	Cvar_r_latencyflex = new ConVar("r_latencyflex", "1", FCVAR_ARCHIVE, "Whether or not to use LatencyFleX input latency reduction.");

	HookEnabler hook;
	ENABLER_CREATEHOOK(hook, (char*)baseAddress + 0x1952C0, &OnRenderStartHook, reinterpret_cast<LPVOID*>(&OnRenderStart));
})