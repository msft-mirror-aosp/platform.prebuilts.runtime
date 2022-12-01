// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: protos/perfetto/trace/ftrace/filemap.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_protos_2fperfetto_2ftrace_2fftrace_2ffilemap_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_protos_2fperfetto_2ftrace_2fftrace_2ffilemap_2eproto

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
#define PROTOBUF_INTERNAL_EXPORT_protos_2fperfetto_2ftrace_2fftrace_2ffilemap_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_protos_2fperfetto_2ftrace_2fftrace_2ffilemap_2eproto {
  static const ::uint32_t offsets[];
};
namespace perfetto {
namespace protos {
class MmFilemapAddToPageCacheFtraceEvent;
struct MmFilemapAddToPageCacheFtraceEventDefaultTypeInternal;
extern MmFilemapAddToPageCacheFtraceEventDefaultTypeInternal _MmFilemapAddToPageCacheFtraceEvent_default_instance_;
class MmFilemapDeleteFromPageCacheFtraceEvent;
struct MmFilemapDeleteFromPageCacheFtraceEventDefaultTypeInternal;
extern MmFilemapDeleteFromPageCacheFtraceEventDefaultTypeInternal _MmFilemapDeleteFromPageCacheFtraceEvent_default_instance_;
}  // namespace protos
}  // namespace perfetto
PROTOBUF_NAMESPACE_OPEN
template<> ::perfetto::protos::MmFilemapAddToPageCacheFtraceEvent* Arena::CreateMaybeMessage<::perfetto::protos::MmFilemapAddToPageCacheFtraceEvent>(Arena*);
template<> ::perfetto::protos::MmFilemapDeleteFromPageCacheFtraceEvent* Arena::CreateMaybeMessage<::perfetto::protos::MmFilemapDeleteFromPageCacheFtraceEvent>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace perfetto {
namespace protos {

// ===================================================================

class MmFilemapAddToPageCacheFtraceEvent final :
    public ::PROTOBUF_NAMESPACE_ID::MessageLite /* @@protoc_insertion_point(class_definition:perfetto.protos.MmFilemapAddToPageCacheFtraceEvent) */ {
 public:
  inline MmFilemapAddToPageCacheFtraceEvent() : MmFilemapAddToPageCacheFtraceEvent(nullptr) {}
  ~MmFilemapAddToPageCacheFtraceEvent() override;
  explicit PROTOBUF_CONSTEXPR MmFilemapAddToPageCacheFtraceEvent(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  MmFilemapAddToPageCacheFtraceEvent(const MmFilemapAddToPageCacheFtraceEvent& from);
  MmFilemapAddToPageCacheFtraceEvent(MmFilemapAddToPageCacheFtraceEvent&& from) noexcept
    : MmFilemapAddToPageCacheFtraceEvent() {
    *this = ::std::move(from);
  }

  inline MmFilemapAddToPageCacheFtraceEvent& operator=(const MmFilemapAddToPageCacheFtraceEvent& from) {
    if (this == &from) return *this;
    CopyFrom(from);
    return *this;
  }
  inline MmFilemapAddToPageCacheFtraceEvent& operator=(MmFilemapAddToPageCacheFtraceEvent&& from) noexcept {
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

  static const MmFilemapAddToPageCacheFtraceEvent& default_instance() {
    return *internal_default_instance();
  }
  static inline const MmFilemapAddToPageCacheFtraceEvent* internal_default_instance() {
    return reinterpret_cast<const MmFilemapAddToPageCacheFtraceEvent*>(
               &_MmFilemapAddToPageCacheFtraceEvent_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(MmFilemapAddToPageCacheFtraceEvent& a, MmFilemapAddToPageCacheFtraceEvent& b) {
    a.Swap(&b);
  }
  inline void Swap(MmFilemapAddToPageCacheFtraceEvent* other) {
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
  void UnsafeArenaSwap(MmFilemapAddToPageCacheFtraceEvent* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  MmFilemapAddToPageCacheFtraceEvent* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<MmFilemapAddToPageCacheFtraceEvent>(arena);
  }
  MmFilemapAddToPageCacheFtraceEvent* New() const {
    return New(nullptr);
  }
  void CheckTypeAndMergeFrom(const ::PROTOBUF_NAMESPACE_ID::MessageLite& from)  final;
  void CopyFrom(const MmFilemapAddToPageCacheFtraceEvent& from);
  void MergeFrom(const MmFilemapAddToPageCacheFtraceEvent& from);
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
  void InternalSwap(MmFilemapAddToPageCacheFtraceEvent* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "perfetto.protos.MmFilemapAddToPageCacheFtraceEvent";
  }
  protected:
  explicit MmFilemapAddToPageCacheFtraceEvent(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  std::string GetTypeName() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kPfnFieldNumber = 1,
    kIInoFieldNumber = 2,
    kIndexFieldNumber = 3,
    kSDevFieldNumber = 4,
    kPageFieldNumber = 5,
  };
  // optional uint64 pfn = 1;
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

  // optional uint64 i_ino = 2;
  bool has_i_ino() const;
  private:
  bool _internal_has_i_ino() const;
  public:
  void clear_i_ino();
  ::uint64_t i_ino() const;
  void set_i_ino(::uint64_t value);
  private:
  ::uint64_t _internal_i_ino() const;
  void _internal_set_i_ino(::uint64_t value);
  public:

  // optional uint64 index = 3;
  bool has_index() const;
  private:
  bool _internal_has_index() const;
  public:
  void clear_index();
  ::uint64_t index() const;
  void set_index(::uint64_t value);
  private:
  ::uint64_t _internal_index() const;
  void _internal_set_index(::uint64_t value);
  public:

  // optional uint64 s_dev = 4;
  bool has_s_dev() const;
  private:
  bool _internal_has_s_dev() const;
  public:
  void clear_s_dev();
  ::uint64_t s_dev() const;
  void set_s_dev(::uint64_t value);
  private:
  ::uint64_t _internal_s_dev() const;
  void _internal_set_s_dev(::uint64_t value);
  public:

  // optional uint64 page = 5;
  bool has_page() const;
  private:
  bool _internal_has_page() const;
  public:
  void clear_page();
  ::uint64_t page() const;
  void set_page(::uint64_t value);
  private:
  ::uint64_t _internal_page() const;
  void _internal_set_page(::uint64_t value);
  public:

  // @@protoc_insertion_point(class_scope:perfetto.protos.MmFilemapAddToPageCacheFtraceEvent)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
    ::uint64_t pfn_;
    ::uint64_t i_ino_;
    ::uint64_t index_;
    ::uint64_t s_dev_;
    ::uint64_t page_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_protos_2fperfetto_2ftrace_2fftrace_2ffilemap_2eproto;
};
// -------------------------------------------------------------------

class MmFilemapDeleteFromPageCacheFtraceEvent final :
    public ::PROTOBUF_NAMESPACE_ID::MessageLite /* @@protoc_insertion_point(class_definition:perfetto.protos.MmFilemapDeleteFromPageCacheFtraceEvent) */ {
 public:
  inline MmFilemapDeleteFromPageCacheFtraceEvent() : MmFilemapDeleteFromPageCacheFtraceEvent(nullptr) {}
  ~MmFilemapDeleteFromPageCacheFtraceEvent() override;
  explicit PROTOBUF_CONSTEXPR MmFilemapDeleteFromPageCacheFtraceEvent(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  MmFilemapDeleteFromPageCacheFtraceEvent(const MmFilemapDeleteFromPageCacheFtraceEvent& from);
  MmFilemapDeleteFromPageCacheFtraceEvent(MmFilemapDeleteFromPageCacheFtraceEvent&& from) noexcept
    : MmFilemapDeleteFromPageCacheFtraceEvent() {
    *this = ::std::move(from);
  }

  inline MmFilemapDeleteFromPageCacheFtraceEvent& operator=(const MmFilemapDeleteFromPageCacheFtraceEvent& from) {
    if (this == &from) return *this;
    CopyFrom(from);
    return *this;
  }
  inline MmFilemapDeleteFromPageCacheFtraceEvent& operator=(MmFilemapDeleteFromPageCacheFtraceEvent&& from) noexcept {
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

  static const MmFilemapDeleteFromPageCacheFtraceEvent& default_instance() {
    return *internal_default_instance();
  }
  static inline const MmFilemapDeleteFromPageCacheFtraceEvent* internal_default_instance() {
    return reinterpret_cast<const MmFilemapDeleteFromPageCacheFtraceEvent*>(
               &_MmFilemapDeleteFromPageCacheFtraceEvent_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(MmFilemapDeleteFromPageCacheFtraceEvent& a, MmFilemapDeleteFromPageCacheFtraceEvent& b) {
    a.Swap(&b);
  }
  inline void Swap(MmFilemapDeleteFromPageCacheFtraceEvent* other) {
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
  void UnsafeArenaSwap(MmFilemapDeleteFromPageCacheFtraceEvent* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  MmFilemapDeleteFromPageCacheFtraceEvent* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<MmFilemapDeleteFromPageCacheFtraceEvent>(arena);
  }
  MmFilemapDeleteFromPageCacheFtraceEvent* New() const {
    return New(nullptr);
  }
  void CheckTypeAndMergeFrom(const ::PROTOBUF_NAMESPACE_ID::MessageLite& from)  final;
  void CopyFrom(const MmFilemapDeleteFromPageCacheFtraceEvent& from);
  void MergeFrom(const MmFilemapDeleteFromPageCacheFtraceEvent& from);
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
  void InternalSwap(MmFilemapDeleteFromPageCacheFtraceEvent* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "perfetto.protos.MmFilemapDeleteFromPageCacheFtraceEvent";
  }
  protected:
  explicit MmFilemapDeleteFromPageCacheFtraceEvent(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  std::string GetTypeName() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kPfnFieldNumber = 1,
    kIInoFieldNumber = 2,
    kIndexFieldNumber = 3,
    kSDevFieldNumber = 4,
    kPageFieldNumber = 5,
  };
  // optional uint64 pfn = 1;
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

  // optional uint64 i_ino = 2;
  bool has_i_ino() const;
  private:
  bool _internal_has_i_ino() const;
  public:
  void clear_i_ino();
  ::uint64_t i_ino() const;
  void set_i_ino(::uint64_t value);
  private:
  ::uint64_t _internal_i_ino() const;
  void _internal_set_i_ino(::uint64_t value);
  public:

  // optional uint64 index = 3;
  bool has_index() const;
  private:
  bool _internal_has_index() const;
  public:
  void clear_index();
  ::uint64_t index() const;
  void set_index(::uint64_t value);
  private:
  ::uint64_t _internal_index() const;
  void _internal_set_index(::uint64_t value);
  public:

  // optional uint64 s_dev = 4;
  bool has_s_dev() const;
  private:
  bool _internal_has_s_dev() const;
  public:
  void clear_s_dev();
  ::uint64_t s_dev() const;
  void set_s_dev(::uint64_t value);
  private:
  ::uint64_t _internal_s_dev() const;
  void _internal_set_s_dev(::uint64_t value);
  public:

  // optional uint64 page = 5;
  bool has_page() const;
  private:
  bool _internal_has_page() const;
  public:
  void clear_page();
  ::uint64_t page() const;
  void set_page(::uint64_t value);
  private:
  ::uint64_t _internal_page() const;
  void _internal_set_page(::uint64_t value);
  public:

  // @@protoc_insertion_point(class_scope:perfetto.protos.MmFilemapDeleteFromPageCacheFtraceEvent)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
    ::uint64_t pfn_;
    ::uint64_t i_ino_;
    ::uint64_t index_;
    ::uint64_t s_dev_;
    ::uint64_t page_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_protos_2fperfetto_2ftrace_2fftrace_2ffilemap_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// MmFilemapAddToPageCacheFtraceEvent

// optional uint64 pfn = 1;
inline bool MmFilemapAddToPageCacheFtraceEvent::_internal_has_pfn() const {
  bool value = (_impl_._has_bits_[0] & 0x00000001u) != 0;
  return value;
}
inline bool MmFilemapAddToPageCacheFtraceEvent::has_pfn() const {
  return _internal_has_pfn();
}
inline void MmFilemapAddToPageCacheFtraceEvent::clear_pfn() {
  _impl_.pfn_ = ::uint64_t{0u};
  _impl_._has_bits_[0] &= ~0x00000001u;
}
inline ::uint64_t MmFilemapAddToPageCacheFtraceEvent::_internal_pfn() const {
  return _impl_.pfn_;
}
inline ::uint64_t MmFilemapAddToPageCacheFtraceEvent::pfn() const {
  // @@protoc_insertion_point(field_get:perfetto.protos.MmFilemapAddToPageCacheFtraceEvent.pfn)
  return _internal_pfn();
}
inline void MmFilemapAddToPageCacheFtraceEvent::_internal_set_pfn(::uint64_t value) {
  _impl_._has_bits_[0] |= 0x00000001u;
  _impl_.pfn_ = value;
}
inline void MmFilemapAddToPageCacheFtraceEvent::set_pfn(::uint64_t value) {
  _internal_set_pfn(value);
  // @@protoc_insertion_point(field_set:perfetto.protos.MmFilemapAddToPageCacheFtraceEvent.pfn)
}

// optional uint64 i_ino = 2;
inline bool MmFilemapAddToPageCacheFtraceEvent::_internal_has_i_ino() const {
  bool value = (_impl_._has_bits_[0] & 0x00000002u) != 0;
  return value;
}
inline bool MmFilemapAddToPageCacheFtraceEvent::has_i_ino() const {
  return _internal_has_i_ino();
}
inline void MmFilemapAddToPageCacheFtraceEvent::clear_i_ino() {
  _impl_.i_ino_ = ::uint64_t{0u};
  _impl_._has_bits_[0] &= ~0x00000002u;
}
inline ::uint64_t MmFilemapAddToPageCacheFtraceEvent::_internal_i_ino() const {
  return _impl_.i_ino_;
}
inline ::uint64_t MmFilemapAddToPageCacheFtraceEvent::i_ino() const {
  // @@protoc_insertion_point(field_get:perfetto.protos.MmFilemapAddToPageCacheFtraceEvent.i_ino)
  return _internal_i_ino();
}
inline void MmFilemapAddToPageCacheFtraceEvent::_internal_set_i_ino(::uint64_t value) {
  _impl_._has_bits_[0] |= 0x00000002u;
  _impl_.i_ino_ = value;
}
inline void MmFilemapAddToPageCacheFtraceEvent::set_i_ino(::uint64_t value) {
  _internal_set_i_ino(value);
  // @@protoc_insertion_point(field_set:perfetto.protos.MmFilemapAddToPageCacheFtraceEvent.i_ino)
}

// optional uint64 index = 3;
inline bool MmFilemapAddToPageCacheFtraceEvent::_internal_has_index() const {
  bool value = (_impl_._has_bits_[0] & 0x00000004u) != 0;
  return value;
}
inline bool MmFilemapAddToPageCacheFtraceEvent::has_index() const {
  return _internal_has_index();
}
inline void MmFilemapAddToPageCacheFtraceEvent::clear_index() {
  _impl_.index_ = ::uint64_t{0u};
  _impl_._has_bits_[0] &= ~0x00000004u;
}
inline ::uint64_t MmFilemapAddToPageCacheFtraceEvent::_internal_index() const {
  return _impl_.index_;
}
inline ::uint64_t MmFilemapAddToPageCacheFtraceEvent::index() const {
  // @@protoc_insertion_point(field_get:perfetto.protos.MmFilemapAddToPageCacheFtraceEvent.index)
  return _internal_index();
}
inline void MmFilemapAddToPageCacheFtraceEvent::_internal_set_index(::uint64_t value) {
  _impl_._has_bits_[0] |= 0x00000004u;
  _impl_.index_ = value;
}
inline void MmFilemapAddToPageCacheFtraceEvent::set_index(::uint64_t value) {
  _internal_set_index(value);
  // @@protoc_insertion_point(field_set:perfetto.protos.MmFilemapAddToPageCacheFtraceEvent.index)
}

// optional uint64 s_dev = 4;
inline bool MmFilemapAddToPageCacheFtraceEvent::_internal_has_s_dev() const {
  bool value = (_impl_._has_bits_[0] & 0x00000008u) != 0;
  return value;
}
inline bool MmFilemapAddToPageCacheFtraceEvent::has_s_dev() const {
  return _internal_has_s_dev();
}
inline void MmFilemapAddToPageCacheFtraceEvent::clear_s_dev() {
  _impl_.s_dev_ = ::uint64_t{0u};
  _impl_._has_bits_[0] &= ~0x00000008u;
}
inline ::uint64_t MmFilemapAddToPageCacheFtraceEvent::_internal_s_dev() const {
  return _impl_.s_dev_;
}
inline ::uint64_t MmFilemapAddToPageCacheFtraceEvent::s_dev() const {
  // @@protoc_insertion_point(field_get:perfetto.protos.MmFilemapAddToPageCacheFtraceEvent.s_dev)
  return _internal_s_dev();
}
inline void MmFilemapAddToPageCacheFtraceEvent::_internal_set_s_dev(::uint64_t value) {
  _impl_._has_bits_[0] |= 0x00000008u;
  _impl_.s_dev_ = value;
}
inline void MmFilemapAddToPageCacheFtraceEvent::set_s_dev(::uint64_t value) {
  _internal_set_s_dev(value);
  // @@protoc_insertion_point(field_set:perfetto.protos.MmFilemapAddToPageCacheFtraceEvent.s_dev)
}

// optional uint64 page = 5;
inline bool MmFilemapAddToPageCacheFtraceEvent::_internal_has_page() const {
  bool value = (_impl_._has_bits_[0] & 0x00000010u) != 0;
  return value;
}
inline bool MmFilemapAddToPageCacheFtraceEvent::has_page() const {
  return _internal_has_page();
}
inline void MmFilemapAddToPageCacheFtraceEvent::clear_page() {
  _impl_.page_ = ::uint64_t{0u};
  _impl_._has_bits_[0] &= ~0x00000010u;
}
inline ::uint64_t MmFilemapAddToPageCacheFtraceEvent::_internal_page() const {
  return _impl_.page_;
}
inline ::uint64_t MmFilemapAddToPageCacheFtraceEvent::page() const {
  // @@protoc_insertion_point(field_get:perfetto.protos.MmFilemapAddToPageCacheFtraceEvent.page)
  return _internal_page();
}
inline void MmFilemapAddToPageCacheFtraceEvent::_internal_set_page(::uint64_t value) {
  _impl_._has_bits_[0] |= 0x00000010u;
  _impl_.page_ = value;
}
inline void MmFilemapAddToPageCacheFtraceEvent::set_page(::uint64_t value) {
  _internal_set_page(value);
  // @@protoc_insertion_point(field_set:perfetto.protos.MmFilemapAddToPageCacheFtraceEvent.page)
}

// -------------------------------------------------------------------

// MmFilemapDeleteFromPageCacheFtraceEvent

// optional uint64 pfn = 1;
inline bool MmFilemapDeleteFromPageCacheFtraceEvent::_internal_has_pfn() const {
  bool value = (_impl_._has_bits_[0] & 0x00000001u) != 0;
  return value;
}
inline bool MmFilemapDeleteFromPageCacheFtraceEvent::has_pfn() const {
  return _internal_has_pfn();
}
inline void MmFilemapDeleteFromPageCacheFtraceEvent::clear_pfn() {
  _impl_.pfn_ = ::uint64_t{0u};
  _impl_._has_bits_[0] &= ~0x00000001u;
}
inline ::uint64_t MmFilemapDeleteFromPageCacheFtraceEvent::_internal_pfn() const {
  return _impl_.pfn_;
}
inline ::uint64_t MmFilemapDeleteFromPageCacheFtraceEvent::pfn() const {
  // @@protoc_insertion_point(field_get:perfetto.protos.MmFilemapDeleteFromPageCacheFtraceEvent.pfn)
  return _internal_pfn();
}
inline void MmFilemapDeleteFromPageCacheFtraceEvent::_internal_set_pfn(::uint64_t value) {
  _impl_._has_bits_[0] |= 0x00000001u;
  _impl_.pfn_ = value;
}
inline void MmFilemapDeleteFromPageCacheFtraceEvent::set_pfn(::uint64_t value) {
  _internal_set_pfn(value);
  // @@protoc_insertion_point(field_set:perfetto.protos.MmFilemapDeleteFromPageCacheFtraceEvent.pfn)
}

// optional uint64 i_ino = 2;
inline bool MmFilemapDeleteFromPageCacheFtraceEvent::_internal_has_i_ino() const {
  bool value = (_impl_._has_bits_[0] & 0x00000002u) != 0;
  return value;
}
inline bool MmFilemapDeleteFromPageCacheFtraceEvent::has_i_ino() const {
  return _internal_has_i_ino();
}
inline void MmFilemapDeleteFromPageCacheFtraceEvent::clear_i_ino() {
  _impl_.i_ino_ = ::uint64_t{0u};
  _impl_._has_bits_[0] &= ~0x00000002u;
}
inline ::uint64_t MmFilemapDeleteFromPageCacheFtraceEvent::_internal_i_ino() const {
  return _impl_.i_ino_;
}
inline ::uint64_t MmFilemapDeleteFromPageCacheFtraceEvent::i_ino() const {
  // @@protoc_insertion_point(field_get:perfetto.protos.MmFilemapDeleteFromPageCacheFtraceEvent.i_ino)
  return _internal_i_ino();
}
inline void MmFilemapDeleteFromPageCacheFtraceEvent::_internal_set_i_ino(::uint64_t value) {
  _impl_._has_bits_[0] |= 0x00000002u;
  _impl_.i_ino_ = value;
}
inline void MmFilemapDeleteFromPageCacheFtraceEvent::set_i_ino(::uint64_t value) {
  _internal_set_i_ino(value);
  // @@protoc_insertion_point(field_set:perfetto.protos.MmFilemapDeleteFromPageCacheFtraceEvent.i_ino)
}

// optional uint64 index = 3;
inline bool MmFilemapDeleteFromPageCacheFtraceEvent::_internal_has_index() const {
  bool value = (_impl_._has_bits_[0] & 0x00000004u) != 0;
  return value;
}
inline bool MmFilemapDeleteFromPageCacheFtraceEvent::has_index() const {
  return _internal_has_index();
}
inline void MmFilemapDeleteFromPageCacheFtraceEvent::clear_index() {
  _impl_.index_ = ::uint64_t{0u};
  _impl_._has_bits_[0] &= ~0x00000004u;
}
inline ::uint64_t MmFilemapDeleteFromPageCacheFtraceEvent::_internal_index() const {
  return _impl_.index_;
}
inline ::uint64_t MmFilemapDeleteFromPageCacheFtraceEvent::index() const {
  // @@protoc_insertion_point(field_get:perfetto.protos.MmFilemapDeleteFromPageCacheFtraceEvent.index)
  return _internal_index();
}
inline void MmFilemapDeleteFromPageCacheFtraceEvent::_internal_set_index(::uint64_t value) {
  _impl_._has_bits_[0] |= 0x00000004u;
  _impl_.index_ = value;
}
inline void MmFilemapDeleteFromPageCacheFtraceEvent::set_index(::uint64_t value) {
  _internal_set_index(value);
  // @@protoc_insertion_point(field_set:perfetto.protos.MmFilemapDeleteFromPageCacheFtraceEvent.index)
}

// optional uint64 s_dev = 4;
inline bool MmFilemapDeleteFromPageCacheFtraceEvent::_internal_has_s_dev() const {
  bool value = (_impl_._has_bits_[0] & 0x00000008u) != 0;
  return value;
}
inline bool MmFilemapDeleteFromPageCacheFtraceEvent::has_s_dev() const {
  return _internal_has_s_dev();
}
inline void MmFilemapDeleteFromPageCacheFtraceEvent::clear_s_dev() {
  _impl_.s_dev_ = ::uint64_t{0u};
  _impl_._has_bits_[0] &= ~0x00000008u;
}
inline ::uint64_t MmFilemapDeleteFromPageCacheFtraceEvent::_internal_s_dev() const {
  return _impl_.s_dev_;
}
inline ::uint64_t MmFilemapDeleteFromPageCacheFtraceEvent::s_dev() const {
  // @@protoc_insertion_point(field_get:perfetto.protos.MmFilemapDeleteFromPageCacheFtraceEvent.s_dev)
  return _internal_s_dev();
}
inline void MmFilemapDeleteFromPageCacheFtraceEvent::_internal_set_s_dev(::uint64_t value) {
  _impl_._has_bits_[0] |= 0x00000008u;
  _impl_.s_dev_ = value;
}
inline void MmFilemapDeleteFromPageCacheFtraceEvent::set_s_dev(::uint64_t value) {
  _internal_set_s_dev(value);
  // @@protoc_insertion_point(field_set:perfetto.protos.MmFilemapDeleteFromPageCacheFtraceEvent.s_dev)
}

// optional uint64 page = 5;
inline bool MmFilemapDeleteFromPageCacheFtraceEvent::_internal_has_page() const {
  bool value = (_impl_._has_bits_[0] & 0x00000010u) != 0;
  return value;
}
inline bool MmFilemapDeleteFromPageCacheFtraceEvent::has_page() const {
  return _internal_has_page();
}
inline void MmFilemapDeleteFromPageCacheFtraceEvent::clear_page() {
  _impl_.page_ = ::uint64_t{0u};
  _impl_._has_bits_[0] &= ~0x00000010u;
}
inline ::uint64_t MmFilemapDeleteFromPageCacheFtraceEvent::_internal_page() const {
  return _impl_.page_;
}
inline ::uint64_t MmFilemapDeleteFromPageCacheFtraceEvent::page() const {
  // @@protoc_insertion_point(field_get:perfetto.protos.MmFilemapDeleteFromPageCacheFtraceEvent.page)
  return _internal_page();
}
inline void MmFilemapDeleteFromPageCacheFtraceEvent::_internal_set_page(::uint64_t value) {
  _impl_._has_bits_[0] |= 0x00000010u;
  _impl_.page_ = value;
}
inline void MmFilemapDeleteFromPageCacheFtraceEvent::set_page(::uint64_t value) {
  _internal_set_page(value);
  // @@protoc_insertion_point(field_set:perfetto.protos.MmFilemapDeleteFromPageCacheFtraceEvent.page)
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
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_protos_2fperfetto_2ftrace_2fftrace_2ffilemap_2eproto
