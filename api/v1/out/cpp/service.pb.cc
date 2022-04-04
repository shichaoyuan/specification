// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: service.proto

#include "service.pb.h"

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

namespace service {
PROTOBUF_CONSTEXPR Service_MetadataEntry_DoNotUse::Service_MetadataEntry_DoNotUse(
    ::_pbi::ConstantInitialized){}
struct Service_MetadataEntry_DoNotUseDefaultTypeInternal {
  PROTOBUF_CONSTEXPR Service_MetadataEntry_DoNotUseDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~Service_MetadataEntry_DoNotUseDefaultTypeInternal() {}
  union {
    Service_MetadataEntry_DoNotUse _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 Service_MetadataEntry_DoNotUseDefaultTypeInternal _Service_MetadataEntry_DoNotUse_default_instance_;
PROTOBUF_CONSTEXPR Service::Service(
    ::_pbi::ConstantInitialized)
  : metadata_(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized{})
  , namespace__(nullptr)
  , name_(nullptr)
  , ports_(nullptr){}
struct ServiceDefaultTypeInternal {
  PROTOBUF_CONSTEXPR ServiceDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~ServiceDefaultTypeInternal() {}
  union {
    Service _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 ServiceDefaultTypeInternal _Service_default_instance_;
}  // namespace service
static ::_pb::Metadata file_level_metadata_service_2eproto[2];
static constexpr ::_pb::EnumDescriptor const** file_level_enum_descriptors_service_2eproto = nullptr;
static constexpr ::_pb::ServiceDescriptor const** file_level_service_descriptors_service_2eproto = nullptr;

const uint32_t TableStruct_service_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  PROTOBUF_FIELD_OFFSET(::service::Service_MetadataEntry_DoNotUse, _has_bits_),
  PROTOBUF_FIELD_OFFSET(::service::Service_MetadataEntry_DoNotUse, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::service::Service_MetadataEntry_DoNotUse, key_),
  PROTOBUF_FIELD_OFFSET(::service::Service_MetadataEntry_DoNotUse, value_),
  0,
  1,
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::service::Service, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::service::Service, namespace__),
  PROTOBUF_FIELD_OFFSET(::service::Service, name_),
  PROTOBUF_FIELD_OFFSET(::service::Service, metadata_),
  PROTOBUF_FIELD_OFFSET(::service::Service, ports_),
};
static const ::_pbi::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 8, -1, sizeof(::service::Service_MetadataEntry_DoNotUse)},
  { 10, -1, -1, sizeof(::service::Service)},
};

static const ::_pb::Message* const file_default_instances[] = {
  &::service::_Service_MetadataEntry_DoNotUse_default_instance_._instance,
  &::service::_Service_default_instance_._instance,
};

const char descriptor_table_protodef_service_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\rservice.proto\022\007service\032\036google/protobu"
  "f/wrappers.proto\"\366\001\n\007Service\022/\n\tnamespac"
  "e\030\001 \001(\0132\034.google.protobuf.StringValue\022*\n"
  "\004name\030\002 \001(\0132\034.google.protobuf.StringValu"
  "e\0220\n\010metadata\030\003 \003(\0132\036.service.Service.Me"
  "tadataEntry\022+\n\005ports\030\004 \001(\0132\034.google.prot"
  "obuf.StringValue\032/\n\rMetadataEntry\022\013\n\003key"
  "\030\001 \001(\t\022\r\n\005value\030\002 \001(\t:\0028\001B0\n\036cn.polarism"
  "esh.polaris.serviceZ\016api/v1/serviceb\006pro"
  "to3"
  ;
static const ::_pbi::DescriptorTable* const descriptor_table_service_2eproto_deps[1] = {
  &::descriptor_table_google_2fprotobuf_2fwrappers_2eproto,
};
static ::_pbi::once_flag descriptor_table_service_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_service_2eproto = {
    false, false, 363, descriptor_table_protodef_service_2eproto,
    "service.proto",
    &descriptor_table_service_2eproto_once, descriptor_table_service_2eproto_deps, 1, 2,
    schemas, file_default_instances, TableStruct_service_2eproto::offsets,
    file_level_metadata_service_2eproto, file_level_enum_descriptors_service_2eproto,
    file_level_service_descriptors_service_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_service_2eproto_getter() {
  return &descriptor_table_service_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2 static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_service_2eproto(&descriptor_table_service_2eproto);
namespace service {

// ===================================================================

Service_MetadataEntry_DoNotUse::Service_MetadataEntry_DoNotUse() {}
Service_MetadataEntry_DoNotUse::Service_MetadataEntry_DoNotUse(::PROTOBUF_NAMESPACE_ID::Arena* arena)
    : SuperType(arena) {}
void Service_MetadataEntry_DoNotUse::MergeFrom(const Service_MetadataEntry_DoNotUse& other) {
  MergeFromInternal(other);
}
::PROTOBUF_NAMESPACE_ID::Metadata Service_MetadataEntry_DoNotUse::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_service_2eproto_getter, &descriptor_table_service_2eproto_once,
      file_level_metadata_service_2eproto[0]);
}

// ===================================================================

class Service::_Internal {
 public:
  static const ::PROTOBUF_NAMESPACE_ID::StringValue& namespace_(const Service* msg);
  static const ::PROTOBUF_NAMESPACE_ID::StringValue& name(const Service* msg);
  static const ::PROTOBUF_NAMESPACE_ID::StringValue& ports(const Service* msg);
};

const ::PROTOBUF_NAMESPACE_ID::StringValue&
Service::_Internal::namespace_(const Service* msg) {
  return *msg->namespace__;
}
const ::PROTOBUF_NAMESPACE_ID::StringValue&
Service::_Internal::name(const Service* msg) {
  return *msg->name_;
}
const ::PROTOBUF_NAMESPACE_ID::StringValue&
Service::_Internal::ports(const Service* msg) {
  return *msg->ports_;
}
void Service::clear_namespace_() {
  if (GetArenaForAllocation() == nullptr && namespace__ != nullptr) {
    delete namespace__;
  }
  namespace__ = nullptr;
}
void Service::clear_name() {
  if (GetArenaForAllocation() == nullptr && name_ != nullptr) {
    delete name_;
  }
  name_ = nullptr;
}
void Service::clear_ports() {
  if (GetArenaForAllocation() == nullptr && ports_ != nullptr) {
    delete ports_;
  }
  ports_ = nullptr;
}
Service::Service(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned),
  metadata_(arena) {
  SharedCtor();
  if (arena != nullptr && !is_message_owned) {
    arena->OwnCustomDestructor(this, &Service::ArenaDtor);
  }
  // @@protoc_insertion_point(arena_constructor:service.Service)
}
Service::Service(const Service& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  metadata_.MergeFrom(from.metadata_);
  if (from._internal_has_namespace_()) {
    namespace__ = new ::PROTOBUF_NAMESPACE_ID::StringValue(*from.namespace__);
  } else {
    namespace__ = nullptr;
  }
  if (from._internal_has_name()) {
    name_ = new ::PROTOBUF_NAMESPACE_ID::StringValue(*from.name_);
  } else {
    name_ = nullptr;
  }
  if (from._internal_has_ports()) {
    ports_ = new ::PROTOBUF_NAMESPACE_ID::StringValue(*from.ports_);
  } else {
    ports_ = nullptr;
  }
  // @@protoc_insertion_point(copy_constructor:service.Service)
}

inline void Service::SharedCtor() {
::memset(reinterpret_cast<char*>(this) + static_cast<size_t>(
    reinterpret_cast<char*>(&namespace__) - reinterpret_cast<char*>(this)),
    0, static_cast<size_t>(reinterpret_cast<char*>(&ports_) -
    reinterpret_cast<char*>(&namespace__)) + sizeof(ports_));
}

Service::~Service() {
  // @@protoc_insertion_point(destructor:service.Service)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    ArenaDtor(this);
    return;
  }
  SharedDtor();
}

inline void Service::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  metadata_.Destruct();
  if (this != internal_default_instance()) delete namespace__;
  if (this != internal_default_instance()) delete name_;
  if (this != internal_default_instance()) delete ports_;
}

void Service::ArenaDtor(void* object) {
  Service* _this = reinterpret_cast< Service* >(object);
  _this->metadata_.Destruct();
}
void Service::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void Service::Clear() {
// @@protoc_insertion_point(message_clear_start:service.Service)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  metadata_.Clear();
  if (GetArenaForAllocation() == nullptr && namespace__ != nullptr) {
    delete namespace__;
  }
  namespace__ = nullptr;
  if (GetArenaForAllocation() == nullptr && name_ != nullptr) {
    delete name_;
  }
  name_ = nullptr;
  if (GetArenaForAllocation() == nullptr && ports_ != nullptr) {
    delete ports_;
  }
  ports_ = nullptr;
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* Service::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // .google.protobuf.StringValue namespace = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 10)) {
          ptr = ctx->ParseMessage(_internal_mutable_namespace_(), ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // .google.protobuf.StringValue name = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 18)) {
          ptr = ctx->ParseMessage(_internal_mutable_name(), ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // map<string, string> metadata = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 26)) {
          ptr -= 1;
          do {
            ptr += 1;
            ptr = ctx->ParseMessage(&metadata_, ptr);
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<26>(ptr));
        } else
          goto handle_unusual;
        continue;
      // .google.protobuf.StringValue ports = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 34)) {
          ptr = ctx->ParseMessage(_internal_mutable_ports(), ptr);
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

uint8_t* Service::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:service.Service)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // .google.protobuf.StringValue namespace = 1;
  if (this->_internal_has_namespace_()) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(1, _Internal::namespace_(this),
        _Internal::namespace_(this).GetCachedSize(), target, stream);
  }

  // .google.protobuf.StringValue name = 2;
  if (this->_internal_has_name()) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(2, _Internal::name(this),
        _Internal::name(this).GetCachedSize(), target, stream);
  }

  // map<string, string> metadata = 3;
  if (!this->_internal_metadata().empty()) {
    using MapType = ::_pb::Map<std::string, std::string>;
    using WireHelper = Service_MetadataEntry_DoNotUse::Funcs;
    const auto& map_field = this->_internal_metadata();
    auto check_utf8 = [](const MapType::value_type& entry) {
      (void)entry;
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
        entry.first.data(), static_cast<int>(entry.first.length()),
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
        "service.Service.MetadataEntry.key");
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
        entry.second.data(), static_cast<int>(entry.second.length()),
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
        "service.Service.MetadataEntry.value");
    };

    if (stream->IsSerializationDeterministic() && map_field.size() > 1) {
      for (const auto& entry : ::_pbi::MapSorterPtr<MapType>(map_field)) {
        target = WireHelper::InternalSerialize(3, entry.first, entry.second, target, stream);
        check_utf8(entry);
      }
    } else {
      for (const auto& entry : map_field) {
        target = WireHelper::InternalSerialize(3, entry.first, entry.second, target, stream);
        check_utf8(entry);
      }
    }
  }

  // .google.protobuf.StringValue ports = 4;
  if (this->_internal_has_ports()) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(4, _Internal::ports(this),
        _Internal::ports(this).GetCachedSize(), target, stream);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:service.Service)
  return target;
}

size_t Service::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:service.Service)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // map<string, string> metadata = 3;
  total_size += 1 *
      ::PROTOBUF_NAMESPACE_ID::internal::FromIntSize(this->_internal_metadata_size());
  for (::PROTOBUF_NAMESPACE_ID::Map< std::string, std::string >::const_iterator
      it = this->_internal_metadata().begin();
      it != this->_internal_metadata().end(); ++it) {
    total_size += Service_MetadataEntry_DoNotUse::Funcs::ByteSizeLong(it->first, it->second);
  }

  // .google.protobuf.StringValue namespace = 1;
  if (this->_internal_has_namespace_()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *namespace__);
  }

  // .google.protobuf.StringValue name = 2;
  if (this->_internal_has_name()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *name_);
  }

  // .google.protobuf.StringValue ports = 4;
  if (this->_internal_has_ports()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *ports_);
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData Service::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSizeCheck,
    Service::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*Service::GetClassData() const { return &_class_data_; }

void Service::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message* to,
                      const ::PROTOBUF_NAMESPACE_ID::Message& from) {
  static_cast<Service *>(to)->MergeFrom(
      static_cast<const Service &>(from));
}


void Service::MergeFrom(const Service& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:service.Service)
  GOOGLE_DCHECK_NE(&from, this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  metadata_.MergeFrom(from.metadata_);
  if (from._internal_has_namespace_()) {
    _internal_mutable_namespace_()->::PROTOBUF_NAMESPACE_ID::StringValue::MergeFrom(from._internal_namespace_());
  }
  if (from._internal_has_name()) {
    _internal_mutable_name()->::PROTOBUF_NAMESPACE_ID::StringValue::MergeFrom(from._internal_name());
  }
  if (from._internal_has_ports()) {
    _internal_mutable_ports()->::PROTOBUF_NAMESPACE_ID::StringValue::MergeFrom(from._internal_ports());
  }
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void Service::CopyFrom(const Service& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:service.Service)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Service::IsInitialized() const {
  return true;
}

void Service::InternalSwap(Service* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  metadata_.InternalSwap(&other->metadata_);
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(Service, ports_)
      + sizeof(Service::ports_)
      - PROTOBUF_FIELD_OFFSET(Service, namespace__)>(
          reinterpret_cast<char*>(&namespace__),
          reinterpret_cast<char*>(&other->namespace__));
}

::PROTOBUF_NAMESPACE_ID::Metadata Service::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_service_2eproto_getter, &descriptor_table_service_2eproto_once,
      file_level_metadata_service_2eproto[1]);
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace service
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::service::Service_MetadataEntry_DoNotUse*
Arena::CreateMaybeMessage< ::service::Service_MetadataEntry_DoNotUse >(Arena* arena) {
  return Arena::CreateMessageInternal< ::service::Service_MetadataEntry_DoNotUse >(arena);
}
template<> PROTOBUF_NOINLINE ::service::Service*
Arena::CreateMaybeMessage< ::service::Service >(Arena* arena) {
  return Arena::CreateMessageInternal< ::service::Service >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
