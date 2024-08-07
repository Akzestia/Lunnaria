// Generated by the protocol buffer compiler.  DO NOT EDIT!
// NO CHECKED-IN PROTOBUF GENCODE
// source: auth.proto
// Protobuf C++ Version: 5.27.2

#include "auth.pb.h"

#include <algorithm>
#include <type_traits>
#include "google/protobuf/io/coded_stream.h"
#include "google/protobuf/generated_message_tctable_impl.h"
#include "google/protobuf/extension_set.h"
#include "google/protobuf/wire_format_lite.h"
#include "google/protobuf/descriptor.h"
#include "google/protobuf/generated_message_reflection.h"
#include "google/protobuf/reflection_ops.h"
#include "google/protobuf/wire_format.h"
// @@protoc_insertion_point(includes)

// Must be included last.
#include "google/protobuf/port_def.inc"
PROTOBUF_PRAGMA_INIT_SEG
namespace _pb = ::google::protobuf;
namespace _pbi = ::google::protobuf::internal;
namespace _fl = ::google::protobuf::internal::field_layout;

inline constexpr Auth::Impl_::Impl_(
    ::_pbi::ConstantInitialized) noexcept
      : payload_{},
        _cached_size_{0},
        _oneof_case_{} {}

template <typename>
PROTOBUF_CONSTEXPR Auth::Auth(::_pbi::ConstantInitialized)
    : _impl_(::_pbi::ConstantInitialized()) {}
struct AuthDefaultTypeInternal {
  PROTOBUF_CONSTEXPR AuthDefaultTypeInternal() : _instance(::_pbi::ConstantInitialized{}) {}
  ~AuthDefaultTypeInternal() {}
  union {
    Auth _instance;
  };
};

PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT
    PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 AuthDefaultTypeInternal _Auth_default_instance_;
static constexpr const ::_pb::EnumDescriptor**
    file_level_enum_descriptors_auth_2eproto = nullptr;
static constexpr const ::_pb::ServiceDescriptor**
    file_level_service_descriptors_auth_2eproto = nullptr;
const ::uint32_t
    TableStruct_auth_2eproto::offsets[] ABSL_ATTRIBUTE_SECTION_VARIABLE(
        protodesc_cold) = {
        ~0u,  // no _has_bits_
        PROTOBUF_FIELD_OFFSET(::Auth, _internal_metadata_),
        ~0u,  // no _extensions_
        PROTOBUF_FIELD_OFFSET(::Auth, _impl_._oneof_case_[0]),
        ~0u,  // no _weak_field_map_
        ~0u,  // no _inlined_string_donated_
        ~0u,  // no _split_
        ~0u,  // no sizeof(Split)
        ::_pbi::kInvalidFieldOffsetTag,
        ::_pbi::kInvalidFieldOffsetTag,
        PROTOBUF_FIELD_OFFSET(::Auth, _impl_.payload_),
};

static const ::_pbi::MigrationSchema
    schemas[] ABSL_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
        {0, -1, -1, sizeof(::Auth)},
};
static const ::_pb::Message* const file_default_instances[] = {
    &::_Auth_default_instance_._instance,
};
const char descriptor_table_protodef_auth_2eproto[] ABSL_ATTRIBUTE_SECTION_VARIABLE(
    protodesc_cold) = {
    "\n\nauth.proto\032\rsign_up.proto\032\rsign_in.pro"
    "to\"K\n\004Auth\022\033\n\007sign_up\030\001 \001(\0132\010.Sign_upH\000\022"
    "\033\n\007sign_in\030\002 \001(\0132\010.Sign_inH\000B\t\n\007payloadb"
    "\006proto3"
};
static const ::_pbi::DescriptorTable* const descriptor_table_auth_2eproto_deps[2] =
    {
        &::descriptor_table_sign_5fin_2eproto,
        &::descriptor_table_sign_5fup_2eproto,
};
static ::absl::once_flag descriptor_table_auth_2eproto_once;
PROTOBUF_CONSTINIT const ::_pbi::DescriptorTable descriptor_table_auth_2eproto = {
    false,
    false,
    127,
    descriptor_table_protodef_auth_2eproto,
    "auth.proto",
    &descriptor_table_auth_2eproto_once,
    descriptor_table_auth_2eproto_deps,
    2,
    1,
    schemas,
    file_default_instances,
    TableStruct_auth_2eproto::offsets,
    file_level_enum_descriptors_auth_2eproto,
    file_level_service_descriptors_auth_2eproto,
};
// ===================================================================

class Auth::_Internal {
 public:
  static constexpr ::int32_t kOneofCaseOffset =
      PROTOBUF_FIELD_OFFSET(::Auth, _impl_._oneof_case_);
};

void Auth::set_allocated_sign_up(::Sign_up* sign_up) {
  ::google::protobuf::Arena* message_arena = GetArena();
  clear_payload();
  if (sign_up) {
    ::google::protobuf::Arena* submessage_arena = reinterpret_cast<::google::protobuf::MessageLite*>(sign_up)->GetArena();
    if (message_arena != submessage_arena) {
      sign_up = ::google::protobuf::internal::GetOwnedMessage(message_arena, sign_up, submessage_arena);
    }
    set_has_sign_up();
    _impl_.payload_.sign_up_ = sign_up;
  }
  // @@protoc_insertion_point(field_set_allocated:Auth.sign_up)
}
void Auth::clear_sign_up() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  if (payload_case() == kSignUp) {
    if (GetArena() == nullptr) {
      delete _impl_.payload_.sign_up_;
    } else if (::google::protobuf::internal::DebugHardenClearOneofMessageOnArena()) {
      ::google::protobuf::internal::MaybePoisonAfterClear(_impl_.payload_.sign_up_);
    }
    clear_has_payload();
  }
}
void Auth::set_allocated_sign_in(::Sign_in* sign_in) {
  ::google::protobuf::Arena* message_arena = GetArena();
  clear_payload();
  if (sign_in) {
    ::google::protobuf::Arena* submessage_arena = reinterpret_cast<::google::protobuf::MessageLite*>(sign_in)->GetArena();
    if (message_arena != submessage_arena) {
      sign_in = ::google::protobuf::internal::GetOwnedMessage(message_arena, sign_in, submessage_arena);
    }
    set_has_sign_in();
    _impl_.payload_.sign_in_ = sign_in;
  }
  // @@protoc_insertion_point(field_set_allocated:Auth.sign_in)
}
void Auth::clear_sign_in() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  if (payload_case() == kSignIn) {
    if (GetArena() == nullptr) {
      delete _impl_.payload_.sign_in_;
    } else if (::google::protobuf::internal::DebugHardenClearOneofMessageOnArena()) {
      ::google::protobuf::internal::MaybePoisonAfterClear(_impl_.payload_.sign_in_);
    }
    clear_has_payload();
  }
}
Auth::Auth(::google::protobuf::Arena* arena)
    : ::google::protobuf::Message(arena) {
  SharedCtor(arena);
  // @@protoc_insertion_point(arena_constructor:Auth)
}
inline PROTOBUF_NDEBUG_INLINE Auth::Impl_::Impl_(
    ::google::protobuf::internal::InternalVisibility visibility, ::google::protobuf::Arena* arena,
    const Impl_& from, const ::Auth& from_msg)
      : payload_{},
        _cached_size_{0},
        _oneof_case_{from._oneof_case_[0]} {}

Auth::Auth(
    ::google::protobuf::Arena* arena,
    const Auth& from)
    : ::google::protobuf::Message(arena) {
  Auth* const _this = this;
  (void)_this;
  _internal_metadata_.MergeFrom<::google::protobuf::UnknownFieldSet>(
      from._internal_metadata_);
  new (&_impl_) Impl_(internal_visibility(), arena, from._impl_, from);
  switch (payload_case()) {
    case PAYLOAD_NOT_SET:
      break;
      case kSignUp:
        _impl_.payload_.sign_up_ = ::google::protobuf::Message::CopyConstruct<::Sign_up>(arena, *from._impl_.payload_.sign_up_);
        break;
      case kSignIn:
        _impl_.payload_.sign_in_ = ::google::protobuf::Message::CopyConstruct<::Sign_in>(arena, *from._impl_.payload_.sign_in_);
        break;
  }

  // @@protoc_insertion_point(copy_constructor:Auth)
}
inline PROTOBUF_NDEBUG_INLINE Auth::Impl_::Impl_(
    ::google::protobuf::internal::InternalVisibility visibility,
    ::google::protobuf::Arena* arena)
      : payload_{},
        _cached_size_{0},
        _oneof_case_{} {}

inline void Auth::SharedCtor(::_pb::Arena* arena) {
  new (&_impl_) Impl_(internal_visibility(), arena);
}
Auth::~Auth() {
  // @@protoc_insertion_point(destructor:Auth)
  _internal_metadata_.Delete<::google::protobuf::UnknownFieldSet>();
  SharedDtor();
}
inline void Auth::SharedDtor() {
  ABSL_DCHECK(GetArena() == nullptr);
  if (has_payload()) {
    clear_payload();
  }
  _impl_.~Impl_();
}

void Auth::clear_payload() {
// @@protoc_insertion_point(one_of_clear_start:Auth)
  ::google::protobuf::internal::TSanWrite(&_impl_);
  switch (payload_case()) {
    case kSignUp: {
      if (GetArena() == nullptr) {
        delete _impl_.payload_.sign_up_;
      } else if (::google::protobuf::internal::DebugHardenClearOneofMessageOnArena()) {
        ::google::protobuf::internal::MaybePoisonAfterClear(_impl_.payload_.sign_up_);
      }
      break;
    }
    case kSignIn: {
      if (GetArena() == nullptr) {
        delete _impl_.payload_.sign_in_;
      } else if (::google::protobuf::internal::DebugHardenClearOneofMessageOnArena()) {
        ::google::protobuf::internal::MaybePoisonAfterClear(_impl_.payload_.sign_in_);
      }
      break;
    }
    case PAYLOAD_NOT_SET: {
      break;
    }
  }
  _impl_._oneof_case_[0] = PAYLOAD_NOT_SET;
}


const ::google::protobuf::MessageLite::ClassData*
Auth::GetClassData() const {
  PROTOBUF_CONSTINIT static const ::google::protobuf::MessageLite::
      ClassDataFull _data_ = {
          {
              &_table_.header,
              nullptr,  // OnDemandRegisterArenaDtor
              nullptr,  // IsInitialized
              PROTOBUF_FIELD_OFFSET(Auth, _impl_._cached_size_),
              false,
          },
          &Auth::MergeImpl,
          &Auth::kDescriptorMethods,
          &descriptor_table_auth_2eproto,
          nullptr,  // tracker
      };
  ::google::protobuf::internal::PrefetchToLocalCache(&_data_);
  ::google::protobuf::internal::PrefetchToLocalCache(_data_.tc_table);
  return _data_.base();
}
PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1
const ::_pbi::TcParseTable<0, 2, 2, 0, 2> Auth::_table_ = {
  {
    0,  // no _has_bits_
    0, // no _extensions_
    2, 0,  // max_field_number, fast_idx_mask
    offsetof(decltype(_table_), field_lookup_table),
    4294967292,  // skipmap
    offsetof(decltype(_table_), field_entries),
    2,  // num_field_entries
    2,  // num_aux_entries
    offsetof(decltype(_table_), aux_entries),
    &_Auth_default_instance_._instance,
    nullptr,  // post_loop_handler
    ::_pbi::TcParser::GenericFallback,  // fallback
    #ifdef PROTOBUF_PREFETCH_PARSE_TABLE
    ::_pbi::TcParser::GetTable<::Auth>(),  // to_prefetch
    #endif  // PROTOBUF_PREFETCH_PARSE_TABLE
  }, {{
    {::_pbi::TcParser::MiniParse, {}},
  }}, {{
    65535, 65535
  }}, {{
    // .Sign_up sign_up = 1;
    {PROTOBUF_FIELD_OFFSET(Auth, _impl_.payload_.sign_up_), _Internal::kOneofCaseOffset + 0, 0,
    (0 | ::_fl::kFcOneof | ::_fl::kMessage | ::_fl::kTvTable)},
    // .Sign_in sign_in = 2;
    {PROTOBUF_FIELD_OFFSET(Auth, _impl_.payload_.sign_in_), _Internal::kOneofCaseOffset + 0, 1,
    (0 | ::_fl::kFcOneof | ::_fl::kMessage | ::_fl::kTvTable)},
  }}, {{
    {::_pbi::TcParser::GetTable<::Sign_up>()},
    {::_pbi::TcParser::GetTable<::Sign_in>()},
  }}, {{
  }},
};

PROTOBUF_NOINLINE void Auth::Clear() {
// @@protoc_insertion_point(message_clear_start:Auth)
  ::google::protobuf::internal::TSanWrite(&_impl_);
  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  clear_payload();
  _internal_metadata_.Clear<::google::protobuf::UnknownFieldSet>();
}

::uint8_t* Auth::_InternalSerialize(
    ::uint8_t* target,
    ::google::protobuf::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:Auth)
  ::uint32_t cached_has_bits = 0;
  (void)cached_has_bits;

  switch (payload_case()) {
    case kSignUp: {
      target = ::google::protobuf::internal::WireFormatLite::InternalWriteMessage(
          1, *_impl_.payload_.sign_up_, _impl_.payload_.sign_up_->GetCachedSize(), target, stream);
      break;
    }
    case kSignIn: {
      target = ::google::protobuf::internal::WireFormatLite::InternalWriteMessage(
          2, *_impl_.payload_.sign_in_, _impl_.payload_.sign_in_->GetCachedSize(), target, stream);
      break;
    }
    default:
      break;
  }
  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target =
        ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
            _internal_metadata_.unknown_fields<::google::protobuf::UnknownFieldSet>(::google::protobuf::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:Auth)
  return target;
}

::size_t Auth::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:Auth)
  ::size_t total_size = 0;

  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  switch (payload_case()) {
    // .Sign_up sign_up = 1;
    case kSignUp: {
      total_size +=
          1 + ::google::protobuf::internal::WireFormatLite::MessageSize(*_impl_.payload_.sign_up_);
      break;
    }
    // .Sign_in sign_in = 2;
    case kSignIn: {
      total_size +=
          1 + ::google::protobuf::internal::WireFormatLite::MessageSize(*_impl_.payload_.sign_in_);
      break;
    }
    case PAYLOAD_NOT_SET: {
      break;
    }
  }
  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}


void Auth::MergeImpl(::google::protobuf::MessageLite& to_msg, const ::google::protobuf::MessageLite& from_msg) {
  auto* const _this = static_cast<Auth*>(&to_msg);
  auto& from = static_cast<const Auth&>(from_msg);
  ::google::protobuf::Arena* arena = _this->GetArena();
  // @@protoc_insertion_point(class_specific_merge_from_start:Auth)
  ABSL_DCHECK_NE(&from, _this);
  ::uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (const uint32_t oneof_from_case = from._impl_._oneof_case_[0]) {
    const uint32_t oneof_to_case = _this->_impl_._oneof_case_[0];
    const bool oneof_needs_init = oneof_to_case != oneof_from_case;
    if (oneof_needs_init) {
      if (oneof_to_case != 0) {
        _this->clear_payload();
      }
      _this->_impl_._oneof_case_[0] = oneof_from_case;
    }

    switch (oneof_from_case) {
      case kSignUp: {
        if (oneof_needs_init) {
          _this->_impl_.payload_.sign_up_ =
              ::google::protobuf::Message::CopyConstruct<::Sign_up>(arena, *from._impl_.payload_.sign_up_);
        } else {
          _this->_impl_.payload_.sign_up_->MergeFrom(from._internal_sign_up());
        }
        break;
      }
      case kSignIn: {
        if (oneof_needs_init) {
          _this->_impl_.payload_.sign_in_ =
              ::google::protobuf::Message::CopyConstruct<::Sign_in>(arena, *from._impl_.payload_.sign_in_);
        } else {
          _this->_impl_.payload_.sign_in_->MergeFrom(from._internal_sign_in());
        }
        break;
      }
      case PAYLOAD_NOT_SET:
        break;
    }
  }
  _this->_internal_metadata_.MergeFrom<::google::protobuf::UnknownFieldSet>(from._internal_metadata_);
}

void Auth::CopyFrom(const Auth& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:Auth)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}


void Auth::InternalSwap(Auth* PROTOBUF_RESTRICT other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  swap(_impl_.payload_, other->_impl_.payload_);
  swap(_impl_._oneof_case_[0], other->_impl_._oneof_case_[0]);
}

::google::protobuf::Metadata Auth::GetMetadata() const {
  return ::google::protobuf::Message::GetMetadataImpl(GetClassData()->full());
}
// @@protoc_insertion_point(namespace_scope)
namespace google {
namespace protobuf {
}  // namespace protobuf
}  // namespace google
// @@protoc_insertion_point(global_scope)
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2 static ::std::false_type
    _static_init2_ PROTOBUF_UNUSED =
        (::_pbi::AddDescriptors(&descriptor_table_auth_2eproto),
         ::std::false_type{});
#include "google/protobuf/port_undef.inc"
