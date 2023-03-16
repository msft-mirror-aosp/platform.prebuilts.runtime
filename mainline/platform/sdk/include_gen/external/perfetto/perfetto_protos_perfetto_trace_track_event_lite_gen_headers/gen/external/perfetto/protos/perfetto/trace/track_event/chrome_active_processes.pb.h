// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: protos/perfetto/trace/track_event/chrome_active_processes.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_protos_2fperfetto_2ftrace_2ftrack_5fevent_2fchrome_5factive_5fprocesses_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_protos_2fperfetto_2ftrace_2ftrack_5fevent_2fchrome_5factive_5fprocesses_2eproto

#include <cstdint>
#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3021000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3021007 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/message_lite.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_protos_2fperfetto_2ftrace_2ftrack_5fevent_2fchrome_5factive_5fprocesses_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_protos_2fperfetto_2ftrace_2ftrack_5fevent_2fchrome_5factive_5fprocesses_2eproto {
  static const ::uint32_t offsets[];
};
namespace perfetto {
namespace protos {
class ChromeActiveProcesses;
struct ChromeActiveProcessesDefaultTypeInternal;
extern ChromeActiveProcessesDefaultTypeInternal _ChromeActiveProcesses_default_instance_;
}  // namespace protos
}  // namespace perfetto
PROTOBUF_NAMESPACE_OPEN
template<> ::perfetto::protos::ChromeActiveProcesses* Arena::CreateMaybeMessage<::perfetto::protos::ChromeActiveProcesses>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace perfetto {
namespace protos {

// ===================================================================

class ChromeActiveProcesses final :
    public ::PROTOBUF_NAMESPACE_ID::MessageLite /* @@protoc_insertion_point(class_definition:perfetto.protos.ChromeActiveProcesses) */ {
 public:
  inline ChromeActiveProcesses() : ChromeActiveProcesses(nullptr) {}
  ~ChromeActiveProcesses() override;
  explicit PROTOBUF_CONSTEXPR ChromeActiveProcesses(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  ChromeActiveProcesses(const ChromeActiveProcesses& from);
  ChromeActiveProcesses(ChromeActiveProcesses&& from) noexcept
    : ChromeActiveProcesses() {
    *this = ::std::move(from);
  }

  inline ChromeActiveProcesses& operator=(const ChromeActiveProcesses& from) {
    if (this == &from) return *this;
    CopyFrom(from);
    return *this;
  }
  inline ChromeActiveProcesses& operator=(ChromeActiveProcesses&& from) noexcept {
    if (this == &from) return *this;
    if (GetOwningArena() == from.GetOwningArena()
  #ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetOwningArena() != nullptr
  #endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  inline const std::string& unknown_fields() const {
    return _internal_metadata_.unknown_fields<std::string>(::PROTOBUF_NAMESPACE_ID::internal::GetEmptyString);
  }
  inline std::string* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields<std::string>();
  }

  static const ChromeActiveProcesses& default_instance() {
    return *internal_default_instance();
  }
  static inline const ChromeActiveProcesses* internal_default_instance() {
    return reinterpret_cast<const ChromeActiveProcesses*>(
               &_ChromeActiveProcesses_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(ChromeActiveProcesses& a, ChromeActiveProcesses& b) {
    a.Swap(&b);
  }
  inline void Swap(ChromeActiveProcesses* other) {
    if (other == this) return;
  #ifdef PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() != nullptr &&
        GetOwningArena() == other->GetOwningArena()) {
   #else  // PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() == other->GetOwningArena()) {
  #endif  // !PROTOBUF_FORCE_COPY_IN_SWAP
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(ChromeActiveProcesses* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  ChromeActiveProcesses* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<ChromeActiveProcesses>(arena);
  }
  ChromeActiveProcesses* New() const {
    return New(nullptr);
  }
  void CheckTypeAndMergeFrom(const ::PROTOBUF_NAMESPACE_ID::MessageLite& from)  final;
  void CopyFrom(const ChromeActiveProcesses& from);
  void MergeFrom(const ChromeActiveProcesses& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::uint8_t* _InternalSerialize(
      ::uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _impl_._cached_size_.Get(); }

  private:
  void SharedCtor(::PROTOBUF_NAMESPACE_ID::Arena* arena, bool is_message_owned);
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(ChromeActiveProcesses* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "perfetto.protos.ChromeActiveProcesses";
  }
  protected:
  explicit ChromeActiveProcesses(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  std::string GetTypeName() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kPidFieldNumber = 1,
  };
  // repeated int32 pid = 1;
  int pid_size() const;
  private:
  int _internal_pid_size() const;
  public:
  void clear_pid();
  private:
  ::int32_t _internal_pid(int index) const;
  const ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::int32_t >&
      _internal_pid() const;
  void _internal_add_pid(::int32_t value);
  ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::int32_t >*
      _internal_mutable_pid();
  public:
  ::int32_t pid(int index) const;
  void set_pid(int index, ::int32_t value);
  void add_pid(::int32_t value);
  const ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::int32_t >&
      pid() const;
  ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::int32_t >*
      mutable_pid();

  // @@protoc_insertion_point(class_scope:perfetto.protos.ChromeActiveProcesses)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::int32_t > pid_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_protos_2fperfetto_2ftrace_2ftrack_5fevent_2fchrome_5factive_5fprocesses_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// ChromeActiveProcesses

// repeated int32 pid = 1;
inline int ChromeActiveProcesses::_internal_pid_size() const {
  return _impl_.pid_.size();
}
inline int ChromeActiveProcesses::pid_size() const {
  return _internal_pid_size();
}
inline void ChromeActiveProcesses::clear_pid() {
  _impl_.pid_.Clear();
}
inline ::int32_t ChromeActiveProcesses::_internal_pid(int index) const {
  return _impl_.pid_.Get(index);
}
inline ::int32_t ChromeActiveProcesses::pid(int index) const {
  // @@protoc_insertion_point(field_get:perfetto.protos.ChromeActiveProcesses.pid)
  return _internal_pid(index);
}
inline void ChromeActiveProcesses::set_pid(int index, ::int32_t value) {
  _impl_.pid_.Set(index, value);
  // @@protoc_insertion_point(field_set:perfetto.protos.ChromeActiveProcesses.pid)
}
inline void ChromeActiveProcesses::_internal_add_pid(::int32_t value) {
  _impl_.pid_.Add(value);
}
inline void ChromeActiveProcesses::add_pid(::int32_t value) {
  _internal_add_pid(value);
  // @@protoc_insertion_point(field_add:perfetto.protos.ChromeActiveProcesses.pid)
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::int32_t >&
ChromeActiveProcesses::_internal_pid() const {
  return _impl_.pid_;
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::int32_t >&
ChromeActiveProcesses::pid() const {
  // @@protoc_insertion_point(field_list:perfetto.protos.ChromeActiveProcesses.pid)
  return _internal_pid();
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::int32_t >*
ChromeActiveProcesses::_internal_mutable_pid() {
  return &_impl_.pid_;
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::int32_t >*
ChromeActiveProcesses::mutable_pid() {
  // @@protoc_insertion_point(field_mutable_list:perfetto.protos.ChromeActiveProcesses.pid)
  return _internal_mutable_pid();
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace protos
}  // namespace perfetto

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_protos_2fperfetto_2ftrace_2ftrack_5fevent_2fchrome_5factive_5fprocesses_2eproto
