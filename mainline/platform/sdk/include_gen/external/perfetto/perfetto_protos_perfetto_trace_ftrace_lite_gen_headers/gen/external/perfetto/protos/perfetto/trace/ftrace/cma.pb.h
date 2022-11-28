// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: protos/perfetto/trace/ftrace/cma.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_protos_2fperfetto_2ftrace_2fftrace_2fcma_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_protos_2fperfetto_2ftrace_2fftrace_2fcma_2eproto

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
#define PROTOBUF_INTERNAL_EXPORT_protos_2fperfetto_2ftrace_2fftrace_2fcma_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_protos_2fperfetto_2ftrace_2fftrace_2fcma_2eproto {
  static const ::uint32_t offsets[];
};
namespace perfetto {
namespace protos {
class CmaAllocInfoFtraceEvent;
struct CmaAllocInfoFtraceEventDefaultTypeInternal;
extern CmaAllocInfoFtraceEventDefaultTypeInternal _CmaAllocInfoFtraceEvent_default_instance_;
class CmaAllocStartFtraceEvent;
struct CmaAllocStartFtraceEventDefaultTypeInternal;
extern CmaAllocStartFtraceEventDefaultTypeInternal _CmaAllocStartFtraceEvent_default_instance_;
}  // namespace protos
}  // namespace perfetto
PROTOBUF_NAMESPACE_OPEN
template<> ::perfetto::protos::CmaAllocInfoFtraceEvent* Arena::CreateMaybeMessage<::perfetto::protos::CmaAllocInfoFtraceEvent>(Arena*);
template<> ::perfetto::protos::CmaAllocStartFtraceEvent* Arena::CreateMaybeMessage<::perfetto::protos::CmaAllocStartFtraceEvent>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace perfetto {
namespace protos {

// ===================================================================

class CmaAllocStartFtraceEvent final :
    public ::PROTOBUF_NAMESPACE_ID::MessageLite /* @@protoc_insertion_point(class_definition:perfetto.protos.CmaAllocStartFtraceEvent) */ {
 public:
  inline CmaAllocStartFtraceEvent() : CmaAllocStartFtraceEvent(nullptr) {}
  ~CmaAllocStartFtraceEvent() override;
  explicit PROTOBUF_CONSTEXPR CmaAllocStartFtraceEvent(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  CmaAllocStartFtraceEvent(const CmaAllocStartFtraceEvent& from);
  CmaAllocStartFtraceEvent(CmaAllocStartFtraceEvent&& from) noexcept
    : CmaAllocStartFtraceEvent() {
    *this = ::std::move(from);
  }

  inline CmaAllocStartFtraceEvent& operator=(const CmaAllocStartFtraceEvent& from) {
    if (this == &from) return *this;
    CopyFrom(from);
    return *this;
  }
  inline CmaAllocStartFtraceEvent& operator=(CmaAllocStartFtraceEvent&& from) noexcept {
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

  static const CmaAllocStartFtraceEvent& default_instance() {
    return *internal_default_instance();
  }
  static inline const CmaAllocStartFtraceEvent* internal_default_instance() {
    return reinterpret_cast<const CmaAllocStartFtraceEvent*>(
               &_CmaAllocStartFtraceEvent_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(CmaAllocStartFtraceEvent& a, CmaAllocStartFtraceEvent& b) {
    a.Swap(&b);
  }
  inline void Swap(CmaAllocStartFtraceEvent* other) {
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
  void UnsafeArenaSwap(CmaAllocStartFtraceEvent* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  CmaAllocStartFtraceEvent* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<CmaAllocStartFtraceEvent>(arena);
  }
  CmaAllocStartFtraceEvent* New() const {
    return New(nullptr);
  }
  void CheckTypeAndMergeFrom(const ::PROTOBUF_NAMESPACE_ID::MessageLite& from)  final;
  void CopyFrom(const CmaAllocStartFtraceEvent& from);
  void MergeFrom(const CmaAllocStartFtraceEvent& from);
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
  void InternalSwap(CmaAllocStartFtraceEvent* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "perfetto.protos.CmaAllocStartFtraceEvent";
  }
  protected:
  explicit CmaAllocStartFtraceEvent(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  std::string GetTypeName() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kNameFieldNumber = 3,
    kAlignFieldNumber = 1,
    kCountFieldNumber = 2,
  };
  // optional string name = 3;
  bool has_name() const;
  private:
  bool _internal_has_name() const;
  public:
  void clear_name();
  const std::string& name() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_name(ArgT0&& arg0, ArgT... args);
  std::string* mutable_name();
  PROTOBUF_NODISCARD std::string* release_name();
  void set_allocated_name(std::string* name);
  private:
  const std::string& _internal_name() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_name(const std::string& value);
  std::string* _internal_mutable_name();
  public:

  // optional uint32 align = 1;
  bool has_align() const;
  private:
  bool _internal_has_align() const;
  public:
  void clear_align();
  ::uint32_t align() const;
  void set_align(::uint32_t value);
  private:
  ::uint32_t _internal_align() const;
  void _internal_set_align(::uint32_t value);
  public:

  // optional uint32 count = 2;
  bool has_count() const;
  private:
  bool _internal_has_count() const;
  public:
  void clear_count();
  ::uint32_t count() const;
  void set_count(::uint32_t value);
  private:
  ::uint32_t _internal_count() const;
  void _internal_set_count(::uint32_t value);
  public:

  // @@protoc_insertion_point(class_scope:perfetto.protos.CmaAllocStartFtraceEvent)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr name_;
    ::uint32_t align_;
    ::uint32_t count_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_protos_2fperfetto_2ftrace_2fftrace_2fcma_2eproto;
};
// -------------------------------------------------------------------

class CmaAllocInfoFtraceEvent final :
    public ::PROTOBUF_NAMESPACE_ID::MessageLite /* @@protoc_insertion_point(class_definition:perfetto.protos.CmaAllocInfoFtraceEvent) */ {
 public:
  inline CmaAllocInfoFtraceEvent() : CmaAllocInfoFtraceEvent(nullptr) {}
  ~CmaAllocInfoFtraceEvent() override;
  explicit PROTOBUF_CONSTEXPR CmaAllocInfoFtraceEvent(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  CmaAllocInfoFtraceEvent(const CmaAllocInfoFtraceEvent& from);
  CmaAllocInfoFtraceEvent(CmaAllocInfoFtraceEvent&& from) noexcept
    : CmaAllocInfoFtraceEvent() {
    *this = ::std::move(from);
  }

  inline CmaAllocInfoFtraceEvent& operator=(const CmaAllocInfoFtraceEvent& from) {
    if (this == &from) return *this;
    CopyFrom(from);
    return *this;
  }
  inline CmaAllocInfoFtraceEvent& operator=(CmaAllocInfoFtraceEvent&& from) noexcept {
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

  static const CmaAllocInfoFtraceEvent& default_instance() {
    return *internal_default_instance();
  }
  static inline const CmaAllocInfoFtraceEvent* internal_default_instance() {
    return reinterpret_cast<const CmaAllocInfoFtraceEvent*>(
               &_CmaAllocInfoFtraceEvent_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(CmaAllocInfoFtraceEvent& a, CmaAllocInfoFtraceEvent& b) {
    a.Swap(&b);
  }
  inline void Swap(CmaAllocInfoFtraceEvent* other) {
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
  void UnsafeArenaSwap(CmaAllocInfoFtraceEvent* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  CmaAllocInfoFtraceEvent* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<CmaAllocInfoFtraceEvent>(arena);
  }
  CmaAllocInfoFtraceEvent* New() const {
    return New(nullptr);
  }
  void CheckTypeAndMergeFrom(const ::PROTOBUF_NAMESPACE_ID::MessageLite& from)  final;
  void CopyFrom(const CmaAllocInfoFtraceEvent& from);
  void MergeFrom(const CmaAllocInfoFtraceEvent& from);
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
  void InternalSwap(CmaAllocInfoFtraceEvent* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "perfetto.protos.CmaAllocInfoFtraceEvent";
  }
  protected:
  explicit CmaAllocInfoFtraceEvent(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  std::string GetTypeName() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kNameFieldNumber = 6,
    kAlignFieldNumber = 1,
    kCountFieldNumber = 2,
    kErrIsoFieldNumber = 3,
    kErrMigFieldNumber = 4,
    kNrMappedFieldNumber = 7,
    kNrMigratedFieldNumber = 8,
    kNrReclaimedFieldNumber = 9,
    kPfnFieldNumber = 10,
    kErrTestFieldNumber = 5,
  };
  // optional string name = 6;
  bool has_name() const;
  private:
  bool _internal_has_name() const;
  public:
  void clear_name();
  const std::string& name() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_name(ArgT0&& arg0, ArgT... args);
  std::string* mutable_name();
  PROTOBUF_NODISCARD std::string* release_name();
  void set_allocated_name(std::string* name);
  private:
  const std::string& _internal_name() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_name(const std::string& value);
  std::string* _internal_mutable_name();
  public:

  // optional uint32 align = 1;
  bool has_align() const;
  private:
  bool _internal_has_align() const;
  public:
  void clear_align();
  ::uint32_t align() const;
  void set_align(::uint32_t value);
  private:
  ::uint32_t _internal_align() const;
  void _internal_set_align(::uint32_t value);
  public:

  // optional uint32 count = 2;
  bool has_count() const;
  private:
  bool _internal_has_count() const;
  public:
  void clear_count();
  ::uint32_t count() const;
  void set_count(::uint32_t value);
  private:
  ::uint32_t _internal_count() const;
  void _internal_set_count(::uint32_t value);
  public:

  // optional uint32 err_iso = 3;
  bool has_err_iso() const;
  private:
  bool _internal_has_err_iso() const;
  public:
  void clear_err_iso();
  ::uint32_t err_iso() const;
  void set_err_iso(::uint32_t value);
  private:
  ::uint32_t _internal_err_iso() const;
  void _internal_set_err_iso(::uint32_t value);
  public:

  // optional uint32 err_mig = 4;
  bool has_err_mig() const;
  private:
  bool _internal_has_err_mig() const;
  public:
  void clear_err_mig();
  ::uint32_t err_mig() const;
  void set_err_mig(::uint32_t value);
  private:
  ::uint32_t _internal_err_mig() const;
  void _internal_set_err_mig(::uint32_t value);
  public:

  // optional uint64 nr_mapped = 7;
  bool has_nr_mapped() const;
  private:
  bool _internal_has_nr_mapped() const;
  public:
  void clear_nr_mapped();
  ::uint64_t nr_mapped() const;
  void set_nr_mapped(::uint64_t value);
  private:
  ::uint64_t _internal_nr_mapped() const;
  void _internal_set_nr_mapped(::uint64_t value);
  public:

  // optional uint64 nr_migrated = 8;
  bool has_nr_migrated() const;
  private:
  bool _internal_has_nr_migrated() const;
  public:
  void clear_nr_migrated();
  ::uint64_t nr_migrated() const;
  void set_nr_migrated(::uint64_t value);
  private:
  ::uint64_t _internal_nr_migrated() const;
  void _internal_set_nr_migrated(::uint64_t value);
  public:

  // optional uint64 nr_reclaimed = 9;
  bool has_nr_reclaimed() const;
  private:
  bool _internal_has_nr_reclaimed() const;
  public:
  void clear_nr_reclaimed();
  ::uint64_t nr_reclaimed() const;
  void set_nr_reclaimed(::uint64_t value);
  private:
  ::uint64_t _internal_nr_reclaimed() const;
  void _internal_set_nr_reclaimed(::uint64_t value);
  public:

  // optional uint64 pfn = 10;
  bool has_pfn() const;
  private:
  bool _internal_has_pfn() const;
  public:
  void clear_pfn();
  ::uint64_t pfn() const;
  void set_pfn(::uint64_t value);
  private:
  ::uint64_t _internal_pfn() const;
  void _internal_set_pfn(::uint64_t value);
  public:

  // optional uint32 err_test = 5;
  bool has_err_test() const;
  private:
  bool _internal_has_err_test() const;
  public:
  void clear_err_test();
  ::uint32_t err_test() const;
  void set_err_test(::uint32_t value);
  private:
  ::uint32_t _internal_err_test() const;
  void _internal_set_err_test(::uint32_t value);
  public:

  // @@protoc_insertion_point(class_scope:perfetto.protos.CmaAllocInfoFtraceEvent)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr name_;
    ::uint32_t align_;
    ::uint32_t count_;
    ::uint32_t err_iso_;
    ::uint32_t err_mig_;
    ::uint64_t nr_mapped_;
    ::uint64_t nr_migrated_;
    ::uint64_t nr_reclaimed_;
    ::uint64_t pfn_;
    ::uint32_t err_test_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_protos_2fperfetto_2ftrace_2fftrace_2fcma_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// CmaAllocStartFtraceEvent

// optional uint32 align = 1;
inline bool CmaAllocStartFtraceEvent::_internal_has_align() const {
  bool value = (_impl_._has_bits_[0] & 0x00000002u) != 0;
  return value;
}
inline bool CmaAllocStartFtraceEvent::has_align() const {
  return _internal_has_align();
}
inline void CmaAllocStartFtraceEvent::clear_align() {
  _impl_.align_ = 0u;
  _impl_._has_bits_[0] &= ~0x00000002u;
}
inline ::uint32_t CmaAllocStartFtraceEvent::_internal_align() const {
  return _impl_.align_;
}
inline ::uint32_t CmaAllocStartFtraceEvent::align() const {
  // @@protoc_insertion_point(field_get:perfetto.protos.CmaAllocStartFtraceEvent.align)
  return _internal_align();
}
inline void CmaAllocStartFtraceEvent::_internal_set_align(::uint32_t value) {
  _impl_._has_bits_[0] |= 0x00000002u;
  _impl_.align_ = value;
}
inline void CmaAllocStartFtraceEvent::set_align(::uint32_t value) {
  _internal_set_align(value);
  // @@protoc_insertion_point(field_set:perfetto.protos.CmaAllocStartFtraceEvent.align)
}

// optional uint32 count = 2;
inline bool CmaAllocStartFtraceEvent::_internal_has_count() const {
  bool value = (_impl_._has_bits_[0] & 0x00000004u) != 0;
  return value;
}
inline bool CmaAllocStartFtraceEvent::has_count() const {
  return _internal_has_count();
}
inline void CmaAllocStartFtraceEvent::clear_count() {
  _impl_.count_ = 0u;
  _impl_._has_bits_[0] &= ~0x00000004u;
}
inline ::uint32_t CmaAllocStartFtraceEvent::_internal_count() const {
  return _impl_.count_;
}
inline ::uint32_t CmaAllocStartFtraceEvent::count() const {
  // @@protoc_insertion_point(field_get:perfetto.protos.CmaAllocStartFtraceEvent.count)
  return _internal_count();
}
inline void CmaAllocStartFtraceEvent::_internal_set_count(::uint32_t value) {
  _impl_._has_bits_[0] |= 0x00000004u;
  _impl_.count_ = value;
}
inline void CmaAllocStartFtraceEvent::set_count(::uint32_t value) {
  _internal_set_count(value);
  // @@protoc_insertion_point(field_set:perfetto.protos.CmaAllocStartFtraceEvent.count)
}

// optional string name = 3;
inline bool CmaAllocStartFtraceEvent::_internal_has_name() const {
  bool value = (_impl_._has_bits_[0] & 0x00000001u) != 0;
  return value;
}
inline bool CmaAllocStartFtraceEvent::has_name() const {
  return _internal_has_name();
}
inline void CmaAllocStartFtraceEvent::clear_name() {
  _impl_.name_.ClearToEmpty();
  _impl_._has_bits_[0] &= ~0x00000001u;
}
inline const std::string& CmaAllocStartFtraceEvent::name() const {
  // @@protoc_insertion_point(field_get:perfetto.protos.CmaAllocStartFtraceEvent.name)
  return _internal_name();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void CmaAllocStartFtraceEvent::set_name(ArgT0&& arg0, ArgT... args) {
 _impl_._has_bits_[0] |= 0x00000001u;
 _impl_.name_.Set(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:perfetto.protos.CmaAllocStartFtraceEvent.name)
}
inline std::string* CmaAllocStartFtraceEvent::mutable_name() {
  std::string* _s = _internal_mutable_name();
  // @@protoc_insertion_point(field_mutable:perfetto.protos.CmaAllocStartFtraceEvent.name)
  return _s;
}
inline const std::string& CmaAllocStartFtraceEvent::_internal_name() const {
  return _impl_.name_.Get();
}
inline void CmaAllocStartFtraceEvent::_internal_set_name(const std::string& value) {
  _impl_._has_bits_[0] |= 0x00000001u;
  _impl_.name_.Set(value, GetArenaForAllocation());
}
inline std::string* CmaAllocStartFtraceEvent::_internal_mutable_name() {
  _impl_._has_bits_[0] |= 0x00000001u;
  return _impl_.name_.Mutable(GetArenaForAllocation());
}
inline std::string* CmaAllocStartFtraceEvent::release_name() {
  // @@protoc_insertion_point(field_release:perfetto.protos.CmaAllocStartFtraceEvent.name)
  if (!_internal_has_name()) {
    return nullptr;
  }
  _impl_._has_bits_[0] &= ~0x00000001u;
  auto* p = _impl_.name_.Release();
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.name_.IsDefault()) {
    _impl_.name_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  return p;
}
inline void CmaAllocStartFtraceEvent::set_allocated_name(std::string* name) {
  if (name != nullptr) {
    _impl_._has_bits_[0] |= 0x00000001u;
  } else {
    _impl_._has_bits_[0] &= ~0x00000001u;
  }
  _impl_.name_.SetAllocated(name, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.name_.IsDefault()) {
    _impl_.name_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:perfetto.protos.CmaAllocStartFtraceEvent.name)
}

// -------------------------------------------------------------------

// CmaAllocInfoFtraceEvent

// optional uint32 align = 1;
inline bool CmaAllocInfoFtraceEvent::_internal_has_align() const {
  bool value = (_impl_._has_bits_[0] & 0x00000002u) != 0;
  return value;
}
inline bool CmaAllocInfoFtraceEvent::has_align() const {
  return _internal_has_align();
}
inline void CmaAllocInfoFtraceEvent::clear_align() {
  _impl_.align_ = 0u;
  _impl_._has_bits_[0] &= ~0x00000002u;
}
inline ::uint32_t CmaAllocInfoFtraceEvent::_internal_align() const {
  return _impl_.align_;
}
inline ::uint32_t CmaAllocInfoFtraceEvent::align() const {
  // @@protoc_insertion_point(field_get:perfetto.protos.CmaAllocInfoFtraceEvent.align)
  return _internal_align();
}
inline void CmaAllocInfoFtraceEvent::_internal_set_align(::uint32_t value) {
  _impl_._has_bits_[0] |= 0x00000002u;
  _impl_.align_ = value;
}
inline void CmaAllocInfoFtraceEvent::set_align(::uint32_t value) {
  _internal_set_align(value);
  // @@protoc_insertion_point(field_set:perfetto.protos.CmaAllocInfoFtraceEvent.align)
}

// optional uint32 count = 2;
inline bool CmaAllocInfoFtraceEvent::_internal_has_count() const {
  bool value = (_impl_._has_bits_[0] & 0x00000004u) != 0;
  return value;
}
inline bool CmaAllocInfoFtraceEvent::has_count() const {
  return _internal_has_count();
}
inline void CmaAllocInfoFtraceEvent::clear_count() {
  _impl_.count_ = 0u;
  _impl_._has_bits_[0] &= ~0x00000004u;
}
inline ::uint32_t CmaAllocInfoFtraceEvent::_internal_count() const {
  return _impl_.count_;
}
inline ::uint32_t CmaAllocInfoFtraceEvent::count() const {
  // @@protoc_insertion_point(field_get:perfetto.protos.CmaAllocInfoFtraceEvent.count)
  return _internal_count();
}
inline void CmaAllocInfoFtraceEvent::_internal_set_count(::uint32_t value) {
  _impl_._has_bits_[0] |= 0x00000004u;
  _impl_.count_ = value;
}
inline void CmaAllocInfoFtraceEvent::set_count(::uint32_t value) {
  _internal_set_count(value);
  // @@protoc_insertion_point(field_set:perfetto.protos.CmaAllocInfoFtraceEvent.count)
}

// optional uint32 err_iso = 3;
inline bool CmaAllocInfoFtraceEvent::_internal_has_err_iso() const {
  bool value = (_impl_._has_bits_[0] & 0x00000008u) != 0;
  return value;
}
inline bool CmaAllocInfoFtraceEvent::has_err_iso() const {
  return _internal_has_err_iso();
}
inline void CmaAllocInfoFtraceEvent::clear_err_iso() {
  _impl_.err_iso_ = 0u;
  _impl_._has_bits_[0] &= ~0x00000008u;
}
inline ::uint32_t CmaAllocInfoFtraceEvent::_internal_err_iso() const {
  return _impl_.err_iso_;
}
inline ::uint32_t CmaAllocInfoFtraceEvent::err_iso() const {
  // @@protoc_insertion_point(field_get:perfetto.protos.CmaAllocInfoFtraceEvent.err_iso)
  return _internal_err_iso();
}
inline void CmaAllocInfoFtraceEvent::_internal_set_err_iso(::uint32_t value) {
  _impl_._has_bits_[0] |= 0x00000008u;
  _impl_.err_iso_ = value;
}
inline void CmaAllocInfoFtraceEvent::set_err_iso(::uint32_t value) {
  _internal_set_err_iso(value);
  // @@protoc_insertion_point(field_set:perfetto.protos.CmaAllocInfoFtraceEvent.err_iso)
}

// optional uint32 err_mig = 4;
inline bool CmaAllocInfoFtraceEvent::_internal_has_err_mig() const {
  bool value = (_impl_._has_bits_[0] & 0x00000010u) != 0;
  return value;
}
inline bool CmaAllocInfoFtraceEvent::has_err_mig() const {
  return _internal_has_err_mig();
}
inline void CmaAllocInfoFtraceEvent::clear_err_mig() {
  _impl_.err_mig_ = 0u;
  _impl_._has_bits_[0] &= ~0x00000010u;
}
inline ::uint32_t CmaAllocInfoFtraceEvent::_internal_err_mig() const {
  return _impl_.err_mig_;
}
inline ::uint32_t CmaAllocInfoFtraceEvent::err_mig() const {
  // @@protoc_insertion_point(field_get:perfetto.protos.CmaAllocInfoFtraceEvent.err_mig)
  return _internal_err_mig();
}
inline void CmaAllocInfoFtraceEvent::_internal_set_err_mig(::uint32_t value) {
  _impl_._has_bits_[0] |= 0x00000010u;
  _impl_.err_mig_ = value;
}
inline void CmaAllocInfoFtraceEvent::set_err_mig(::uint32_t value) {
  _internal_set_err_mig(value);
  // @@protoc_insertion_point(field_set:perfetto.protos.CmaAllocInfoFtraceEvent.err_mig)
}

// optional uint32 err_test = 5;
inline bool CmaAllocInfoFtraceEvent::_internal_has_err_test() const {
  bool value = (_impl_._has_bits_[0] & 0x00000200u) != 0;
  return value;
}
inline bool CmaAllocInfoFtraceEvent::has_err_test() const {
  return _internal_has_err_test();
}
inline void CmaAllocInfoFtraceEvent::clear_err_test() {
  _impl_.err_test_ = 0u;
  _impl_._has_bits_[0] &= ~0x00000200u;
}
inline ::uint32_t CmaAllocInfoFtraceEvent::_internal_err_test() const {
  return _impl_.err_test_;
}
inline ::uint32_t CmaAllocInfoFtraceEvent::err_test() const {
  // @@protoc_insertion_point(field_get:perfetto.protos.CmaAllocInfoFtraceEvent.err_test)
  return _internal_err_test();
}
inline void CmaAllocInfoFtraceEvent::_internal_set_err_test(::uint32_t value) {
  _impl_._has_bits_[0] |= 0x00000200u;
  _impl_.err_test_ = value;
}
inline void CmaAllocInfoFtraceEvent::set_err_test(::uint32_t value) {
  _internal_set_err_test(value);
  // @@protoc_insertion_point(field_set:perfetto.protos.CmaAllocInfoFtraceEvent.err_test)
}

// optional string name = 6;
inline bool CmaAllocInfoFtraceEvent::_internal_has_name() const {
  bool value = (_impl_._has_bits_[0] & 0x00000001u) != 0;
  return value;
}
inline bool CmaAllocInfoFtraceEvent::has_name() const {
  return _internal_has_name();
}
inline void CmaAllocInfoFtraceEvent::clear_name() {
  _impl_.name_.ClearToEmpty();
  _impl_._has_bits_[0] &= ~0x00000001u;
}
inline const std::string& CmaAllocInfoFtraceEvent::name() const {
  // @@protoc_insertion_point(field_get:perfetto.protos.CmaAllocInfoFtraceEvent.name)
  return _internal_name();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void CmaAllocInfoFtraceEvent::set_name(ArgT0&& arg0, ArgT... args) {
 _impl_._has_bits_[0] |= 0x00000001u;
 _impl_.name_.Set(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:perfetto.protos.CmaAllocInfoFtraceEvent.name)
}
inline std::string* CmaAllocInfoFtraceEvent::mutable_name() {
  std::string* _s = _internal_mutable_name();
  // @@protoc_insertion_point(field_mutable:perfetto.protos.CmaAllocInfoFtraceEvent.name)
  return _s;
}
inline const std::string& CmaAllocInfoFtraceEvent::_internal_name() const {
  return _impl_.name_.Get();
}
inline void CmaAllocInfoFtraceEvent::_internal_set_name(const std::string& value) {
  _impl_._has_bits_[0] |= 0x00000001u;
  _impl_.name_.Set(value, GetArenaForAllocation());
}
inline std::string* CmaAllocInfoFtraceEvent::_internal_mutable_name() {
  _impl_._has_bits_[0] |= 0x00000001u;
  return _impl_.name_.Mutable(GetArenaForAllocation());
}
inline std::string* CmaAllocInfoFtraceEvent::release_name() {
  // @@protoc_insertion_point(field_release:perfetto.protos.CmaAllocInfoFtraceEvent.name)
  if (!_internal_has_name()) {
    return nullptr;
  }
  _impl_._has_bits_[0] &= ~0x00000001u;
  auto* p = _impl_.name_.Release();
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.name_.IsDefault()) {
    _impl_.name_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  return p;
}
inline void CmaAllocInfoFtraceEvent::set_allocated_name(std::string* name) {
  if (name != nullptr) {
    _impl_._has_bits_[0] |= 0x00000001u;
  } else {
    _impl_._has_bits_[0] &= ~0x00000001u;
  }
  _impl_.name_.SetAllocated(name, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.name_.IsDefault()) {
    _impl_.name_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:perfetto.protos.CmaAllocInfoFtraceEvent.name)
}

// optional uint64 nr_mapped = 7;
inline bool CmaAllocInfoFtraceEvent::_internal_has_nr_mapped() const {
  bool value = (_impl_._has_bits_[0] & 0x00000020u) != 0;
  return value;
}
inline bool CmaAllocInfoFtraceEvent::has_nr_mapped() const {
  return _internal_has_nr_mapped();
}
inline void CmaAllocInfoFtraceEvent::clear_nr_mapped() {
  _impl_.nr_mapped_ = ::uint64_t{0u};
  _impl_._has_bits_[0] &= ~0x00000020u;
}
inline ::uint64_t CmaAllocInfoFtraceEvent::_internal_nr_mapped() const {
  return _impl_.nr_mapped_;
}
inline ::uint64_t CmaAllocInfoFtraceEvent::nr_mapped() const {
  // @@protoc_insertion_point(field_get:perfetto.protos.CmaAllocInfoFtraceEvent.nr_mapped)
  return _internal_nr_mapped();
}
inline void CmaAllocInfoFtraceEvent::_internal_set_nr_mapped(::uint64_t value) {
  _impl_._has_bits_[0] |= 0x00000020u;
  _impl_.nr_mapped_ = value;
}
inline void CmaAllocInfoFtraceEvent::set_nr_mapped(::uint64_t value) {
  _internal_set_nr_mapped(value);
  // @@protoc_insertion_point(field_set:perfetto.protos.CmaAllocInfoFtraceEvent.nr_mapped)
}

// optional uint64 nr_migrated = 8;
inline bool CmaAllocInfoFtraceEvent::_internal_has_nr_migrated() const {
  bool value = (_impl_._has_bits_[0] & 0x00000040u) != 0;
  return value;
}
inline bool CmaAllocInfoFtraceEvent::has_nr_migrated() const {
  return _internal_has_nr_migrated();
}
inline void CmaAllocInfoFtraceEvent::clear_nr_migrated() {
  _impl_.nr_migrated_ = ::uint64_t{0u};
  _impl_._has_bits_[0] &= ~0x00000040u;
}
inline ::uint64_t CmaAllocInfoFtraceEvent::_internal_nr_migrated() const {
  return _impl_.nr_migrated_;
}
inline ::uint64_t CmaAllocInfoFtraceEvent::nr_migrated() const {
  // @@protoc_insertion_point(field_get:perfetto.protos.CmaAllocInfoFtraceEvent.nr_migrated)
  return _internal_nr_migrated();
}
inline void CmaAllocInfoFtraceEvent::_internal_set_nr_migrated(::uint64_t value) {
  _impl_._has_bits_[0] |= 0x00000040u;
  _impl_.nr_migrated_ = value;
}
inline void CmaAllocInfoFtraceEvent::set_nr_migrated(::uint64_t value) {
  _internal_set_nr_migrated(value);
  // @@protoc_insertion_point(field_set:perfetto.protos.CmaAllocInfoFtraceEvent.nr_migrated)
}

// optional uint64 nr_reclaimed = 9;
inline bool CmaAllocInfoFtraceEvent::_internal_has_nr_reclaimed() const {
  bool value = (_impl_._has_bits_[0] & 0x00000080u) != 0;
  return value;
}
inline bool CmaAllocInfoFtraceEvent::has_nr_reclaimed() const {
  return _internal_has_nr_reclaimed();
}
inline void CmaAllocInfoFtraceEvent::clear_nr_reclaimed() {
  _impl_.nr_reclaimed_ = ::uint64_t{0u};
  _impl_._has_bits_[0] &= ~0x00000080u;
}
inline ::uint64_t CmaAllocInfoFtraceEvent::_internal_nr_reclaimed() const {
  return _impl_.nr_reclaimed_;
}
inline ::uint64_t CmaAllocInfoFtraceEvent::nr_reclaimed() const {
  // @@protoc_insertion_point(field_get:perfetto.protos.CmaAllocInfoFtraceEvent.nr_reclaimed)
  return _internal_nr_reclaimed();
}
inline void CmaAllocInfoFtraceEvent::_internal_set_nr_reclaimed(::uint64_t value) {
  _impl_._has_bits_[0] |= 0x00000080u;
  _impl_.nr_reclaimed_ = value;
}
inline void CmaAllocInfoFtraceEvent::set_nr_reclaimed(::uint64_t value) {
  _internal_set_nr_reclaimed(value);
  // @@protoc_insertion_point(field_set:perfetto.protos.CmaAllocInfoFtraceEvent.nr_reclaimed)
}

// optional uint64 pfn = 10;
inline bool CmaAllocInfoFtraceEvent::_internal_has_pfn() const {
  bool value = (_impl_._has_bits_[0] & 0x00000100u) != 0;
  return value;
}
inline bool CmaAllocInfoFtraceEvent::has_pfn() const {
  return _internal_has_pfn();
}
inline void CmaAllocInfoFtraceEvent::clear_pfn() {
  _impl_.pfn_ = ::uint64_t{0u};
  _impl_._has_bits_[0] &= ~0x00000100u;
}
inline ::uint64_t CmaAllocInfoFtraceEvent::_internal_pfn() const {
  return _impl_.pfn_;
}
inline ::uint64_t CmaAllocInfoFtraceEvent::pfn() const {
  // @@protoc_insertion_point(field_get:perfetto.protos.CmaAllocInfoFtraceEvent.pfn)
  return _internal_pfn();
}
inline void CmaAllocInfoFtraceEvent::_internal_set_pfn(::uint64_t value) {
  _impl_._has_bits_[0] |= 0x00000100u;
  _impl_.pfn_ = value;
}
inline void CmaAllocInfoFtraceEvent::set_pfn(::uint64_t value) {
  _internal_set_pfn(value);
  // @@protoc_insertion_point(field_set:perfetto.protos.CmaAllocInfoFtraceEvent.pfn)
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
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_protos_2fperfetto_2ftrace_2fftrace_2fcma_2eproto
