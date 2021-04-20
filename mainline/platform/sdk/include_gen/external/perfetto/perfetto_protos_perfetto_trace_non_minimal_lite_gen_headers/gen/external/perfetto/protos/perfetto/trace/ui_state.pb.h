// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: protos/perfetto/trace/ui_state.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_protos_2fperfetto_2ftrace_2fui_5fstate_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_protos_2fperfetto_2ftrace_2fui_5fstate_2eproto

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
#define PROTOBUF_INTERNAL_EXPORT_protos_2fperfetto_2ftrace_2fui_5fstate_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_protos_2fperfetto_2ftrace_2fui_5fstate_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxillaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[2]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
namespace perfetto {
namespace protos {
class UiState;
class UiStateDefaultTypeInternal;
extern UiStateDefaultTypeInternal _UiState_default_instance_;
class UiState_HighlightProcess;
class UiState_HighlightProcessDefaultTypeInternal;
extern UiState_HighlightProcessDefaultTypeInternal _UiState_HighlightProcess_default_instance_;
}  // namespace protos
}  // namespace perfetto
PROTOBUF_NAMESPACE_OPEN
template<> ::perfetto::protos::UiState* Arena::CreateMaybeMessage<::perfetto::protos::UiState>(Arena*);
template<> ::perfetto::protos::UiState_HighlightProcess* Arena::CreateMaybeMessage<::perfetto::protos::UiState_HighlightProcess>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace perfetto {
namespace protos {

// ===================================================================

class UiState_HighlightProcess :
    public ::PROTOBUF_NAMESPACE_ID::MessageLite /* @@protoc_insertion_point(class_definition:perfetto.protos.UiState.HighlightProcess) */ {
 public:
  UiState_HighlightProcess();
  virtual ~UiState_HighlightProcess();

  UiState_HighlightProcess(const UiState_HighlightProcess& from);
  UiState_HighlightProcess(UiState_HighlightProcess&& from) noexcept
    : UiState_HighlightProcess() {
    *this = ::std::move(from);
  }

  inline UiState_HighlightProcess& operator=(const UiState_HighlightProcess& from) {
    CopyFrom(from);
    return *this;
  }
  inline UiState_HighlightProcess& operator=(UiState_HighlightProcess&& from) noexcept {
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

  static const UiState_HighlightProcess& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const UiState_HighlightProcess* internal_default_instance() {
    return reinterpret_cast<const UiState_HighlightProcess*>(
               &_UiState_HighlightProcess_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(UiState_HighlightProcess& a, UiState_HighlightProcess& b) {
    a.Swap(&b);
  }
  inline void Swap(UiState_HighlightProcess* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline UiState_HighlightProcess* New() const final {
    return CreateMaybeMessage<UiState_HighlightProcess>(nullptr);
  }

  UiState_HighlightProcess* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<UiState_HighlightProcess>(arena);
  }
  void CheckTypeAndMergeFrom(const ::PROTOBUF_NAMESPACE_ID::MessageLite& from)
    final;
  void CopyFrom(const UiState_HighlightProcess& from);
  void MergeFrom(const UiState_HighlightProcess& from);
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
  void InternalSwap(UiState_HighlightProcess* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "perfetto.protos.UiState.HighlightProcess";
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
    kPidFieldNumber = 1,
  };
  // optional uint32 pid = 1;
  bool has_pid() const;
  void clear_pid();
  ::PROTOBUF_NAMESPACE_ID::uint32 pid() const;
  void set_pid(::PROTOBUF_NAMESPACE_ID::uint32 value);

  // @@protoc_insertion_point(class_scope:perfetto.protos.UiState.HighlightProcess)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArenaLite _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  ::PROTOBUF_NAMESPACE_ID::uint32 pid_;
  friend struct ::TableStruct_protos_2fperfetto_2ftrace_2fui_5fstate_2eproto;
};
// -------------------------------------------------------------------

class UiState :
    public ::PROTOBUF_NAMESPACE_ID::MessageLite /* @@protoc_insertion_point(class_definition:perfetto.protos.UiState) */ {
 public:
  UiState();
  virtual ~UiState();

  UiState(const UiState& from);
  UiState(UiState&& from) noexcept
    : UiState() {
    *this = ::std::move(from);
  }

  inline UiState& operator=(const UiState& from) {
    CopyFrom(from);
    return *this;
  }
  inline UiState& operator=(UiState&& from) noexcept {
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

  static const UiState& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const UiState* internal_default_instance() {
    return reinterpret_cast<const UiState*>(
               &_UiState_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(UiState& a, UiState& b) {
    a.Swap(&b);
  }
  inline void Swap(UiState* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline UiState* New() const final {
    return CreateMaybeMessage<UiState>(nullptr);
  }

  UiState* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<UiState>(arena);
  }
  void CheckTypeAndMergeFrom(const ::PROTOBUF_NAMESPACE_ID::MessageLite& from)
    final;
  void CopyFrom(const UiState& from);
  void MergeFrom(const UiState& from);
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
  void InternalSwap(UiState* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "perfetto.protos.UiState";
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

  typedef UiState_HighlightProcess HighlightProcess;

  // accessors -------------------------------------------------------

  enum : int {
    kHighlightProcessFieldNumber = 3,
    kTimelineStartTsFieldNumber = 1,
    kTimelineEndTsFieldNumber = 2,
  };
  // optional .perfetto.protos.UiState.HighlightProcess highlight_process = 3;
  bool has_highlight_process() const;
  void clear_highlight_process();
  const ::perfetto::protos::UiState_HighlightProcess& highlight_process() const;
  ::perfetto::protos::UiState_HighlightProcess* release_highlight_process();
  ::perfetto::protos::UiState_HighlightProcess* mutable_highlight_process();
  void set_allocated_highlight_process(::perfetto::protos::UiState_HighlightProcess* highlight_process);

  // optional int64 timeline_start_ts = 1;
  bool has_timeline_start_ts() const;
  void clear_timeline_start_ts();
  ::PROTOBUF_NAMESPACE_ID::int64 timeline_start_ts() const;
  void set_timeline_start_ts(::PROTOBUF_NAMESPACE_ID::int64 value);

  // optional int64 timeline_end_ts = 2;
  bool has_timeline_end_ts() const;
  void clear_timeline_end_ts();
  ::PROTOBUF_NAMESPACE_ID::int64 timeline_end_ts() const;
  void set_timeline_end_ts(::PROTOBUF_NAMESPACE_ID::int64 value);

  // @@protoc_insertion_point(class_scope:perfetto.protos.UiState)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArenaLite _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  ::perfetto::protos::UiState_HighlightProcess* highlight_process_;
  ::PROTOBUF_NAMESPACE_ID::int64 timeline_start_ts_;
  ::PROTOBUF_NAMESPACE_ID::int64 timeline_end_ts_;
  friend struct ::TableStruct_protos_2fperfetto_2ftrace_2fui_5fstate_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// UiState_HighlightProcess

// optional uint32 pid = 1;
inline bool UiState_HighlightProcess::has_pid() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void UiState_HighlightProcess::clear_pid() {
  pid_ = 0u;
  _has_bits_[0] &= ~0x00000001u;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 UiState_HighlightProcess::pid() const {
  // @@protoc_insertion_point(field_get:perfetto.protos.UiState.HighlightProcess.pid)
  return pid_;
}
inline void UiState_HighlightProcess::set_pid(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  _has_bits_[0] |= 0x00000001u;
  pid_ = value;
  // @@protoc_insertion_point(field_set:perfetto.protos.UiState.HighlightProcess.pid)
}

// -------------------------------------------------------------------

// UiState

// optional int64 timeline_start_ts = 1;
inline bool UiState::has_timeline_start_ts() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void UiState::clear_timeline_start_ts() {
  timeline_start_ts_ = PROTOBUF_LONGLONG(0);
  _has_bits_[0] &= ~0x00000002u;
}
inline ::PROTOBUF_NAMESPACE_ID::int64 UiState::timeline_start_ts() const {
  // @@protoc_insertion_point(field_get:perfetto.protos.UiState.timeline_start_ts)
  return timeline_start_ts_;
}
inline void UiState::set_timeline_start_ts(::PROTOBUF_NAMESPACE_ID::int64 value) {
  _has_bits_[0] |= 0x00000002u;
  timeline_start_ts_ = value;
  // @@protoc_insertion_point(field_set:perfetto.protos.UiState.timeline_start_ts)
}

// optional int64 timeline_end_ts = 2;
inline bool UiState::has_timeline_end_ts() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void UiState::clear_timeline_end_ts() {
  timeline_end_ts_ = PROTOBUF_LONGLONG(0);
  _has_bits_[0] &= ~0x00000004u;
}
inline ::PROTOBUF_NAMESPACE_ID::int64 UiState::timeline_end_ts() const {
  // @@protoc_insertion_point(field_get:perfetto.protos.UiState.timeline_end_ts)
  return timeline_end_ts_;
}
inline void UiState::set_timeline_end_ts(::PROTOBUF_NAMESPACE_ID::int64 value) {
  _has_bits_[0] |= 0x00000004u;
  timeline_end_ts_ = value;
  // @@protoc_insertion_point(field_set:perfetto.protos.UiState.timeline_end_ts)
}

// optional .perfetto.protos.UiState.HighlightProcess highlight_process = 3;
inline bool UiState::has_highlight_process() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void UiState::clear_highlight_process() {
  if (highlight_process_ != nullptr) highlight_process_->Clear();
  _has_bits_[0] &= ~0x00000001u;
}
inline const ::perfetto::protos::UiState_HighlightProcess& UiState::highlight_process() const {
  const ::perfetto::protos::UiState_HighlightProcess* p = highlight_process_;
  // @@protoc_insertion_point(field_get:perfetto.protos.UiState.highlight_process)
  return p != nullptr ? *p : *reinterpret_cast<const ::perfetto::protos::UiState_HighlightProcess*>(
      &::perfetto::protos::_UiState_HighlightProcess_default_instance_);
}
inline ::perfetto::protos::UiState_HighlightProcess* UiState::release_highlight_process() {
  // @@protoc_insertion_point(field_release:perfetto.protos.UiState.highlight_process)
  _has_bits_[0] &= ~0x00000001u;
  ::perfetto::protos::UiState_HighlightProcess* temp = highlight_process_;
  highlight_process_ = nullptr;
  return temp;
}
inline ::perfetto::protos::UiState_HighlightProcess* UiState::mutable_highlight_process() {
  _has_bits_[0] |= 0x00000001u;
  if (highlight_process_ == nullptr) {
    auto* p = CreateMaybeMessage<::perfetto::protos::UiState_HighlightProcess>(GetArenaNoVirtual());
    highlight_process_ = p;
  }
  // @@protoc_insertion_point(field_mutable:perfetto.protos.UiState.highlight_process)
  return highlight_process_;
}
inline void UiState::set_allocated_highlight_process(::perfetto::protos::UiState_HighlightProcess* highlight_process) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == nullptr) {
    delete highlight_process_;
  }
  if (highlight_process) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena = nullptr;
    if (message_arena != submessage_arena) {
      highlight_process = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, highlight_process, submessage_arena);
    }
    _has_bits_[0] |= 0x00000001u;
  } else {
    _has_bits_[0] &= ~0x00000001u;
  }
  highlight_process_ = highlight_process;
  // @@protoc_insertion_point(field_set_allocated:perfetto.protos.UiState.highlight_process)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace protos
}  // namespace perfetto

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_protos_2fperfetto_2ftrace_2fui_5fstate_2eproto
