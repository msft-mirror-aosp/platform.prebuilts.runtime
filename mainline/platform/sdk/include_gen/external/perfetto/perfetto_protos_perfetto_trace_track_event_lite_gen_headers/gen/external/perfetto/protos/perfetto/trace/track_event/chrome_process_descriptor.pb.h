// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: protos/perfetto/trace/track_event/chrome_process_descriptor.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_protos_2fperfetto_2ftrace_2ftrack_5fevent_2fchrome_5fprocess_5fdescriptor_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_protos_2fperfetto_2ftrace_2ftrack_5fevent_2fchrome_5fprocess_5fdescriptor_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3009000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3009001 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/inlined_string_field.h>
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/message_lite.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/generated_enum_util.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_protos_2fperfetto_2ftrace_2ftrack_5fevent_2fchrome_5fprocess_5fdescriptor_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_protos_2fperfetto_2ftrace_2ftrack_5fevent_2fchrome_5fprocess_5fdescriptor_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxillaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[1]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
namespace perfetto {
namespace protos {
class ChromeProcessDescriptor;
class ChromeProcessDescriptorDefaultTypeInternal;
extern ChromeProcessDescriptorDefaultTypeInternal _ChromeProcessDescriptor_default_instance_;
}  // namespace protos
}  // namespace perfetto
PROTOBUF_NAMESPACE_OPEN
template<> ::perfetto::protos::ChromeProcessDescriptor* Arena::CreateMaybeMessage<::perfetto::protos::ChromeProcessDescriptor>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace perfetto {
namespace protos {

enum ChromeProcessDescriptor_ProcessType : int {
  ChromeProcessDescriptor_ProcessType_PROCESS_UNSPECIFIED = 0,
  ChromeProcessDescriptor_ProcessType_PROCESS_BROWSER = 1,
  ChromeProcessDescriptor_ProcessType_PROCESS_RENDERER = 2,
  ChromeProcessDescriptor_ProcessType_PROCESS_UTILITY = 3,
  ChromeProcessDescriptor_ProcessType_PROCESS_ZYGOTE = 4,
  ChromeProcessDescriptor_ProcessType_PROCESS_SANDBOX_HELPER = 5,
  ChromeProcessDescriptor_ProcessType_PROCESS_GPU = 6,
  ChromeProcessDescriptor_ProcessType_PROCESS_PPAPI_PLUGIN = 7,
  ChromeProcessDescriptor_ProcessType_PROCESS_PPAPI_BROKER = 8,
  ChromeProcessDescriptor_ProcessType_PROCESS_SERVICE_NETWORK = 9,
  ChromeProcessDescriptor_ProcessType_PROCESS_SERVICE_TRACING = 10,
  ChromeProcessDescriptor_ProcessType_PROCESS_SERVICE_STORAGE = 11,
  ChromeProcessDescriptor_ProcessType_PROCESS_SERVICE_AUDIO = 12,
  ChromeProcessDescriptor_ProcessType_PROCESS_SERVICE_DATA_DECODER = 13,
  ChromeProcessDescriptor_ProcessType_PROCESS_SERVICE_UTIL_WIN = 14,
  ChromeProcessDescriptor_ProcessType_PROCESS_SERVICE_PROXY_RESOLVER = 15,
  ChromeProcessDescriptor_ProcessType_PROCESS_SERVICE_CDM = 16,
  ChromeProcessDescriptor_ProcessType_PROCESS_SERVICE_VIDEO_CAPTURE = 17,
  ChromeProcessDescriptor_ProcessType_PROCESS_SERVICE_UNZIPPER = 18,
  ChromeProcessDescriptor_ProcessType_PROCESS_SERVICE_MIRRORING = 19,
  ChromeProcessDescriptor_ProcessType_PROCESS_SERVICE_FILEPATCHER = 20,
  ChromeProcessDescriptor_ProcessType_PROCESS_SERVICE_TTS = 21,
  ChromeProcessDescriptor_ProcessType_PROCESS_SERVICE_PRINTING = 22,
  ChromeProcessDescriptor_ProcessType_PROCESS_SERVICE_QUARANTINE = 23,
  ChromeProcessDescriptor_ProcessType_PROCESS_SERVICE_CROS_LOCALSEARCH = 24,
  ChromeProcessDescriptor_ProcessType_PROCESS_SERVICE_CROS_ASSISTANT_AUDIO_DECODER = 25,
  ChromeProcessDescriptor_ProcessType_PROCESS_SERVICE_FILEUTIL = 26,
  ChromeProcessDescriptor_ProcessType_PROCESS_SERVICE_PRINTCOMPOSITOR = 27,
  ChromeProcessDescriptor_ProcessType_PROCESS_SERVICE_PAINTPREVIEW = 28,
  ChromeProcessDescriptor_ProcessType_PROCESS_SERVICE_SPEECHRECOGNITION = 29,
  ChromeProcessDescriptor_ProcessType_PROCESS_SERVICE_XRDEVICE = 30,
  ChromeProcessDescriptor_ProcessType_PROCESS_SERVICE_READICON = 31,
  ChromeProcessDescriptor_ProcessType_PROCESS_SERVICE_LANGUAGEDETECTION = 32,
  ChromeProcessDescriptor_ProcessType_PROCESS_SERVICE_SHARING = 33,
  ChromeProcessDescriptor_ProcessType_PROCESS_SERVICE_MEDIAPARSER = 34,
  ChromeProcessDescriptor_ProcessType_PROCESS_SERVICE_QRCODEGENERATOR = 35,
  ChromeProcessDescriptor_ProcessType_PROCESS_SERVICE_PROFILEIMPORT = 36,
  ChromeProcessDescriptor_ProcessType_PROCESS_SERVICE_IME = 37,
  ChromeProcessDescriptor_ProcessType_PROCESS_SERVICE_RECORDING = 38,
  ChromeProcessDescriptor_ProcessType_PROCESS_SERVICE_SHAPEDETECTION = 39,
  ChromeProcessDescriptor_ProcessType_PROCESS_RENDERER_EXTENSION = 40
};
bool ChromeProcessDescriptor_ProcessType_IsValid(int value);
constexpr ChromeProcessDescriptor_ProcessType ChromeProcessDescriptor_ProcessType_ProcessType_MIN = ChromeProcessDescriptor_ProcessType_PROCESS_UNSPECIFIED;
constexpr ChromeProcessDescriptor_ProcessType ChromeProcessDescriptor_ProcessType_ProcessType_MAX = ChromeProcessDescriptor_ProcessType_PROCESS_RENDERER_EXTENSION;
constexpr int ChromeProcessDescriptor_ProcessType_ProcessType_ARRAYSIZE = ChromeProcessDescriptor_ProcessType_ProcessType_MAX + 1;

const std::string& ChromeProcessDescriptor_ProcessType_Name(ChromeProcessDescriptor_ProcessType value);
template<typename T>
inline const std::string& ChromeProcessDescriptor_ProcessType_Name(T enum_t_value) {
  static_assert(::std::is_same<T, ChromeProcessDescriptor_ProcessType>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function ChromeProcessDescriptor_ProcessType_Name.");
  return ChromeProcessDescriptor_ProcessType_Name(static_cast<ChromeProcessDescriptor_ProcessType>(enum_t_value));
}
bool ChromeProcessDescriptor_ProcessType_Parse(
    const std::string& name, ChromeProcessDescriptor_ProcessType* value);
// ===================================================================

class ChromeProcessDescriptor :
    public ::PROTOBUF_NAMESPACE_ID::MessageLite /* @@protoc_insertion_point(class_definition:perfetto.protos.ChromeProcessDescriptor) */ {
 public:
  ChromeProcessDescriptor();
  virtual ~ChromeProcessDescriptor();

  ChromeProcessDescriptor(const ChromeProcessDescriptor& from);
  ChromeProcessDescriptor(ChromeProcessDescriptor&& from) noexcept
    : ChromeProcessDescriptor() {
    *this = ::std::move(from);
  }

  inline ChromeProcessDescriptor& operator=(const ChromeProcessDescriptor& from) {
    CopyFrom(from);
    return *this;
  }
  inline ChromeProcessDescriptor& operator=(ChromeProcessDescriptor&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  inline const std::string& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }
  inline std::string* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ChromeProcessDescriptor& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const ChromeProcessDescriptor* internal_default_instance() {
    return reinterpret_cast<const ChromeProcessDescriptor*>(
               &_ChromeProcessDescriptor_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(ChromeProcessDescriptor& a, ChromeProcessDescriptor& b) {
    a.Swap(&b);
  }
  inline void Swap(ChromeProcessDescriptor* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline ChromeProcessDescriptor* New() const final {
    return CreateMaybeMessage<ChromeProcessDescriptor>(nullptr);
  }

  ChromeProcessDescriptor* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<ChromeProcessDescriptor>(arena);
  }
  void CheckTypeAndMergeFrom(const ::PROTOBUF_NAMESPACE_ID::MessageLite& from)
    final;
  void CopyFrom(const ChromeProcessDescriptor& from);
  void MergeFrom(const ChromeProcessDescriptor& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  #if GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  #else
  bool MergePartialFromCodedStream(
      ::PROTOBUF_NAMESPACE_ID::io::CodedInputStream* input) final;
  #endif  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  void SerializeWithCachedSizes(
      ::PROTOBUF_NAMESPACE_ID::io::CodedOutputStream* output) const final;
  void DiscardUnknownFields();
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(ChromeProcessDescriptor* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "perfetto.protos.ChromeProcessDescriptor";
  }
  private:
  inline ::PROTOBUF_NAMESPACE_ID::Arena* GetArenaNoVirtual() const {
    return nullptr;
  }
  inline void* MaybeArenaPtr() const {
    return nullptr;
  }
  public:

  std::string GetTypeName() const final;

  // nested types ----------------------------------------------------

  typedef ChromeProcessDescriptor_ProcessType ProcessType;
  static constexpr ProcessType PROCESS_UNSPECIFIED =
    ChromeProcessDescriptor_ProcessType_PROCESS_UNSPECIFIED;
  static constexpr ProcessType PROCESS_BROWSER =
    ChromeProcessDescriptor_ProcessType_PROCESS_BROWSER;
  static constexpr ProcessType PROCESS_RENDERER =
    ChromeProcessDescriptor_ProcessType_PROCESS_RENDERER;
  static constexpr ProcessType PROCESS_UTILITY =
    ChromeProcessDescriptor_ProcessType_PROCESS_UTILITY;
  static constexpr ProcessType PROCESS_ZYGOTE =
    ChromeProcessDescriptor_ProcessType_PROCESS_ZYGOTE;
  static constexpr ProcessType PROCESS_SANDBOX_HELPER =
    ChromeProcessDescriptor_ProcessType_PROCESS_SANDBOX_HELPER;
  static constexpr ProcessType PROCESS_GPU =
    ChromeProcessDescriptor_ProcessType_PROCESS_GPU;
  static constexpr ProcessType PROCESS_PPAPI_PLUGIN =
    ChromeProcessDescriptor_ProcessType_PROCESS_PPAPI_PLUGIN;
  static constexpr ProcessType PROCESS_PPAPI_BROKER =
    ChromeProcessDescriptor_ProcessType_PROCESS_PPAPI_BROKER;
  static constexpr ProcessType PROCESS_SERVICE_NETWORK =
    ChromeProcessDescriptor_ProcessType_PROCESS_SERVICE_NETWORK;
  static constexpr ProcessType PROCESS_SERVICE_TRACING =
    ChromeProcessDescriptor_ProcessType_PROCESS_SERVICE_TRACING;
  static constexpr ProcessType PROCESS_SERVICE_STORAGE =
    ChromeProcessDescriptor_ProcessType_PROCESS_SERVICE_STORAGE;
  static constexpr ProcessType PROCESS_SERVICE_AUDIO =
    ChromeProcessDescriptor_ProcessType_PROCESS_SERVICE_AUDIO;
  static constexpr ProcessType PROCESS_SERVICE_DATA_DECODER =
    ChromeProcessDescriptor_ProcessType_PROCESS_SERVICE_DATA_DECODER;
  static constexpr ProcessType PROCESS_SERVICE_UTIL_WIN =
    ChromeProcessDescriptor_ProcessType_PROCESS_SERVICE_UTIL_WIN;
  static constexpr ProcessType PROCESS_SERVICE_PROXY_RESOLVER =
    ChromeProcessDescriptor_ProcessType_PROCESS_SERVICE_PROXY_RESOLVER;
  static constexpr ProcessType PROCESS_SERVICE_CDM =
    ChromeProcessDescriptor_ProcessType_PROCESS_SERVICE_CDM;
  static constexpr ProcessType PROCESS_SERVICE_VIDEO_CAPTURE =
    ChromeProcessDescriptor_ProcessType_PROCESS_SERVICE_VIDEO_CAPTURE;
  static constexpr ProcessType PROCESS_SERVICE_UNZIPPER =
    ChromeProcessDescriptor_ProcessType_PROCESS_SERVICE_UNZIPPER;
  static constexpr ProcessType PROCESS_SERVICE_MIRRORING =
    ChromeProcessDescriptor_ProcessType_PROCESS_SERVICE_MIRRORING;
  static constexpr ProcessType PROCESS_SERVICE_FILEPATCHER =
    ChromeProcessDescriptor_ProcessType_PROCESS_SERVICE_FILEPATCHER;
  static constexpr ProcessType PROCESS_SERVICE_TTS =
    ChromeProcessDescriptor_ProcessType_PROCESS_SERVICE_TTS;
  static constexpr ProcessType PROCESS_SERVICE_PRINTING =
    ChromeProcessDescriptor_ProcessType_PROCESS_SERVICE_PRINTING;
  static constexpr ProcessType PROCESS_SERVICE_QUARANTINE =
    ChromeProcessDescriptor_ProcessType_PROCESS_SERVICE_QUARANTINE;
  static constexpr ProcessType PROCESS_SERVICE_CROS_LOCALSEARCH =
    ChromeProcessDescriptor_ProcessType_PROCESS_SERVICE_CROS_LOCALSEARCH;
  static constexpr ProcessType PROCESS_SERVICE_CROS_ASSISTANT_AUDIO_DECODER =
    ChromeProcessDescriptor_ProcessType_PROCESS_SERVICE_CROS_ASSISTANT_AUDIO_DECODER;
  static constexpr ProcessType PROCESS_SERVICE_FILEUTIL =
    ChromeProcessDescriptor_ProcessType_PROCESS_SERVICE_FILEUTIL;
  static constexpr ProcessType PROCESS_SERVICE_PRINTCOMPOSITOR =
    ChromeProcessDescriptor_ProcessType_PROCESS_SERVICE_PRINTCOMPOSITOR;
  static constexpr ProcessType PROCESS_SERVICE_PAINTPREVIEW =
    ChromeProcessDescriptor_ProcessType_PROCESS_SERVICE_PAINTPREVIEW;
  static constexpr ProcessType PROCESS_SERVICE_SPEECHRECOGNITION =
    ChromeProcessDescriptor_ProcessType_PROCESS_SERVICE_SPEECHRECOGNITION;
  static constexpr ProcessType PROCESS_SERVICE_XRDEVICE =
    ChromeProcessDescriptor_ProcessType_PROCESS_SERVICE_XRDEVICE;
  static constexpr ProcessType PROCESS_SERVICE_READICON =
    ChromeProcessDescriptor_ProcessType_PROCESS_SERVICE_READICON;
  static constexpr ProcessType PROCESS_SERVICE_LANGUAGEDETECTION =
    ChromeProcessDescriptor_ProcessType_PROCESS_SERVICE_LANGUAGEDETECTION;
  static constexpr ProcessType PROCESS_SERVICE_SHARING =
    ChromeProcessDescriptor_ProcessType_PROCESS_SERVICE_SHARING;
  static constexpr ProcessType PROCESS_SERVICE_MEDIAPARSER =
    ChromeProcessDescriptor_ProcessType_PROCESS_SERVICE_MEDIAPARSER;
  static constexpr ProcessType PROCESS_SERVICE_QRCODEGENERATOR =
    ChromeProcessDescriptor_ProcessType_PROCESS_SERVICE_QRCODEGENERATOR;
  static constexpr ProcessType PROCESS_SERVICE_PROFILEIMPORT =
    ChromeProcessDescriptor_ProcessType_PROCESS_SERVICE_PROFILEIMPORT;
  static constexpr ProcessType PROCESS_SERVICE_IME =
    ChromeProcessDescriptor_ProcessType_PROCESS_SERVICE_IME;
  static constexpr ProcessType PROCESS_SERVICE_RECORDING =
    ChromeProcessDescriptor_ProcessType_PROCESS_SERVICE_RECORDING;
  static constexpr ProcessType PROCESS_SERVICE_SHAPEDETECTION =
    ChromeProcessDescriptor_ProcessType_PROCESS_SERVICE_SHAPEDETECTION;
  static constexpr ProcessType PROCESS_RENDERER_EXTENSION =
    ChromeProcessDescriptor_ProcessType_PROCESS_RENDERER_EXTENSION;
  static inline bool ProcessType_IsValid(int value) {
    return ChromeProcessDescriptor_ProcessType_IsValid(value);
  }
  static constexpr ProcessType ProcessType_MIN =
    ChromeProcessDescriptor_ProcessType_ProcessType_MIN;
  static constexpr ProcessType ProcessType_MAX =
    ChromeProcessDescriptor_ProcessType_ProcessType_MAX;
  static constexpr int ProcessType_ARRAYSIZE =
    ChromeProcessDescriptor_ProcessType_ProcessType_ARRAYSIZE;
  template<typename T>
  static inline const std::string& ProcessType_Name(T enum_t_value) {
    static_assert(::std::is_same<T, ProcessType>::value ||
      ::std::is_integral<T>::value,
      "Incorrect type passed to function ProcessType_Name.");
    return ChromeProcessDescriptor_ProcessType_Name(enum_t_value);
  }
  static inline bool ProcessType_Parse(const std::string& name,
      ProcessType* value) {
    return ChromeProcessDescriptor_ProcessType_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  enum : int {
    kHostAppPackageNameFieldNumber = 4,
    kProcessTypeFieldNumber = 1,
    kProcessPriorityFieldNumber = 2,
    kCrashTraceIdFieldNumber = 5,
    kLegacySortIndexFieldNumber = 3,
  };
  // optional string host_app_package_name = 4;
  bool has_host_app_package_name() const;
  void clear_host_app_package_name();
  const std::string& host_app_package_name() const;
  void set_host_app_package_name(const std::string& value);
  void set_host_app_package_name(std::string&& value);
  void set_host_app_package_name(const char* value);
  void set_host_app_package_name(const char* value, size_t size);
  std::string* mutable_host_app_package_name();
  std::string* release_host_app_package_name();
  void set_allocated_host_app_package_name(std::string* host_app_package_name);

  // optional .perfetto.protos.ChromeProcessDescriptor.ProcessType process_type = 1;
  bool has_process_type() const;
  void clear_process_type();
  ::perfetto::protos::ChromeProcessDescriptor_ProcessType process_type() const;
  void set_process_type(::perfetto::protos::ChromeProcessDescriptor_ProcessType value);

  // optional int32 process_priority = 2;
  bool has_process_priority() const;
  void clear_process_priority();
  ::PROTOBUF_NAMESPACE_ID::int32 process_priority() const;
  void set_process_priority(::PROTOBUF_NAMESPACE_ID::int32 value);

  // optional uint64 crash_trace_id = 5;
  bool has_crash_trace_id() const;
  void clear_crash_trace_id();
  ::PROTOBUF_NAMESPACE_ID::uint64 crash_trace_id() const;
  void set_crash_trace_id(::PROTOBUF_NAMESPACE_ID::uint64 value);

  // optional int32 legacy_sort_index = 3;
  bool has_legacy_sort_index() const;
  void clear_legacy_sort_index();
  ::PROTOBUF_NAMESPACE_ID::int32 legacy_sort_index() const;
  void set_legacy_sort_index(::PROTOBUF_NAMESPACE_ID::int32 value);

  // @@protoc_insertion_point(class_scope:perfetto.protos.ChromeProcessDescriptor)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArenaLite _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr host_app_package_name_;
  int process_type_;
  ::PROTOBUF_NAMESPACE_ID::int32 process_priority_;
  ::PROTOBUF_NAMESPACE_ID::uint64 crash_trace_id_;
  ::PROTOBUF_NAMESPACE_ID::int32 legacy_sort_index_;
  friend struct ::TableStruct_protos_2fperfetto_2ftrace_2ftrack_5fevent_2fchrome_5fprocess_5fdescriptor_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// ChromeProcessDescriptor

// optional .perfetto.protos.ChromeProcessDescriptor.ProcessType process_type = 1;
inline bool ChromeProcessDescriptor::has_process_type() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void ChromeProcessDescriptor::clear_process_type() {
  process_type_ = 0;
  _has_bits_[0] &= ~0x00000002u;
}
inline ::perfetto::protos::ChromeProcessDescriptor_ProcessType ChromeProcessDescriptor::process_type() const {
  // @@protoc_insertion_point(field_get:perfetto.protos.ChromeProcessDescriptor.process_type)
  return static_cast< ::perfetto::protos::ChromeProcessDescriptor_ProcessType >(process_type_);
}
inline void ChromeProcessDescriptor::set_process_type(::perfetto::protos::ChromeProcessDescriptor_ProcessType value) {
  assert(::perfetto::protos::ChromeProcessDescriptor_ProcessType_IsValid(value));
  _has_bits_[0] |= 0x00000002u;
  process_type_ = value;
  // @@protoc_insertion_point(field_set:perfetto.protos.ChromeProcessDescriptor.process_type)
}

// optional int32 process_priority = 2;
inline bool ChromeProcessDescriptor::has_process_priority() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void ChromeProcessDescriptor::clear_process_priority() {
  process_priority_ = 0;
  _has_bits_[0] &= ~0x00000004u;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 ChromeProcessDescriptor::process_priority() const {
  // @@protoc_insertion_point(field_get:perfetto.protos.ChromeProcessDescriptor.process_priority)
  return process_priority_;
}
inline void ChromeProcessDescriptor::set_process_priority(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _has_bits_[0] |= 0x00000004u;
  process_priority_ = value;
  // @@protoc_insertion_point(field_set:perfetto.protos.ChromeProcessDescriptor.process_priority)
}

// optional int32 legacy_sort_index = 3;
inline bool ChromeProcessDescriptor::has_legacy_sort_index() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void ChromeProcessDescriptor::clear_legacy_sort_index() {
  legacy_sort_index_ = 0;
  _has_bits_[0] &= ~0x00000010u;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 ChromeProcessDescriptor::legacy_sort_index() const {
  // @@protoc_insertion_point(field_get:perfetto.protos.ChromeProcessDescriptor.legacy_sort_index)
  return legacy_sort_index_;
}
inline void ChromeProcessDescriptor::set_legacy_sort_index(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _has_bits_[0] |= 0x00000010u;
  legacy_sort_index_ = value;
  // @@protoc_insertion_point(field_set:perfetto.protos.ChromeProcessDescriptor.legacy_sort_index)
}

// optional string host_app_package_name = 4;
inline bool ChromeProcessDescriptor::has_host_app_package_name() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void ChromeProcessDescriptor::clear_host_app_package_name() {
  host_app_package_name_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  _has_bits_[0] &= ~0x00000001u;
}
inline const std::string& ChromeProcessDescriptor::host_app_package_name() const {
  // @@protoc_insertion_point(field_get:perfetto.protos.ChromeProcessDescriptor.host_app_package_name)
  return host_app_package_name_.GetNoArena();
}
inline void ChromeProcessDescriptor::set_host_app_package_name(const std::string& value) {
  _has_bits_[0] |= 0x00000001u;
  host_app_package_name_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:perfetto.protos.ChromeProcessDescriptor.host_app_package_name)
}
inline void ChromeProcessDescriptor::set_host_app_package_name(std::string&& value) {
  _has_bits_[0] |= 0x00000001u;
  host_app_package_name_.SetNoArena(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:perfetto.protos.ChromeProcessDescriptor.host_app_package_name)
}
inline void ChromeProcessDescriptor::set_host_app_package_name(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  _has_bits_[0] |= 0x00000001u;
  host_app_package_name_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:perfetto.protos.ChromeProcessDescriptor.host_app_package_name)
}
inline void ChromeProcessDescriptor::set_host_app_package_name(const char* value, size_t size) {
  _has_bits_[0] |= 0x00000001u;
  host_app_package_name_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:perfetto.protos.ChromeProcessDescriptor.host_app_package_name)
}
inline std::string* ChromeProcessDescriptor::mutable_host_app_package_name() {
  _has_bits_[0] |= 0x00000001u;
  // @@protoc_insertion_point(field_mutable:perfetto.protos.ChromeProcessDescriptor.host_app_package_name)
  return host_app_package_name_.MutableNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline std::string* ChromeProcessDescriptor::release_host_app_package_name() {
  // @@protoc_insertion_point(field_release:perfetto.protos.ChromeProcessDescriptor.host_app_package_name)
  if (!has_host_app_package_name()) {
    return nullptr;
  }
  _has_bits_[0] &= ~0x00000001u;
  return host_app_package_name_.ReleaseNonDefaultNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline void ChromeProcessDescriptor::set_allocated_host_app_package_name(std::string* host_app_package_name) {
  if (host_app_package_name != nullptr) {
    _has_bits_[0] |= 0x00000001u;
  } else {
    _has_bits_[0] &= ~0x00000001u;
  }
  host_app_package_name_.SetAllocatedNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), host_app_package_name);
  // @@protoc_insertion_point(field_set_allocated:perfetto.protos.ChromeProcessDescriptor.host_app_package_name)
}

// optional uint64 crash_trace_id = 5;
inline bool ChromeProcessDescriptor::has_crash_trace_id() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void ChromeProcessDescriptor::clear_crash_trace_id() {
  crash_trace_id_ = PROTOBUF_ULONGLONG(0);
  _has_bits_[0] &= ~0x00000008u;
}
inline ::PROTOBUF_NAMESPACE_ID::uint64 ChromeProcessDescriptor::crash_trace_id() const {
  // @@protoc_insertion_point(field_get:perfetto.protos.ChromeProcessDescriptor.crash_trace_id)
  return crash_trace_id_;
}
inline void ChromeProcessDescriptor::set_crash_trace_id(::PROTOBUF_NAMESPACE_ID::uint64 value) {
  _has_bits_[0] |= 0x00000008u;
  crash_trace_id_ = value;
  // @@protoc_insertion_point(field_set:perfetto.protos.ChromeProcessDescriptor.crash_trace_id)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace protos
}  // namespace perfetto

PROTOBUF_NAMESPACE_OPEN

template <> struct is_proto_enum< ::perfetto::protos::ChromeProcessDescriptor_ProcessType> : ::std::true_type {};

PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_protos_2fperfetto_2ftrace_2ftrack_5fevent_2fchrome_5fprocess_5fdescriptor_2eproto
