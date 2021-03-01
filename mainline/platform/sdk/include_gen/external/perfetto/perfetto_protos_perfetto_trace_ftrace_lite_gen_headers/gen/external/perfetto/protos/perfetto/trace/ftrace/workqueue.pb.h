// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: protos/perfetto/trace/ftrace/workqueue.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_protos_2fperfetto_2ftrace_2fftrace_2fworkqueue_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_protos_2fperfetto_2ftrace_2fftrace_2fworkqueue_2eproto

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
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_protos_2fperfetto_2ftrace_2fftrace_2fworkqueue_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_protos_2fperfetto_2ftrace_2fftrace_2fworkqueue_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxillaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[4]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
namespace perfetto {
namespace protos {
class WorkqueueActivateWorkFtraceEvent;
class WorkqueueActivateWorkFtraceEventDefaultTypeInternal;
extern WorkqueueActivateWorkFtraceEventDefaultTypeInternal _WorkqueueActivateWorkFtraceEvent_default_instance_;
class WorkqueueExecuteEndFtraceEvent;
class WorkqueueExecuteEndFtraceEventDefaultTypeInternal;
extern WorkqueueExecuteEndFtraceEventDefaultTypeInternal _WorkqueueExecuteEndFtraceEvent_default_instance_;
class WorkqueueExecuteStartFtraceEvent;
class WorkqueueExecuteStartFtraceEventDefaultTypeInternal;
extern WorkqueueExecuteStartFtraceEventDefaultTypeInternal _WorkqueueExecuteStartFtraceEvent_default_instance_;
class WorkqueueQueueWorkFtraceEvent;
class WorkqueueQueueWorkFtraceEventDefaultTypeInternal;
extern WorkqueueQueueWorkFtraceEventDefaultTypeInternal _WorkqueueQueueWorkFtraceEvent_default_instance_;
}  // namespace protos
}  // namespace perfetto
PROTOBUF_NAMESPACE_OPEN
template<> ::perfetto::protos::WorkqueueActivateWorkFtraceEvent* Arena::CreateMaybeMessage<::perfetto::protos::WorkqueueActivateWorkFtraceEvent>(Arena*);
template<> ::perfetto::protos::WorkqueueExecuteEndFtraceEvent* Arena::CreateMaybeMessage<::perfetto::protos::WorkqueueExecuteEndFtraceEvent>(Arena*);
template<> ::perfetto::protos::WorkqueueExecuteStartFtraceEvent* Arena::CreateMaybeMessage<::perfetto::protos::WorkqueueExecuteStartFtraceEvent>(Arena*);
template<> ::perfetto::protos::WorkqueueQueueWorkFtraceEvent* Arena::CreateMaybeMessage<::perfetto::protos::WorkqueueQueueWorkFtraceEvent>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace perfetto {
namespace protos {

// ===================================================================

class WorkqueueActivateWorkFtraceEvent :
    public ::PROTOBUF_NAMESPACE_ID::MessageLite /* @@protoc_insertion_point(class_definition:perfetto.protos.WorkqueueActivateWorkFtraceEvent) */ {
 public:
  WorkqueueActivateWorkFtraceEvent();
  virtual ~WorkqueueActivateWorkFtraceEvent();

  WorkqueueActivateWorkFtraceEvent(const WorkqueueActivateWorkFtraceEvent& from);
  WorkqueueActivateWorkFtraceEvent(WorkqueueActivateWorkFtraceEvent&& from) noexcept
    : WorkqueueActivateWorkFtraceEvent() {
    *this = ::std::move(from);
  }

  inline WorkqueueActivateWorkFtraceEvent& operator=(const WorkqueueActivateWorkFtraceEvent& from) {
    CopyFrom(from);
    return *this;
  }
  inline WorkqueueActivateWorkFtraceEvent& operator=(WorkqueueActivateWorkFtraceEvent&& from) noexcept {
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

  static const WorkqueueActivateWorkFtraceEvent& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const WorkqueueActivateWorkFtraceEvent* internal_default_instance() {
    return reinterpret_cast<const WorkqueueActivateWorkFtraceEvent*>(
               &_WorkqueueActivateWorkFtraceEvent_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(WorkqueueActivateWorkFtraceEvent& a, WorkqueueActivateWorkFtraceEvent& b) {
    a.Swap(&b);
  }
  inline void Swap(WorkqueueActivateWorkFtraceEvent* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline WorkqueueActivateWorkFtraceEvent* New() const final {
    return CreateMaybeMessage<WorkqueueActivateWorkFtraceEvent>(nullptr);
  }

  WorkqueueActivateWorkFtraceEvent* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<WorkqueueActivateWorkFtraceEvent>(arena);
  }
  void CheckTypeAndMergeFrom(const ::PROTOBUF_NAMESPACE_ID::MessageLite& from)
    final;
  void CopyFrom(const WorkqueueActivateWorkFtraceEvent& from);
  void MergeFrom(const WorkqueueActivateWorkFtraceEvent& from);
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
  void InternalSwap(WorkqueueActivateWorkFtraceEvent* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "perfetto.protos.WorkqueueActivateWorkFtraceEvent";
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

  // accessors -------------------------------------------------------

  enum : int {
    kWorkFieldNumber = 1,
  };
  // optional uint64 work = 1;
  bool has_work() const;
  void clear_work();
  ::PROTOBUF_NAMESPACE_ID::uint64 work() const;
  void set_work(::PROTOBUF_NAMESPACE_ID::uint64 value);

  // @@protoc_insertion_point(class_scope:perfetto.protos.WorkqueueActivateWorkFtraceEvent)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArenaLite _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  ::PROTOBUF_NAMESPACE_ID::uint64 work_;
  friend struct ::TableStruct_protos_2fperfetto_2ftrace_2fftrace_2fworkqueue_2eproto;
};
// -------------------------------------------------------------------

class WorkqueueExecuteEndFtraceEvent :
    public ::PROTOBUF_NAMESPACE_ID::MessageLite /* @@protoc_insertion_point(class_definition:perfetto.protos.WorkqueueExecuteEndFtraceEvent) */ {
 public:
  WorkqueueExecuteEndFtraceEvent();
  virtual ~WorkqueueExecuteEndFtraceEvent();

  WorkqueueExecuteEndFtraceEvent(const WorkqueueExecuteEndFtraceEvent& from);
  WorkqueueExecuteEndFtraceEvent(WorkqueueExecuteEndFtraceEvent&& from) noexcept
    : WorkqueueExecuteEndFtraceEvent() {
    *this = ::std::move(from);
  }

  inline WorkqueueExecuteEndFtraceEvent& operator=(const WorkqueueExecuteEndFtraceEvent& from) {
    CopyFrom(from);
    return *this;
  }
  inline WorkqueueExecuteEndFtraceEvent& operator=(WorkqueueExecuteEndFtraceEvent&& from) noexcept {
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

  static const WorkqueueExecuteEndFtraceEvent& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const WorkqueueExecuteEndFtraceEvent* internal_default_instance() {
    return reinterpret_cast<const WorkqueueExecuteEndFtraceEvent*>(
               &_WorkqueueExecuteEndFtraceEvent_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(WorkqueueExecuteEndFtraceEvent& a, WorkqueueExecuteEndFtraceEvent& b) {
    a.Swap(&b);
  }
  inline void Swap(WorkqueueExecuteEndFtraceEvent* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline WorkqueueExecuteEndFtraceEvent* New() const final {
    return CreateMaybeMessage<WorkqueueExecuteEndFtraceEvent>(nullptr);
  }

  WorkqueueExecuteEndFtraceEvent* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<WorkqueueExecuteEndFtraceEvent>(arena);
  }
  void CheckTypeAndMergeFrom(const ::PROTOBUF_NAMESPACE_ID::MessageLite& from)
    final;
  void CopyFrom(const WorkqueueExecuteEndFtraceEvent& from);
  void MergeFrom(const WorkqueueExecuteEndFtraceEvent& from);
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
  void InternalSwap(WorkqueueExecuteEndFtraceEvent* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "perfetto.protos.WorkqueueExecuteEndFtraceEvent";
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

  // accessors -------------------------------------------------------

  enum : int {
    kWorkFieldNumber = 1,
  };
  // optional uint64 work = 1;
  bool has_work() const;
  void clear_work();
  ::PROTOBUF_NAMESPACE_ID::uint64 work() const;
  void set_work(::PROTOBUF_NAMESPACE_ID::uint64 value);

  // @@protoc_insertion_point(class_scope:perfetto.protos.WorkqueueExecuteEndFtraceEvent)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArenaLite _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  ::PROTOBUF_NAMESPACE_ID::uint64 work_;
  friend struct ::TableStruct_protos_2fperfetto_2ftrace_2fftrace_2fworkqueue_2eproto;
};
// -------------------------------------------------------------------

class WorkqueueExecuteStartFtraceEvent :
    public ::PROTOBUF_NAMESPACE_ID::MessageLite /* @@protoc_insertion_point(class_definition:perfetto.protos.WorkqueueExecuteStartFtraceEvent) */ {
 public:
  WorkqueueExecuteStartFtraceEvent();
  virtual ~WorkqueueExecuteStartFtraceEvent();

  WorkqueueExecuteStartFtraceEvent(const WorkqueueExecuteStartFtraceEvent& from);
  WorkqueueExecuteStartFtraceEvent(WorkqueueExecuteStartFtraceEvent&& from) noexcept
    : WorkqueueExecuteStartFtraceEvent() {
    *this = ::std::move(from);
  }

  inline WorkqueueExecuteStartFtraceEvent& operator=(const WorkqueueExecuteStartFtraceEvent& from) {
    CopyFrom(from);
    return *this;
  }
  inline WorkqueueExecuteStartFtraceEvent& operator=(WorkqueueExecuteStartFtraceEvent&& from) noexcept {
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

  static const WorkqueueExecuteStartFtraceEvent& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const WorkqueueExecuteStartFtraceEvent* internal_default_instance() {
    return reinterpret_cast<const WorkqueueExecuteStartFtraceEvent*>(
               &_WorkqueueExecuteStartFtraceEvent_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    2;

  friend void swap(WorkqueueExecuteStartFtraceEvent& a, WorkqueueExecuteStartFtraceEvent& b) {
    a.Swap(&b);
  }
  inline void Swap(WorkqueueExecuteStartFtraceEvent* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline WorkqueueExecuteStartFtraceEvent* New() const final {
    return CreateMaybeMessage<WorkqueueExecuteStartFtraceEvent>(nullptr);
  }

  WorkqueueExecuteStartFtraceEvent* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<WorkqueueExecuteStartFtraceEvent>(arena);
  }
  void CheckTypeAndMergeFrom(const ::PROTOBUF_NAMESPACE_ID::MessageLite& from)
    final;
  void CopyFrom(const WorkqueueExecuteStartFtraceEvent& from);
  void MergeFrom(const WorkqueueExecuteStartFtraceEvent& from);
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
  void InternalSwap(WorkqueueExecuteStartFtraceEvent* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "perfetto.protos.WorkqueueExecuteStartFtraceEvent";
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

  // accessors -------------------------------------------------------

  enum : int {
    kWorkFieldNumber = 1,
    kFunctionFieldNumber = 2,
  };
  // optional uint64 work = 1;
  bool has_work() const;
  void clear_work();
  ::PROTOBUF_NAMESPACE_ID::uint64 work() const;
  void set_work(::PROTOBUF_NAMESPACE_ID::uint64 value);

  // optional uint64 function = 2;
  bool has_function() const;
  void clear_function();
  ::PROTOBUF_NAMESPACE_ID::uint64 function() const;
  void set_function(::PROTOBUF_NAMESPACE_ID::uint64 value);

  // @@protoc_insertion_point(class_scope:perfetto.protos.WorkqueueExecuteStartFtraceEvent)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArenaLite _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  ::PROTOBUF_NAMESPACE_ID::uint64 work_;
  ::PROTOBUF_NAMESPACE_ID::uint64 function_;
  friend struct ::TableStruct_protos_2fperfetto_2ftrace_2fftrace_2fworkqueue_2eproto;
};
// -------------------------------------------------------------------

class WorkqueueQueueWorkFtraceEvent :
    public ::PROTOBUF_NAMESPACE_ID::MessageLite /* @@protoc_insertion_point(class_definition:perfetto.protos.WorkqueueQueueWorkFtraceEvent) */ {
 public:
  WorkqueueQueueWorkFtraceEvent();
  virtual ~WorkqueueQueueWorkFtraceEvent();

  WorkqueueQueueWorkFtraceEvent(const WorkqueueQueueWorkFtraceEvent& from);
  WorkqueueQueueWorkFtraceEvent(WorkqueueQueueWorkFtraceEvent&& from) noexcept
    : WorkqueueQueueWorkFtraceEvent() {
    *this = ::std::move(from);
  }

  inline WorkqueueQueueWorkFtraceEvent& operator=(const WorkqueueQueueWorkFtraceEvent& from) {
    CopyFrom(from);
    return *this;
  }
  inline WorkqueueQueueWorkFtraceEvent& operator=(WorkqueueQueueWorkFtraceEvent&& from) noexcept {
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

  static const WorkqueueQueueWorkFtraceEvent& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const WorkqueueQueueWorkFtraceEvent* internal_default_instance() {
    return reinterpret_cast<const WorkqueueQueueWorkFtraceEvent*>(
               &_WorkqueueQueueWorkFtraceEvent_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    3;

  friend void swap(WorkqueueQueueWorkFtraceEvent& a, WorkqueueQueueWorkFtraceEvent& b) {
    a.Swap(&b);
  }
  inline void Swap(WorkqueueQueueWorkFtraceEvent* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline WorkqueueQueueWorkFtraceEvent* New() const final {
    return CreateMaybeMessage<WorkqueueQueueWorkFtraceEvent>(nullptr);
  }

  WorkqueueQueueWorkFtraceEvent* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<WorkqueueQueueWorkFtraceEvent>(arena);
  }
  void CheckTypeAndMergeFrom(const ::PROTOBUF_NAMESPACE_ID::MessageLite& from)
    final;
  void CopyFrom(const WorkqueueQueueWorkFtraceEvent& from);
  void MergeFrom(const WorkqueueQueueWorkFtraceEvent& from);
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
  void InternalSwap(WorkqueueQueueWorkFtraceEvent* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "perfetto.protos.WorkqueueQueueWorkFtraceEvent";
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

  // accessors -------------------------------------------------------

  enum : int {
    kWorkFieldNumber = 1,
    kFunctionFieldNumber = 2,
    kWorkqueueFieldNumber = 3,
    kReqCpuFieldNumber = 4,
    kCpuFieldNumber = 5,
  };
  // optional uint64 work = 1;
  bool has_work() const;
  void clear_work();
  ::PROTOBUF_NAMESPACE_ID::uint64 work() const;
  void set_work(::PROTOBUF_NAMESPACE_ID::uint64 value);

  // optional uint64 function = 2;
  bool has_function() const;
  void clear_function();
  ::PROTOBUF_NAMESPACE_ID::uint64 function() const;
  void set_function(::PROTOBUF_NAMESPACE_ID::uint64 value);

  // optional uint64 workqueue = 3;
  bool has_workqueue() const;
  void clear_workqueue();
  ::PROTOBUF_NAMESPACE_ID::uint64 workqueue() const;
  void set_workqueue(::PROTOBUF_NAMESPACE_ID::uint64 value);

  // optional uint32 req_cpu = 4;
  bool has_req_cpu() const;
  void clear_req_cpu();
  ::PROTOBUF_NAMESPACE_ID::uint32 req_cpu() const;
  void set_req_cpu(::PROTOBUF_NAMESPACE_ID::uint32 value);

  // optional uint32 cpu = 5;
  bool has_cpu() const;
  void clear_cpu();
  ::PROTOBUF_NAMESPACE_ID::uint32 cpu() const;
  void set_cpu(::PROTOBUF_NAMESPACE_ID::uint32 value);

  // @@protoc_insertion_point(class_scope:perfetto.protos.WorkqueueQueueWorkFtraceEvent)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArenaLite _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  ::PROTOBUF_NAMESPACE_ID::uint64 work_;
  ::PROTOBUF_NAMESPACE_ID::uint64 function_;
  ::PROTOBUF_NAMESPACE_ID::uint64 workqueue_;
  ::PROTOBUF_NAMESPACE_ID::uint32 req_cpu_;
  ::PROTOBUF_NAMESPACE_ID::uint32 cpu_;
  friend struct ::TableStruct_protos_2fperfetto_2ftrace_2fftrace_2fworkqueue_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// WorkqueueActivateWorkFtraceEvent

// optional uint64 work = 1;
inline bool WorkqueueActivateWorkFtraceEvent::has_work() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void WorkqueueActivateWorkFtraceEvent::clear_work() {
  work_ = PROTOBUF_ULONGLONG(0);
  _has_bits_[0] &= ~0x00000001u;
}
inline ::PROTOBUF_NAMESPACE_ID::uint64 WorkqueueActivateWorkFtraceEvent::work() const {
  // @@protoc_insertion_point(field_get:perfetto.protos.WorkqueueActivateWorkFtraceEvent.work)
  return work_;
}
inline void WorkqueueActivateWorkFtraceEvent::set_work(::PROTOBUF_NAMESPACE_ID::uint64 value) {
  _has_bits_[0] |= 0x00000001u;
  work_ = value;
  // @@protoc_insertion_point(field_set:perfetto.protos.WorkqueueActivateWorkFtraceEvent.work)
}

// -------------------------------------------------------------------

// WorkqueueExecuteEndFtraceEvent

// optional uint64 work = 1;
inline bool WorkqueueExecuteEndFtraceEvent::has_work() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void WorkqueueExecuteEndFtraceEvent::clear_work() {
  work_ = PROTOBUF_ULONGLONG(0);
  _has_bits_[0] &= ~0x00000001u;
}
inline ::PROTOBUF_NAMESPACE_ID::uint64 WorkqueueExecuteEndFtraceEvent::work() const {
  // @@protoc_insertion_point(field_get:perfetto.protos.WorkqueueExecuteEndFtraceEvent.work)
  return work_;
}
inline void WorkqueueExecuteEndFtraceEvent::set_work(::PROTOBUF_NAMESPACE_ID::uint64 value) {
  _has_bits_[0] |= 0x00000001u;
  work_ = value;
  // @@protoc_insertion_point(field_set:perfetto.protos.WorkqueueExecuteEndFtraceEvent.work)
}

// -------------------------------------------------------------------

// WorkqueueExecuteStartFtraceEvent

// optional uint64 work = 1;
inline bool WorkqueueExecuteStartFtraceEvent::has_work() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void WorkqueueExecuteStartFtraceEvent::clear_work() {
  work_ = PROTOBUF_ULONGLONG(0);
  _has_bits_[0] &= ~0x00000001u;
}
inline ::PROTOBUF_NAMESPACE_ID::uint64 WorkqueueExecuteStartFtraceEvent::work() const {
  // @@protoc_insertion_point(field_get:perfetto.protos.WorkqueueExecuteStartFtraceEvent.work)
  return work_;
}
inline void WorkqueueExecuteStartFtraceEvent::set_work(::PROTOBUF_NAMESPACE_ID::uint64 value) {
  _has_bits_[0] |= 0x00000001u;
  work_ = value;
  // @@protoc_insertion_point(field_set:perfetto.protos.WorkqueueExecuteStartFtraceEvent.work)
}

// optional uint64 function = 2;
inline bool WorkqueueExecuteStartFtraceEvent::has_function() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void WorkqueueExecuteStartFtraceEvent::clear_function() {
  function_ = PROTOBUF_ULONGLONG(0);
  _has_bits_[0] &= ~0x00000002u;
}
inline ::PROTOBUF_NAMESPACE_ID::uint64 WorkqueueExecuteStartFtraceEvent::function() const {
  // @@protoc_insertion_point(field_get:perfetto.protos.WorkqueueExecuteStartFtraceEvent.function)
  return function_;
}
inline void WorkqueueExecuteStartFtraceEvent::set_function(::PROTOBUF_NAMESPACE_ID::uint64 value) {
  _has_bits_[0] |= 0x00000002u;
  function_ = value;
  // @@protoc_insertion_point(field_set:perfetto.protos.WorkqueueExecuteStartFtraceEvent.function)
}

// -------------------------------------------------------------------

// WorkqueueQueueWorkFtraceEvent

// optional uint64 work = 1;
inline bool WorkqueueQueueWorkFtraceEvent::has_work() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void WorkqueueQueueWorkFtraceEvent::clear_work() {
  work_ = PROTOBUF_ULONGLONG(0);
  _has_bits_[0] &= ~0x00000001u;
}
inline ::PROTOBUF_NAMESPACE_ID::uint64 WorkqueueQueueWorkFtraceEvent::work() const {
  // @@protoc_insertion_point(field_get:perfetto.protos.WorkqueueQueueWorkFtraceEvent.work)
  return work_;
}
inline void WorkqueueQueueWorkFtraceEvent::set_work(::PROTOBUF_NAMESPACE_ID::uint64 value) {
  _has_bits_[0] |= 0x00000001u;
  work_ = value;
  // @@protoc_insertion_point(field_set:perfetto.protos.WorkqueueQueueWorkFtraceEvent.work)
}

// optional uint64 function = 2;
inline bool WorkqueueQueueWorkFtraceEvent::has_function() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void WorkqueueQueueWorkFtraceEvent::clear_function() {
  function_ = PROTOBUF_ULONGLONG(0);
  _has_bits_[0] &= ~0x00000002u;
}
inline ::PROTOBUF_NAMESPACE_ID::uint64 WorkqueueQueueWorkFtraceEvent::function() const {
  // @@protoc_insertion_point(field_get:perfetto.protos.WorkqueueQueueWorkFtraceEvent.function)
  return function_;
}
inline void WorkqueueQueueWorkFtraceEvent::set_function(::PROTOBUF_NAMESPACE_ID::uint64 value) {
  _has_bits_[0] |= 0x00000002u;
  function_ = value;
  // @@protoc_insertion_point(field_set:perfetto.protos.WorkqueueQueueWorkFtraceEvent.function)
}

// optional uint64 workqueue = 3;
inline bool WorkqueueQueueWorkFtraceEvent::has_workqueue() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void WorkqueueQueueWorkFtraceEvent::clear_workqueue() {
  workqueue_ = PROTOBUF_ULONGLONG(0);
  _has_bits_[0] &= ~0x00000004u;
}
inline ::PROTOBUF_NAMESPACE_ID::uint64 WorkqueueQueueWorkFtraceEvent::workqueue() const {
  // @@protoc_insertion_point(field_get:perfetto.protos.WorkqueueQueueWorkFtraceEvent.workqueue)
  return workqueue_;
}
inline void WorkqueueQueueWorkFtraceEvent::set_workqueue(::PROTOBUF_NAMESPACE_ID::uint64 value) {
  _has_bits_[0] |= 0x00000004u;
  workqueue_ = value;
  // @@protoc_insertion_point(field_set:perfetto.protos.WorkqueueQueueWorkFtraceEvent.workqueue)
}

// optional uint32 req_cpu = 4;
inline bool WorkqueueQueueWorkFtraceEvent::has_req_cpu() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void WorkqueueQueueWorkFtraceEvent::clear_req_cpu() {
  req_cpu_ = 0u;
  _has_bits_[0] &= ~0x00000008u;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 WorkqueueQueueWorkFtraceEvent::req_cpu() const {
  // @@protoc_insertion_point(field_get:perfetto.protos.WorkqueueQueueWorkFtraceEvent.req_cpu)
  return req_cpu_;
}
inline void WorkqueueQueueWorkFtraceEvent::set_req_cpu(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  _has_bits_[0] |= 0x00000008u;
  req_cpu_ = value;
  // @@protoc_insertion_point(field_set:perfetto.protos.WorkqueueQueueWorkFtraceEvent.req_cpu)
}

// optional uint32 cpu = 5;
inline bool WorkqueueQueueWorkFtraceEvent::has_cpu() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void WorkqueueQueueWorkFtraceEvent::clear_cpu() {
  cpu_ = 0u;
  _has_bits_[0] &= ~0x00000010u;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 WorkqueueQueueWorkFtraceEvent::cpu() const {
  // @@protoc_insertion_point(field_get:perfetto.protos.WorkqueueQueueWorkFtraceEvent.cpu)
  return cpu_;
}
inline void WorkqueueQueueWorkFtraceEvent::set_cpu(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  _has_bits_[0] |= 0x00000010u;
  cpu_ = value;
  // @@protoc_insertion_point(field_set:perfetto.protos.WorkqueueQueueWorkFtraceEvent.cpu)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------

// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace protos
}  // namespace perfetto

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_protos_2fperfetto_2ftrace_2fftrace_2fworkqueue_2eproto
