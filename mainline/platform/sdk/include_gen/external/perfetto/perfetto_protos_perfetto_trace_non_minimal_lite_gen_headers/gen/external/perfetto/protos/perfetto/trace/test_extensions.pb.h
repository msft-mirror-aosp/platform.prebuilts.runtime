// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: protos/perfetto/trace/test_extensions.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_protos_2fperfetto_2ftrace_2ftest_5fextensions_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_protos_2fperfetto_2ftrace_2ftest_5fextensions_2eproto

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
#include "protos/perfetto/trace/track_event/track_event.pb.h"
#include "protos/perfetto/trace/track_event/debug_annotation.pb.h"
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_protos_2fperfetto_2ftrace_2ftest_5fextensions_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_protos_2fperfetto_2ftrace_2ftest_5fextensions_2eproto {
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
class TestExtension;
class TestExtensionDefaultTypeInternal;
extern TestExtensionDefaultTypeInternal _TestExtension_default_instance_;
class TestExtensionChild;
class TestExtensionChildDefaultTypeInternal;
extern TestExtensionChildDefaultTypeInternal _TestExtensionChild_default_instance_;
}  // namespace protos
}  // namespace perfetto
PROTOBUF_NAMESPACE_OPEN
template<> ::perfetto::protos::TestExtension* Arena::CreateMaybeMessage<::perfetto::protos::TestExtension>(Arena*);
template<> ::perfetto::protos::TestExtensionChild* Arena::CreateMaybeMessage<::perfetto::protos::TestExtensionChild>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace perfetto {
namespace protos {

// ===================================================================

class TestExtension :
    public ::PROTOBUF_NAMESPACE_ID::MessageLite /* @@protoc_insertion_point(class_definition:perfetto.protos.TestExtension) */ {
 public:
  TestExtension();
  virtual ~TestExtension();

  TestExtension(const TestExtension& from);
  TestExtension(TestExtension&& from) noexcept
    : TestExtension() {
    *this = ::std::move(from);
  }

  inline TestExtension& operator=(const TestExtension& from) {
    CopyFrom(from);
    return *this;
  }
  inline TestExtension& operator=(TestExtension&& from) noexcept {
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

  static const TestExtension& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const TestExtension* internal_default_instance() {
    return reinterpret_cast<const TestExtension*>(
               &_TestExtension_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(TestExtension& a, TestExtension& b) {
    a.Swap(&b);
  }
  inline void Swap(TestExtension* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline TestExtension* New() const final {
    return CreateMaybeMessage<TestExtension>(nullptr);
  }

  TestExtension* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<TestExtension>(arena);
  }
  void CheckTypeAndMergeFrom(const ::PROTOBUF_NAMESPACE_ID::MessageLite& from)
    final;
  void CopyFrom(const TestExtension& from);
  void MergeFrom(const TestExtension& from);
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
  void InternalSwap(TestExtension* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "perfetto.protos.TestExtension";
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

  static const int kStringExtensionForTestingFieldNumber = 9900;
  static ::PROTOBUF_NAMESPACE_ID::internal::ExtensionIdentifier< ::perfetto::protos::TrackEvent,
      ::PROTOBUF_NAMESPACE_ID::internal::StringTypeTraits, 9, false >
    string_extension_for_testing;
  static const int kIntExtensionForTestingFieldNumber = 9901;
  static ::PROTOBUF_NAMESPACE_ID::internal::ExtensionIdentifier< ::perfetto::protos::TrackEvent,
      ::PROTOBUF_NAMESPACE_ID::internal::RepeatedPrimitiveTypeTraits< ::PROTOBUF_NAMESPACE_ID::int32 >, 5, false >
    int_extension_for_testing;
  static const int kOmittedExtensionForTestingFieldNumber = 9902;
  static ::PROTOBUF_NAMESPACE_ID::internal::ExtensionIdentifier< ::perfetto::protos::TrackEvent,
      ::PROTOBUF_NAMESPACE_ID::internal::StringTypeTraits, 9, false >
    omitted_extension_for_testing;
  static const int kNestedMessageExtensionForTestingFieldNumber = 9903;
  static ::PROTOBUF_NAMESPACE_ID::internal::ExtensionIdentifier< ::perfetto::protos::TrackEvent,
      ::PROTOBUF_NAMESPACE_ID::internal::MessageTypeTraits< ::perfetto::protos::TestExtensionChild >, 11, false >
    nested_message_extension_for_testing;
  // @@protoc_insertion_point(class_scope:perfetto.protos.TestExtension)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArenaLite _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_protos_2fperfetto_2ftrace_2ftest_5fextensions_2eproto;
};
// -------------------------------------------------------------------

class TestExtensionChild :
    public ::PROTOBUF_NAMESPACE_ID::MessageLite /* @@protoc_insertion_point(class_definition:perfetto.protos.TestExtensionChild) */ {
 public:
  TestExtensionChild();
  virtual ~TestExtensionChild();

  TestExtensionChild(const TestExtensionChild& from);
  TestExtensionChild(TestExtensionChild&& from) noexcept
    : TestExtensionChild() {
    *this = ::std::move(from);
  }

  inline TestExtensionChild& operator=(const TestExtensionChild& from) {
    CopyFrom(from);
    return *this;
  }
  inline TestExtensionChild& operator=(TestExtensionChild&& from) noexcept {
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

  static const TestExtensionChild& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const TestExtensionChild* internal_default_instance() {
    return reinterpret_cast<const TestExtensionChild*>(
               &_TestExtensionChild_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(TestExtensionChild& a, TestExtensionChild& b) {
    a.Swap(&b);
  }
  inline void Swap(TestExtensionChild* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline TestExtensionChild* New() const final {
    return CreateMaybeMessage<TestExtensionChild>(nullptr);
  }

  TestExtensionChild* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<TestExtensionChild>(arena);
  }
  void CheckTypeAndMergeFrom(const ::PROTOBUF_NAMESPACE_ID::MessageLite& from)
    final;
  void CopyFrom(const TestExtensionChild& from);
  void MergeFrom(const TestExtensionChild& from);
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
  void InternalSwap(TestExtensionChild* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "perfetto.protos.TestExtensionChild";
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
    kDebugAnnotationsFieldNumber = 99,
    kChildFieldForTestingFieldNumber = 1,
  };
  // repeated .perfetto.protos.DebugAnnotation debug_annotations = 99;
  int debug_annotations_size() const;
  void clear_debug_annotations();
  ::perfetto::protos::DebugAnnotation* mutable_debug_annotations(int index);
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::perfetto::protos::DebugAnnotation >*
      mutable_debug_annotations();
  const ::perfetto::protos::DebugAnnotation& debug_annotations(int index) const;
  ::perfetto::protos::DebugAnnotation* add_debug_annotations();
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::perfetto::protos::DebugAnnotation >&
      debug_annotations() const;

  // optional string child_field_for_testing = 1;
  bool has_child_field_for_testing() const;
  void clear_child_field_for_testing();
  const std::string& child_field_for_testing() const;
  void set_child_field_for_testing(const std::string& value);
  void set_child_field_for_testing(std::string&& value);
  void set_child_field_for_testing(const char* value);
  void set_child_field_for_testing(const char* value, size_t size);
  std::string* mutable_child_field_for_testing();
  std::string* release_child_field_for_testing();
  void set_allocated_child_field_for_testing(std::string* child_field_for_testing);

  // @@protoc_insertion_point(class_scope:perfetto.protos.TestExtensionChild)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArenaLite _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::perfetto::protos::DebugAnnotation > debug_annotations_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr child_field_for_testing_;
  friend struct ::TableStruct_protos_2fperfetto_2ftrace_2ftest_5fextensions_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// TestExtension

// -------------------------------------------------------------------

// TestExtensionChild

// optional string child_field_for_testing = 1;
inline bool TestExtensionChild::has_child_field_for_testing() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void TestExtensionChild::clear_child_field_for_testing() {
  child_field_for_testing_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  _has_bits_[0] &= ~0x00000001u;
}
inline const std::string& TestExtensionChild::child_field_for_testing() const {
  // @@protoc_insertion_point(field_get:perfetto.protos.TestExtensionChild.child_field_for_testing)
  return child_field_for_testing_.GetNoArena();
}
inline void TestExtensionChild::set_child_field_for_testing(const std::string& value) {
  _has_bits_[0] |= 0x00000001u;
  child_field_for_testing_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:perfetto.protos.TestExtensionChild.child_field_for_testing)
}
inline void TestExtensionChild::set_child_field_for_testing(std::string&& value) {
  _has_bits_[0] |= 0x00000001u;
  child_field_for_testing_.SetNoArena(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:perfetto.protos.TestExtensionChild.child_field_for_testing)
}
inline void TestExtensionChild::set_child_field_for_testing(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  _has_bits_[0] |= 0x00000001u;
  child_field_for_testing_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:perfetto.protos.TestExtensionChild.child_field_for_testing)
}
inline void TestExtensionChild::set_child_field_for_testing(const char* value, size_t size) {
  _has_bits_[0] |= 0x00000001u;
  child_field_for_testing_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:perfetto.protos.TestExtensionChild.child_field_for_testing)
}
inline std::string* TestExtensionChild::mutable_child_field_for_testing() {
  _has_bits_[0] |= 0x00000001u;
  // @@protoc_insertion_point(field_mutable:perfetto.protos.TestExtensionChild.child_field_for_testing)
  return child_field_for_testing_.MutableNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline std::string* TestExtensionChild::release_child_field_for_testing() {
  // @@protoc_insertion_point(field_release:perfetto.protos.TestExtensionChild.child_field_for_testing)
  if (!has_child_field_for_testing()) {
    return nullptr;
  }
  _has_bits_[0] &= ~0x00000001u;
  return child_field_for_testing_.ReleaseNonDefaultNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline void TestExtensionChild::set_allocated_child_field_for_testing(std::string* child_field_for_testing) {
  if (child_field_for_testing != nullptr) {
    _has_bits_[0] |= 0x00000001u;
  } else {
    _has_bits_[0] &= ~0x00000001u;
  }
  child_field_for_testing_.SetAllocatedNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), child_field_for_testing);
  // @@protoc_insertion_point(field_set_allocated:perfetto.protos.TestExtensionChild.child_field_for_testing)
}

// repeated .perfetto.protos.DebugAnnotation debug_annotations = 99;
inline int TestExtensionChild::debug_annotations_size() const {
  return debug_annotations_.size();
}
inline ::perfetto::protos::DebugAnnotation* TestExtensionChild::mutable_debug_annotations(int index) {
  // @@protoc_insertion_point(field_mutable:perfetto.protos.TestExtensionChild.debug_annotations)
  return debug_annotations_.Mutable(index);
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::perfetto::protos::DebugAnnotation >*
TestExtensionChild::mutable_debug_annotations() {
  // @@protoc_insertion_point(field_mutable_list:perfetto.protos.TestExtensionChild.debug_annotations)
  return &debug_annotations_;
}
inline const ::perfetto::protos::DebugAnnotation& TestExtensionChild::debug_annotations(int index) const {
  // @@protoc_insertion_point(field_get:perfetto.protos.TestExtensionChild.debug_annotations)
  return debug_annotations_.Get(index);
}
inline ::perfetto::protos::DebugAnnotation* TestExtensionChild::add_debug_annotations() {
  // @@protoc_insertion_point(field_add:perfetto.protos.TestExtensionChild.debug_annotations)
  return debug_annotations_.Add();
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::perfetto::protos::DebugAnnotation >&
TestExtensionChild::debug_annotations() const {
  // @@protoc_insertion_point(field_list:perfetto.protos.TestExtensionChild.debug_annotations)
  return debug_annotations_;
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
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_protos_2fperfetto_2ftrace_2ftest_5fextensions_2eproto
