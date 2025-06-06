// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: find_all_contacts_response.proto

#include "find_all_contacts_response.pb.h"

#include <algorithm>

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>

PROTOBUF_PRAGMA_INIT_SEG

namespace _pb = ::PROTOBUF_NAMESPACE_ID;
namespace _pbi = _pb::internal;

namespace find_all_contacts_resp {
PROTOBUF_CONSTEXPR PeopleInfo::PeopleInfo(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_.uid_)*/{&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{}}
  , /*decltype(_impl_.name_)*/{&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{}}
  , /*decltype(_impl_._cached_size_)*/{}} {}
struct PeopleInfoDefaultTypeInternal {
  PROTOBUF_CONSTEXPR PeopleInfoDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~PeopleInfoDefaultTypeInternal() {}
  union {
    PeopleInfo _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 PeopleInfoDefaultTypeInternal _PeopleInfo_default_instance_;
PROTOBUF_CONSTEXPR FindAllContactsResponse::FindAllContactsResponse(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_.contacts_)*/{}
  , /*decltype(_impl_.base_resp_)*/nullptr
  , /*decltype(_impl_._cached_size_)*/{}} {}
struct FindAllContactsResponseDefaultTypeInternal {
  PROTOBUF_CONSTEXPR FindAllContactsResponseDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~FindAllContactsResponseDefaultTypeInternal() {}
  union {
    FindAllContactsResponse _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 FindAllContactsResponseDefaultTypeInternal _FindAllContactsResponse_default_instance_;
}  // namespace find_all_contacts_resp
static ::_pb::Metadata file_level_metadata_find_5fall_5fcontacts_5fresponse_2eproto[2];
static constexpr ::_pb::EnumDescriptor const** file_level_enum_descriptors_find_5fall_5fcontacts_5fresponse_2eproto = nullptr;
static constexpr ::_pb::ServiceDescriptor const** file_level_service_descriptors_find_5fall_5fcontacts_5fresponse_2eproto = nullptr;

const uint32_t TableStruct_find_5fall_5fcontacts_5fresponse_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::find_all_contacts_resp::PeopleInfo, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::find_all_contacts_resp::PeopleInfo, _impl_.uid_),
  PROTOBUF_FIELD_OFFSET(::find_all_contacts_resp::PeopleInfo, _impl_.name_),
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::find_all_contacts_resp::FindAllContactsResponse, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::find_all_contacts_resp::FindAllContactsResponse, _impl_.base_resp_),
  PROTOBUF_FIELD_OFFSET(::find_all_contacts_resp::FindAllContactsResponse, _impl_.contacts_),
};
static const ::_pbi::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, -1, sizeof(::find_all_contacts_resp::PeopleInfo)},
  { 8, -1, -1, sizeof(::find_all_contacts_resp::FindAllContactsResponse)},
};

static const ::_pb::Message* const file_default_instances[] = {
  &::find_all_contacts_resp::_PeopleInfo_default_instance_._instance,
  &::find_all_contacts_resp::_FindAllContactsResponse_default_instance_._instance,
};

const char descriptor_table_protodef_find_5fall_5fcontacts_5fresponse_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n find_all_contacts_response.proto\022\026find"
  "_all_contacts_resp\032\023base_response.proto\""
  "\'\n\nPeopleInfo\022\013\n\003uid\030\001 \001(\t\022\014\n\004name\030\002 \001(\t"
  "\"\177\n\027FindAllContactsResponse\022.\n\tbase_resp"
  "\030\001 \001(\0132\033.base_response.BaseResponse\0224\n\010c"
  "ontacts\030\002 \003(\0132\".find_all_contacts_resp.P"
  "eopleInfob\006proto3"
  ;
static const ::_pbi::DescriptorTable* const descriptor_table_find_5fall_5fcontacts_5fresponse_2eproto_deps[1] = {
  &::descriptor_table_base_5fresponse_2eproto,
};
static ::_pbi::once_flag descriptor_table_find_5fall_5fcontacts_5fresponse_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_find_5fall_5fcontacts_5fresponse_2eproto = {
    false, false, 257, descriptor_table_protodef_find_5fall_5fcontacts_5fresponse_2eproto,
    "find_all_contacts_response.proto",
    &descriptor_table_find_5fall_5fcontacts_5fresponse_2eproto_once, descriptor_table_find_5fall_5fcontacts_5fresponse_2eproto_deps, 1, 2,
    schemas, file_default_instances, TableStruct_find_5fall_5fcontacts_5fresponse_2eproto::offsets,
    file_level_metadata_find_5fall_5fcontacts_5fresponse_2eproto, file_level_enum_descriptors_find_5fall_5fcontacts_5fresponse_2eproto,
    file_level_service_descriptors_find_5fall_5fcontacts_5fresponse_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_find_5fall_5fcontacts_5fresponse_2eproto_getter() {
  return &descriptor_table_find_5fall_5fcontacts_5fresponse_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2 static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_find_5fall_5fcontacts_5fresponse_2eproto(&descriptor_table_find_5fall_5fcontacts_5fresponse_2eproto);
namespace find_all_contacts_resp {

// ===================================================================

class PeopleInfo::_Internal {
 public:
};

PeopleInfo::PeopleInfo(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor(arena, is_message_owned);
  // @@protoc_insertion_point(arena_constructor:find_all_contacts_resp.PeopleInfo)
}
PeopleInfo::PeopleInfo(const PeopleInfo& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  PeopleInfo* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_.uid_){}
    , decltype(_impl_.name_){}
    , /*decltype(_impl_._cached_size_)*/{}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  _impl_.uid_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.uid_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_uid().empty()) {
    _this->_impl_.uid_.Set(from._internal_uid(), 
      _this->GetArenaForAllocation());
  }
  _impl_.name_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.name_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_name().empty()) {
    _this->_impl_.name_.Set(from._internal_name(), 
      _this->GetArenaForAllocation());
  }
  // @@protoc_insertion_point(copy_constructor:find_all_contacts_resp.PeopleInfo)
}

inline void PeopleInfo::SharedCtor(
    ::_pb::Arena* arena, bool is_message_owned) {
  (void)arena;
  (void)is_message_owned;
  new (&_impl_) Impl_{
      decltype(_impl_.uid_){}
    , decltype(_impl_.name_){}
    , /*decltype(_impl_._cached_size_)*/{}
  };
  _impl_.uid_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.uid_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  _impl_.name_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.name_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
}

PeopleInfo::~PeopleInfo() {
  // @@protoc_insertion_point(destructor:find_all_contacts_resp.PeopleInfo)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void PeopleInfo::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  _impl_.uid_.Destroy();
  _impl_.name_.Destroy();
}

void PeopleInfo::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void PeopleInfo::Clear() {
// @@protoc_insertion_point(message_clear_start:find_all_contacts_resp.PeopleInfo)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.uid_.ClearToEmpty();
  _impl_.name_.ClearToEmpty();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* PeopleInfo::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // string uid = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 10)) {
          auto str = _internal_mutable_uid();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          CHK_(::_pbi::VerifyUTF8(str, "find_all_contacts_resp.PeopleInfo.uid"));
        } else
          goto handle_unusual;
        continue;
      // string name = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 18)) {
          auto str = _internal_mutable_name();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          CHK_(::_pbi::VerifyUTF8(str, "find_all_contacts_resp.PeopleInfo.name"));
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
        _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
        ptr, ctx);
    CHK_(ptr != nullptr);
  }  // while
message_done:
  return ptr;
failure:
  ptr = nullptr;
  goto message_done;
#undef CHK_
}

uint8_t* PeopleInfo::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:find_all_contacts_resp.PeopleInfo)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // string uid = 1;
  if (!this->_internal_uid().empty()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_uid().data(), static_cast<int>(this->_internal_uid().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "find_all_contacts_resp.PeopleInfo.uid");
    target = stream->WriteStringMaybeAliased(
        1, this->_internal_uid(), target);
  }

  // string name = 2;
  if (!this->_internal_name().empty()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_name().data(), static_cast<int>(this->_internal_name().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "find_all_contacts_resp.PeopleInfo.name");
    target = stream->WriteStringMaybeAliased(
        2, this->_internal_name(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:find_all_contacts_resp.PeopleInfo)
  return target;
}

size_t PeopleInfo::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:find_all_contacts_resp.PeopleInfo)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // string uid = 1;
  if (!this->_internal_uid().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_uid());
  }

  // string name = 2;
  if (!this->_internal_name().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_name());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData PeopleInfo::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    PeopleInfo::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*PeopleInfo::GetClassData() const { return &_class_data_; }


void PeopleInfo::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<PeopleInfo*>(&to_msg);
  auto& from = static_cast<const PeopleInfo&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:find_all_contacts_resp.PeopleInfo)
  GOOGLE_DCHECK_NE(&from, _this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (!from._internal_uid().empty()) {
    _this->_internal_set_uid(from._internal_uid());
  }
  if (!from._internal_name().empty()) {
    _this->_internal_set_name(from._internal_name());
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void PeopleInfo::CopyFrom(const PeopleInfo& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:find_all_contacts_resp.PeopleInfo)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool PeopleInfo::IsInitialized() const {
  return true;
}

void PeopleInfo::InternalSwap(PeopleInfo* other) {
  using std::swap;
  auto* lhs_arena = GetArenaForAllocation();
  auto* rhs_arena = other->GetArenaForAllocation();
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &_impl_.uid_, lhs_arena,
      &other->_impl_.uid_, rhs_arena
  );
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &_impl_.name_, lhs_arena,
      &other->_impl_.name_, rhs_arena
  );
}

::PROTOBUF_NAMESPACE_ID::Metadata PeopleInfo::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_find_5fall_5fcontacts_5fresponse_2eproto_getter, &descriptor_table_find_5fall_5fcontacts_5fresponse_2eproto_once,
      file_level_metadata_find_5fall_5fcontacts_5fresponse_2eproto[0]);
}

// ===================================================================

class FindAllContactsResponse::_Internal {
 public:
  static const ::base_response::BaseResponse& base_resp(const FindAllContactsResponse* msg);
};

const ::base_response::BaseResponse&
FindAllContactsResponse::_Internal::base_resp(const FindAllContactsResponse* msg) {
  return *msg->_impl_.base_resp_;
}
void FindAllContactsResponse::clear_base_resp() {
  if (GetArenaForAllocation() == nullptr && _impl_.base_resp_ != nullptr) {
    delete _impl_.base_resp_;
  }
  _impl_.base_resp_ = nullptr;
}
FindAllContactsResponse::FindAllContactsResponse(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor(arena, is_message_owned);
  // @@protoc_insertion_point(arena_constructor:find_all_contacts_resp.FindAllContactsResponse)
}
FindAllContactsResponse::FindAllContactsResponse(const FindAllContactsResponse& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  FindAllContactsResponse* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_.contacts_){from._impl_.contacts_}
    , decltype(_impl_.base_resp_){nullptr}
    , /*decltype(_impl_._cached_size_)*/{}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  if (from._internal_has_base_resp()) {
    _this->_impl_.base_resp_ = new ::base_response::BaseResponse(*from._impl_.base_resp_);
  }
  // @@protoc_insertion_point(copy_constructor:find_all_contacts_resp.FindAllContactsResponse)
}

inline void FindAllContactsResponse::SharedCtor(
    ::_pb::Arena* arena, bool is_message_owned) {
  (void)arena;
  (void)is_message_owned;
  new (&_impl_) Impl_{
      decltype(_impl_.contacts_){arena}
    , decltype(_impl_.base_resp_){nullptr}
    , /*decltype(_impl_._cached_size_)*/{}
  };
}

FindAllContactsResponse::~FindAllContactsResponse() {
  // @@protoc_insertion_point(destructor:find_all_contacts_resp.FindAllContactsResponse)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void FindAllContactsResponse::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  _impl_.contacts_.~RepeatedPtrField();
  if (this != internal_default_instance()) delete _impl_.base_resp_;
}

void FindAllContactsResponse::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void FindAllContactsResponse::Clear() {
// @@protoc_insertion_point(message_clear_start:find_all_contacts_resp.FindAllContactsResponse)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.contacts_.Clear();
  if (GetArenaForAllocation() == nullptr && _impl_.base_resp_ != nullptr) {
    delete _impl_.base_resp_;
  }
  _impl_.base_resp_ = nullptr;
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* FindAllContactsResponse::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // .base_response.BaseResponse base_resp = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 10)) {
          ptr = ctx->ParseMessage(_internal_mutable_base_resp(), ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // repeated .find_all_contacts_resp.PeopleInfo contacts = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 18)) {
          ptr -= 1;
          do {
            ptr += 1;
            ptr = ctx->ParseMessage(_internal_add_contacts(), ptr);
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<18>(ptr));
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
        _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
        ptr, ctx);
    CHK_(ptr != nullptr);
  }  // while
message_done:
  return ptr;
failure:
  ptr = nullptr;
  goto message_done;
#undef CHK_
}

uint8_t* FindAllContactsResponse::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:find_all_contacts_resp.FindAllContactsResponse)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // .base_response.BaseResponse base_resp = 1;
  if (this->_internal_has_base_resp()) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(1, _Internal::base_resp(this),
        _Internal::base_resp(this).GetCachedSize(), target, stream);
  }

  // repeated .find_all_contacts_resp.PeopleInfo contacts = 2;
  for (unsigned i = 0,
      n = static_cast<unsigned>(this->_internal_contacts_size()); i < n; i++) {
    const auto& repfield = this->_internal_contacts(i);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
        InternalWriteMessage(2, repfield, repfield.GetCachedSize(), target, stream);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:find_all_contacts_resp.FindAllContactsResponse)
  return target;
}

size_t FindAllContactsResponse::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:find_all_contacts_resp.FindAllContactsResponse)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated .find_all_contacts_resp.PeopleInfo contacts = 2;
  total_size += 1UL * this->_internal_contacts_size();
  for (const auto& msg : this->_impl_.contacts_) {
    total_size +=
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(msg);
  }

  // .base_response.BaseResponse base_resp = 1;
  if (this->_internal_has_base_resp()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *_impl_.base_resp_);
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData FindAllContactsResponse::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    FindAllContactsResponse::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*FindAllContactsResponse::GetClassData() const { return &_class_data_; }


void FindAllContactsResponse::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<FindAllContactsResponse*>(&to_msg);
  auto& from = static_cast<const FindAllContactsResponse&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:find_all_contacts_resp.FindAllContactsResponse)
  GOOGLE_DCHECK_NE(&from, _this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  _this->_impl_.contacts_.MergeFrom(from._impl_.contacts_);
  if (from._internal_has_base_resp()) {
    _this->_internal_mutable_base_resp()->::base_response::BaseResponse::MergeFrom(
        from._internal_base_resp());
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void FindAllContactsResponse::CopyFrom(const FindAllContactsResponse& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:find_all_contacts_resp.FindAllContactsResponse)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool FindAllContactsResponse::IsInitialized() const {
  return true;
}

void FindAllContactsResponse::InternalSwap(FindAllContactsResponse* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  _impl_.contacts_.InternalSwap(&other->_impl_.contacts_);
  swap(_impl_.base_resp_, other->_impl_.base_resp_);
}

::PROTOBUF_NAMESPACE_ID::Metadata FindAllContactsResponse::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_find_5fall_5fcontacts_5fresponse_2eproto_getter, &descriptor_table_find_5fall_5fcontacts_5fresponse_2eproto_once,
      file_level_metadata_find_5fall_5fcontacts_5fresponse_2eproto[1]);
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace find_all_contacts_resp
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::find_all_contacts_resp::PeopleInfo*
Arena::CreateMaybeMessage< ::find_all_contacts_resp::PeopleInfo >(Arena* arena) {
  return Arena::CreateMessageInternal< ::find_all_contacts_resp::PeopleInfo >(arena);
}
template<> PROTOBUF_NOINLINE ::find_all_contacts_resp::FindAllContactsResponse*
Arena::CreateMaybeMessage< ::find_all_contacts_resp::FindAllContactsResponse >(Arena* arena) {
  return Arena::CreateMessageInternal< ::find_all_contacts_resp::FindAllContactsResponse >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
