// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: cl_rcon.proto

#include "cl_rcon.pb.h"

#include <algorithm>

#include <protobuf/io/coded_stream.h>
#include <protobuf/extension_set.h>
#include <protobuf/wire_format_lite.h>
#include <protobuf/io/zero_copy_stream_impl_lite.h>
// @@protoc_insertion_point(includes)
#include <protobuf/port_def.inc>

PROTOBUF_PRAGMA_INIT_SEG
namespace cl_rcon {
constexpr request::request(
  ::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized)
  : requestbuf_(&::PROTOBUF_NAMESPACE_ID::internal::fixed_address_empty_string)
  , requestval_(&::PROTOBUF_NAMESPACE_ID::internal::fixed_address_empty_string)
  , requestid_(0)
  , requesttype_(0)
{}
struct requestDefaultTypeInternal {
  constexpr requestDefaultTypeInternal()
    : _instance(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized{}) {}
  ~requestDefaultTypeInternal() {}
  union {
    request _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT requestDefaultTypeInternal _request_default_instance_;
}  // namespace cl_rcon
namespace cl_rcon {
bool request_t_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
      return true;
    default:
      return false;
  }
}

static ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<std::string> request_t_strings[6] = {};

static const char request_t_names[] =
  "SERVERDATA_REQUEST_AUTH"
  "SERVERDATA_REQUEST_EXECCOMMAND"
  "SERVERDATA_REQUEST_SEND_CONSOLE_LOG"
  "SERVERDATA_REQUEST_SEND_REMOTEBUG"
  "SERVERDATA_REQUEST_SETVALUE"
  "SERVERDATA_REQUEST_VALUE";

static const ::PROTOBUF_NAMESPACE_ID::internal::EnumEntry request_t_entries[] = {
  { {request_t_names + 0, 23}, 3 },
  { {request_t_names + 23, 30}, 2 },
  { {request_t_names + 53, 35}, 4 },
  { {request_t_names + 88, 33}, 5 },
  { {request_t_names + 121, 27}, 1 },
  { {request_t_names + 148, 24}, 0 },
};

static const int request_t_entries_by_number[] = {
  5, // 0 -> SERVERDATA_REQUEST_VALUE
  4, // 1 -> SERVERDATA_REQUEST_SETVALUE
  1, // 2 -> SERVERDATA_REQUEST_EXECCOMMAND
  0, // 3 -> SERVERDATA_REQUEST_AUTH
  2, // 4 -> SERVERDATA_REQUEST_SEND_CONSOLE_LOG
  3, // 5 -> SERVERDATA_REQUEST_SEND_REMOTEBUG
};

const std::string& request_t_Name(
    request_t value) {
  static const bool dummy =
      ::PROTOBUF_NAMESPACE_ID::internal::InitializeEnumStrings(
          request_t_entries,
          request_t_entries_by_number,
          6, request_t_strings);
  (void) dummy;
  int idx = ::PROTOBUF_NAMESPACE_ID::internal::LookUpEnumName(
      request_t_entries,
      request_t_entries_by_number,
      6, value);
  return idx == -1 ? ::PROTOBUF_NAMESPACE_ID::internal::GetEmptyString() :
                     request_t_strings[idx].get();
}
bool request_t_Parse(
    ::PROTOBUF_NAMESPACE_ID::ConstStringParam name, request_t* value) {
  int int_value;
  bool success = ::PROTOBUF_NAMESPACE_ID::internal::LookUpEnumValue(
      request_t_entries, 6, name, &int_value);
  if (success) {
    *value = static_cast<request_t>(int_value);
  }
  return success;
}

// ===================================================================

class request::_Internal {
 public:
  using HasBits = decltype(std::declval<request>()._has_bits_);
  static void set_has_requestid(HasBits* has_bits) {
    (*has_bits)[0] |= 4u;
  }
  static void set_has_requesttype(HasBits* has_bits) {
    (*has_bits)[0] |= 8u;
  }
  static void set_has_requestbuf(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
  static void set_has_requestval(HasBits* has_bits) {
    (*has_bits)[0] |= 2u;
  }
};

request::request(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::MessageLite(arena, is_message_owned) {
  SharedCtor();
  if (!is_message_owned) {
    RegisterArenaDtor(arena);
  }
  // @@protoc_insertion_point(arena_constructor:cl_rcon.request)
}
request::request(const request& from)
  : ::PROTOBUF_NAMESPACE_ID::MessageLite(),
      _has_bits_(from._has_bits_) {
  _internal_metadata_.MergeFrom<std::string>(from._internal_metadata_);
  requestbuf_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    requestbuf_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), "", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (from._internal_has_requestbuf()) {
    requestbuf_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_requestbuf(), 
      GetArenaForAllocation());
  }
  requestval_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    requestval_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), "", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (from._internal_has_requestval()) {
    requestval_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_requestval(), 
      GetArenaForAllocation());
  }
  ::memcpy(&requestid_, &from.requestid_,
    static_cast<size_t>(reinterpret_cast<char*>(&requesttype_) -
    reinterpret_cast<char*>(&requestid_)) + sizeof(requesttype_));
  // @@protoc_insertion_point(copy_constructor:cl_rcon.request)
}

inline void request::SharedCtor() {
requestbuf_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  requestbuf_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), "", GetArenaForAllocation());
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
requestval_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  requestval_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), "", GetArenaForAllocation());
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
::memset(reinterpret_cast<char*>(this) + static_cast<size_t>(
    reinterpret_cast<char*>(&requestid_) - reinterpret_cast<char*>(this)),
    0, static_cast<size_t>(reinterpret_cast<char*>(&requesttype_) -
    reinterpret_cast<char*>(&requestid_)) + sizeof(requesttype_));
}

request::~request() {
  // @@protoc_insertion_point(destructor:cl_rcon.request)
  if (GetArenaForAllocation() != nullptr) return;
  SharedDtor();
  _internal_metadata_.Delete<std::string>();
}

inline void request::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  requestbuf_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  requestval_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

void request::ArenaDtor(void* object) {
  request* _this = reinterpret_cast< request* >(object);
  (void)_this;
}
void request::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void request::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void request::Clear() {
// @@protoc_insertion_point(message_clear_start:cl_rcon.request)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000003u) {
    if (cached_has_bits & 0x00000001u) {
      requestbuf_.ClearNonDefaultToEmpty();
    }
    if (cached_has_bits & 0x00000002u) {
      requestval_.ClearNonDefaultToEmpty();
    }
  }
  if (cached_has_bits & 0x0000000cu) {
    ::memset(&requestid_, 0, static_cast<size_t>(
        reinterpret_cast<char*>(&requesttype_) -
        reinterpret_cast<char*>(&requestid_)) + sizeof(requesttype_));
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear<std::string>();
}

const char* request::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // optional int32 requestID = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 8)) {
          _Internal::set_has_requestid(&has_bits);
          requestid_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // optional .cl_rcon.request_t requestType = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 16)) {
          uint64_t val = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
          _internal_set_requesttype(static_cast<::cl_rcon::request_t>(val));
        } else
          goto handle_unusual;
        continue;
      // optional string requestBuf = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 26)) {
          auto str = _internal_mutable_requestbuf();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, nullptr));
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // optional string requestVal = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 34)) {
          auto str = _internal_mutable_requestval();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, nullptr));
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      default:
        goto handle_unusual;
    }  // switch
  handle_unusual:
    if ((tag == 0) || ((tag & 7) == 4)) {
      CHK_(ptr);
      ctx->SetLastTag(tag);
      goto message_done;
    }
    ptr = UnknownFieldParse(
        tag,
        _internal_metadata_.mutable_unknown_fields<std::string>(),
        ptr, ctx);
    CHK_(ptr != nullptr);
  }  // while
message_done:
  _has_bits_.Or(has_bits);
  return ptr;
failure:
  ptr = nullptr;
  goto message_done;
#undef CHK_
}

uint8_t* request::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:cl_rcon.request)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // optional int32 requestID = 1;
  if (_internal_has_requestid()) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt32ToArray(1, this->_internal_requestid(), target);
  }

  // optional .cl_rcon.request_t requestType = 2;
  if (_internal_has_requesttype()) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteEnumToArray(
      2, this->_internal_requesttype(), target);
  }

  // optional string requestBuf = 3;
  if (_internal_has_requestbuf()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_requestbuf().data(), static_cast<int>(this->_internal_requestbuf().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "cl_rcon.request.requestBuf");
    target = stream->WriteStringMaybeAliased(
        3, this->_internal_requestbuf(), target);
  }

  // optional string requestVal = 4;
  if (_internal_has_requestval()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_requestval().data(), static_cast<int>(this->_internal_requestval().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "cl_rcon.request.requestVal");
    target = stream->WriteStringMaybeAliased(
        4, this->_internal_requestval(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = stream->WriteRaw(_internal_metadata_.unknown_fields<std::string>(::PROTOBUF_NAMESPACE_ID::internal::GetEmptyString).data(),
        static_cast<int>(_internal_metadata_.unknown_fields<std::string>(::PROTOBUF_NAMESPACE_ID::internal::GetEmptyString).size()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:cl_rcon.request)
  return target;
}

size_t request::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:cl_rcon.request)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x0000000fu) {
    // optional string requestBuf = 3;
    if (cached_has_bits & 0x00000001u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
          this->_internal_requestbuf());
    }

    // optional string requestVal = 4;
    if (cached_has_bits & 0x00000002u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
          this->_internal_requestval());
    }

    // optional int32 requestID = 1;
    if (cached_has_bits & 0x00000004u) {
      total_size += ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32SizePlusOne(this->_internal_requestid());
    }

    // optional .cl_rcon.request_t requestType = 2;
    if (cached_has_bits & 0x00000008u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::EnumSize(this->_internal_requesttype());
    }

  }
  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    total_size += _internal_metadata_.unknown_fields<std::string>(::PROTOBUF_NAMESPACE_ID::internal::GetEmptyString).size();
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void request::CheckTypeAndMergeFrom(
    const ::PROTOBUF_NAMESPACE_ID::MessageLite& from) {
  MergeFrom(*::PROTOBUF_NAMESPACE_ID::internal::DownCast<const request*>(
      &from));
}

void request::MergeFrom(const request& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:cl_rcon.request)
  GOOGLE_DCHECK_NE(&from, this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 0x0000000fu) {
    if (cached_has_bits & 0x00000001u) {
      _internal_set_requestbuf(from._internal_requestbuf());
    }
    if (cached_has_bits & 0x00000002u) {
      _internal_set_requestval(from._internal_requestval());
    }
    if (cached_has_bits & 0x00000004u) {
      requestid_ = from.requestid_;
    }
    if (cached_has_bits & 0x00000008u) {
      requesttype_ = from.requesttype_;
    }
    _has_bits_[0] |= cached_has_bits;
  }
  _internal_metadata_.MergeFrom<std::string>(from._internal_metadata_);
}

void request::CopyFrom(const request& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:cl_rcon.request)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool request::IsInitialized() const {
  return true;
}

void request::InternalSwap(request* other) {
  using std::swap;
  auto* lhs_arena = GetArenaForAllocation();
  auto* rhs_arena = other->GetArenaForAllocation();
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      &requestbuf_, lhs_arena,
      &other->requestbuf_, rhs_arena
  );
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      &requestval_, lhs_arena,
      &other->requestval_, rhs_arena
  );
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(request, requesttype_)
      + sizeof(request::requesttype_)
      - PROTOBUF_FIELD_OFFSET(request, requestid_)>(
          reinterpret_cast<char*>(&requestid_),
          reinterpret_cast<char*>(&other->requestid_));
}

std::string request::GetTypeName() const {
  return "cl_rcon.request";
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace cl_rcon
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::cl_rcon::request* Arena::CreateMaybeMessage< ::cl_rcon::request >(Arena* arena) {
  return Arena::CreateMessageInternal< ::cl_rcon::request >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <protobuf/port_undef.inc>