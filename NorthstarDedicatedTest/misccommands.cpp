#include "pch.h"
#include "misccommands.h"
#include "concommand.h"
#include "gameutils.h"
#include "masterserver.h"
#include "serverauthentication.h"

void ForceLoadMapCommand(const CCommand& arg)
{
	if (arg.ArgC() < 2)
		return;

	g_pHostState->m_iNextState = HS_NEW_GAME;
	strncpy(g_pHostState->m_levelName, arg.Arg(1), sizeof(g_pHostState->m_levelName));
}

void SelfAuthAndLeaveToLobbyCommand(const CCommand& arg)
{
	// hack for special case where we're on a local server, so we erase our own newly created auth data on disconnect

	g_MasterServerManager->m_bNewgameAfterSelfAuth = true;
	g_MasterServerManager->AuthenticateWithOwnServer(g_LocalPlayerUserID, (char*)"");
}

void EndSelfAuthAndLeaveToLobbyCommand(const CCommand& arg)
{
	Cbuf_AddText(Cbuf_GetCurrentPlayer(), fmt::format("serverfilter {}", g_ServerAuthenticationManager->m_authData.begin()->first).c_str(), cmd_source_t::kCommandSrcCode);
	Cbuf_Execute();

	g_ServerAuthenticationManager->m_bNeedLocalAuthForNewgame = true;
	SetCurrentPlaylist("tdm");
	strcpy(g_pHostState->m_levelName, "mp_lobby");
	g_pHostState->m_iNextState = HS_NEW_GAME;
}

void AddMiscConCommands()
{
	RegisterConCommand("force_newgame", ForceLoadMapCommand, "forces a map load through directly setting g_pHostState->m_iNextState to HS_NEW_GAME", FCVAR_NONE);
	RegisterConCommand("ns_start_reauth_and_leave_to_lobby", SelfAuthAndLeaveToLobbyCommand, "called by the server, used to reauth and return the player to lobby when leaving a game", FCVAR_SERVER_CAN_EXECUTE);
	// this is a concommand because we make a deferred call to it from another thread
	RegisterConCommand("ns_end_reauth_and_leave_to_lobby", EndSelfAuthAndLeaveToLobbyCommand, "", FCVAR_NONE);
}