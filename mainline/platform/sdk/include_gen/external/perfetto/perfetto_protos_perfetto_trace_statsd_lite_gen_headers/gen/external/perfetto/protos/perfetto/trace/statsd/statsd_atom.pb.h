// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: protos/perfetto/trace/statsd/statsd_atom.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_protos_2fperfetto_2ftrace_2fstatsd_2fstatsd_5fatom_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_protos_2fperfetto_2ftrace_2fstatsd_2fstatsd_5fatom_2eproto

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
#define PROTOBUF_INTERNAL_EXPORT_protos_2fperfetto_2ftrace_2fstatsd_2fstatsd_5fatom_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_protos_2fperfetto_2ftrace_2fstatsd_2fstatsd_5fatom_2eproto {
  static const ::uint32_t offsets[];
};
namespace perfetto {
namespace protos {
class OpaqueAtom;
struct OpaqueAtomDefaultTypeInternal;
extern OpaqueAtomDefaultTypeInternal _OpaqueAtom_default_instance_;
class StatsdAtom;
struct StatsdAtomDefaultTypeInternal;
extern StatsdAtomDefaultTypeInternal _StatsdAtom_default_instance_;
}  // namespace protos
}  // namespace perfetto
PROTOBUF_NAMESPACE_OPEN
template<> ::perfetto::protos::OpaqueAtom* Arena::CreateMaybeMessage<::perfetto::protos::OpaqueAtom>(Arena*);
template<> ::perfetto::protos::StatsdAtom* Arena::CreateMaybeMessage<::perfetto::protos::StatsdAtom>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace perfetto {
namespace protos {

// ===================================================================

class OpaqueAtom final :
    public ::PROTOBUF_NAMESPACE_ID::MessageLite /* @@protoc_insertion_point(class_definition:perfetto.protos.OpaqueAtom) */ {
 public:
  inline OpaqueAtom() : OpaqueAtom(nullptr) {}
  ~OpaqueAtom() override;
  explicit PROTOBUF_CONSTEXPR OpaqueAtom(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  OpaqueAtom(const OpaqueAtom& from);
  OpaqueAtom(OpaqueAtom&& from) noexcept
    : OpaqueAtom() {
    *this = ::std::move(from);
  }

  inline OpaqueAtom& operator=(const OpaqueAtom& from) {
    if (this == &from) return *this;
    CopyFrom(from);
    return *this;
  }
  inline OpaqueAtom& operator=(OpaqueAtom&& from) noexcept {
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

  static const OpaqueAtom& default_instance() {
    return *internal_default_instance();
  }
  static inline const OpaqueAtom* internal_default_instance() {
    return reinterpret_cast<const OpaqueAtom*>(
               &_OpaqueAtom_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(OpaqueAtom& a, OpaqueAtom& b) {
    a.Swap(&b);
  }
  inline void Swap(OpaqueAtom* other) {
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
  void UnsafeArenaSwap(OpaqueAtom* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  OpaqueAtom* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<OpaqueAtom>(arena);
  }
  OpaqueAtom* New() const {
    return New(nullptr);
  }
  void CheckTypeAndMergeFrom(const ::PROTOBUF_NAMESPACE_ID::MessageLite& from)  final;
  void CopyFrom(const OpaqueAtom& from);
  void MergeFrom(const OpaqueAtom& from);
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
  void InternalSwap(OpaqueAtom* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "perfetto.protos.OpaqueAtom";
  }
  protected:
  explicit OpaqueAtom(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  std::string GetTypeName() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // @@protoc_insertion_point(class_scope:perfetto.protos.OpaqueAtom)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_protos_2fperfetto_2ftrace_2fstatsd_2fstatsd_5fatom_2eproto;
};
// -------------------------------------------------------------------

class StatsdAtom final :
    public ::PROTOBUF_NAMESPACE_ID::MessageLite /* @@protoc_insertion_point(class_definition:perfetto.protos.StatsdAtom) */ {
 public:
  inline StatsdAtom() : StatsdAtom(nullptr) {}
  ~StatsdAtom() override;
  explicit PROTOBUF_CONSTEXPR StatsdAtom(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  StatsdAtom(const StatsdAtom& from);
  StatsdAtom(StatsdAtom&& from) noexcept
    : StatsdAtom() {
    *this = ::std::move(from);
  }

  inline StatsdAtom& operator=(const StatsdAtom& from) {
    if (this == &from) return *this;
    CopyFrom(from);
    return *this;
  }
  inline StatsdAtom& operator=(StatsdAtom&& from) noexcept {
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

  static const StatsdAtom& default_instance() {
    return *internal_default_instance();
  }
  static inline const StatsdAtom* internal_default_instance() {
    return reinterpret_cast<const StatsdAtom*>(
               &_StatsdAtom_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(StatsdAtom& a, StatsdAtom& b) {
    a.Swap(&b);
  }
  inline void Swap(StatsdAtom* other) {
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
  void UnsafeArenaSwap(StatsdAtom* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  StatsdAtom* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<StatsdAtom>(arena);
  }
  StatsdAtom* New() const {
    return New(nullptr);
  }
  void CheckTypeAndMergeFrom(const ::PROTOBUF_NAMESPACE_ID::MessageLite& from)  final;
  void CopyFrom(const StatsdAtom& from);
  void MergeFrom(const StatsdAtom& from);
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
  void InternalSwap(StatsdAtom* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "perfetto.protos.StatsdAtom";
  }
  protected:
  explicit StatsdAtom(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  std::string GetTypeName() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kNestedFieldNumber = 1,
  };
  // repeated .perfetto.protos.OpaqueAtom nested = 1;
  int nested_size() const;
  private:
  int _internal_nested_size() const;
  public:
  void clear_nested();
  ::perfetto::protos::OpaqueAtom* mutable_nested(int index);
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::perfetto::protos::OpaqueAtom >*
      mutable_nested();
  private:
  const ::perfetto::protos::OpaqueAtom& _internal_nested(int index) const;
  ::perfetto::protos::OpaqueAtom* _internal_add_nested();
  public:
  const ::perfetto::protos::OpaqueAtom& nested(int index) const;
  ::perfetto::protos::OpaqueAtom* add_nested();
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::perfetto::protos::OpaqueAtom >&
      nested() const;

  // @@protoc_insertion_point(class_scope:perfetto.protos.StatsdAtom)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::perfetto::protos::OpaqueAtom > nested_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_protos_2fperfetto_2ftrace_2fstatsd_2fstatsd_5fatom_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// OpaqueAtom

// -------------------------------------------------------------------

// StatsdAtom

// repeated .perfetto.protos.OpaqueAtom nested = 1;
inline int StatsdAtom::_internal_nested_size() const {
  return _impl_.nested_.size();
}
inline int StatsdAtom::nested_size() const {
  return _internal_nested_size();
}
inline void StatsdAtom::clear_nested() {
  _impl_.nested_.Clear();
}
inline ::perfetto::protos::OpaqueAtom* StatsdAtom::mutable_nested(int index) {
  // @@protoc_insertion_point(field_mutable:perfetto.protos.StatsdAtom.nested)
  return _impl_.nested_.Mutable(index);
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::perfetto::protos::OpaqueAtom >*
StatsdAtom::mutable_nested() {
  // @@protoc_insertion_point(field_mutable_list:perfetto.protos.StatsdAtom.nested)
  return &_impl_.nested_;
}
inline const ::perfetto::protos::OpaqueAtom& StatsdAtom::_internal_nested(int index) const {
  return _impl_.nested_.Get(index);
}
inline const ::perfetto::protos::OpaqueAtom& StatsdAtom::nested(int index) const {
  // @@protoc_insertion_point(field_get:perfetto.protos.StatsdAtom.nested)
  return _internal_nested(index);
}
inline ::perfetto::protos::OpaqueAtom* StatsdAtom::_internal_add_nested() {
  return _impl_.nested_.Add();
}
inline ::perfetto::protos::OpaqueAtom* StatsdAtom::add_nested() {
  ::perfetto::protos::OpaqueAtom* _add = _internal_add_nested();
  // @@protoc_insertion_point(field_add:perfetto.protos.StatsdAtom.nested)
  return _add;
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::perfetto::protos::OpaqueAtom >&
StatsdAtom::nested() const {
  // @@protoc_insertion_point(field_list:perfetto.protos.StatsdAtom.nested)
  return _impl_.nested_;
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
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_protos_2fperfetto_2ftrace_2fstatsd_2fstatsd_5fatom_2eproto
