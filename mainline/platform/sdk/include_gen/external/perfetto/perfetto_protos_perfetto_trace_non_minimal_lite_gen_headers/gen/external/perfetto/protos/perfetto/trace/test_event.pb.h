// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: protos/perfetto/trace/test_event.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_protos_2fperfetto_2ftrace_2ftest_5fevent_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_protos_2fperfetto_2ftrace_2ftest_5fevent_2eproto

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
#define PROTOBUF_INTERNAL_EXPORT_protos_2fperfetto_2ftrace_2ftest_5fevent_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_protos_2fperfetto_2ftrace_2ftest_5fevent_2eproto {
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
class TestEvent;
class TestEventDefaultTypeInternal;
extern TestEventDefaultTypeInternal _TestEvent_default_instance_;
class TestEvent_TestPayload;
class TestEvent_TestPayloadDefaultTypeInternal;
extern TestEvent_TestPayloadDefaultTypeInternal _TestEvent_TestPayload_default_instance_;
}  // namespace protos
}  // namespace perfetto
PROTOBUF_NAMESPACE_OPEN
template<> ::perfetto::protos::TestEvent* Arena::CreateMaybeMessage<::perfetto::protos::TestEvent>(Arena*);
template<> ::perfetto::protos::TestEvent_TestPayload* Arena::CreateMaybeMessage<::perfetto::protos::TestEvent_TestPayload>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace perfetto {
namespace protos {

// ===================================================================

class TestEvent_TestPayload :
    public ::PROTOBUF_NAMESPACE_ID::MessageLite /* @@protoc_insertion_point(class_definition:perfetto.protos.TestEvent.TestPayload) */ {
 public:
  TestEvent_TestPayload();
  virtual ~TestEvent_TestPayload();

  TestEvent_TestPayload(const TestEvent_TestPayload& from);
  TestEvent_TestPayload(TestEvent_TestPayload&& from) noexcept
    : TestEvent_TestPayload() {
    *this = ::std::move(from);
  }

  inline TestEvent_TestPayload& operator=(const TestEvent_TestPayload& from) {
    CopyFrom(from);
    return *this;
  }
  inline TestEvent_TestPayload& operator=(TestEvent_TestPayload&& from) noexcept {
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

  static const TestEvent_TestPayload& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const TestEvent_TestPayload* internal_default_instance() {
    return reinterpret_cast<const TestEvent_TestPayload*>(
               &_TestEvent_TestPayload_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(TestEvent_TestPayload& a, TestEvent_TestPayload& b) {
    a.Swap(&b);
  }
  inline void Swap(TestEvent_TestPayload* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline TestEvent_TestPayload* New() const final {
    return CreateMaybeMessage<TestEvent_TestPayload>(nullptr);
  }

  TestEvent_TestPayload* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<TestEvent_TestPayload>(arena);
  }
  void CheckTypeAndMergeFrom(const ::PROTOBUF_NAMESPACE_ID::MessageLite& from)
    final;
  void CopyFrom(const TestEvent_TestPayload& from);
  void MergeFrom(const TestEvent_TestPayload& from);
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
  void InternalSwap(TestEvent_TestPayload* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "perfetto.protos.TestEvent.TestPayload";
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
    kStrFieldNumber = 1,
    kNestedFieldNumber = 2,
    kRemainingNestingDepthFieldNumber = 3,
  };
  // repeated string str = 1;
  int str_size() const;
  void clear_str();
  const std::string& str(int index) const;
  std::string* mutable_str(int index);
  void set_str(int index, const std::string& value);
  void set_str(int index, std::string&& value);
  void set_str(int index, const char* value);
  void set_str(int index, const char* value, size_t size);
  std::string* add_str();
  void add_str(const std::string& value);
  void add_str(std::string&& value);
  void add_str(const char* value);
  void add_str(const char* value, size_t size);
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>& str() const;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>* mutable_str();

  // repeated .perfetto.protos.TestEvent.TestPayload nested = 2;
  int nested_size() const;
  void clear_nested();
  ::perfetto::protos::TestEvent_TestPayload* mutable_nested(int index);
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::perfetto::protos::TestEvent_TestPayload >*
      mutable_nested();
  const ::perfetto::protos::TestEvent_TestPayload& nested(int index) const;
  ::perfetto::protos::TestEvent_TestPayload* add_nested();
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::perfetto::protos::TestEvent_TestPayload >&
      nested() const;

  // optional uint32 remaining_nesting_depth = 3;
  bool has_remaining_nesting_depth() const;
  void clear_remaining_nesting_depth();
  ::PROTOBUF_NAMESPACE_ID::uint32 remaining_nesting_depth() const;
  void set_remaining_nesting_depth(::PROTOBUF_NAMESPACE_ID::uint32 value);

  // @@protoc_insertion_point(class_scope:perfetto.protos.TestEvent.TestPayload)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArenaLite _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string> str_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::perfetto::protos::TestEvent_TestPayload > nested_;
  ::PROTOBUF_NAMESPACE_ID::uint32 remaining_nesting_depth_;
  friend struct ::TableStruct_protos_2fperfetto_2ftrace_2ftest_5fevent_2eproto;
};
// -------------------------------------------------------------------

class TestEvent :
    public ::PROTOBUF_NAMESPACE_ID::MessageLite /* @@protoc_insertion_point(class_definition:perfetto.protos.TestEvent) */ {
 public:
  TestEvent();
  virtual ~TestEvent();

  TestEvent(const TestEvent& from);
  TestEvent(TestEvent&& from) noexcept
    : TestEvent() {
    *this = ::std::move(from);
  }

  inline TestEvent& operator=(const TestEvent& from) {
    CopyFrom(from);
    return *this;
  }
  inline TestEvent& operator=(TestEvent&& from) noexcept {
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

  static const TestEvent& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const TestEvent* internal_default_instance() {
    return reinterpret_cast<const TestEvent*>(
               &_TestEvent_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(TestEvent& a, TestEvent& b) {
    a.Swap(&b);
  }
  inline void Swap(TestEvent* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline TestEvent* New() const final {
    return CreateMaybeMessage<TestEvent>(nullptr);
  }

  TestEvent* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<TestEvent>(arena);
  }
  void CheckTypeAndMergeFrom(const ::PROTOBUF_NAMESPACE_ID::MessageLite& from)
    final;
  void CopyFrom(const TestEvent& from);
  void MergeFrom(const TestEvent& from);
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
  void InternalSwap(TestEvent* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "perfetto.protos.TestEvent";
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

  typedef TestEvent_TestPayload TestPayload;

  // accessors -------------------------------------------------------

  enum : int {
    kStrFieldNumber = 1,
    kPayloadFieldNumber = 5,
    kCounterFieldNumber = 3,
    kSeqValueFieldNumber = 2,
    kIsLastFieldNumber = 4,
  };
  // optional string str = 1;
  bool has_str() const;
  void clear_str();
  const std::string& str() const;
  void set_str(const std::string& value);
  void set_str(std::string&& value);
  void set_str(const char* value);
  void set_str(const char* value, size_t size);
  std::string* mutable_str();
  std::string* release_str();
  void set_allocated_str(std::string* str);

  // optional .perfetto.protos.TestEvent.TestPayload payload = 5;
  bool has_payload() const;
  void clear_payload();
  const ::perfetto::protos::TestEvent_TestPayload& payload() const;
  ::perfetto::protos::TestEvent_TestPayload* release_payload();
  ::perfetto::protos::TestEvent_TestPayload* mutable_payload();
  void set_allocated_payload(::perfetto::protos::TestEvent_TestPayload* payload);

  // optional uint64 counter = 3;
  bool has_counter() const;
  void clear_counter();
  ::PROTOBUF_NAMESPACE_ID::uint64 counter() const;
  void set_counter(::PROTOBUF_NAMESPACE_ID::uint64 value);

  // optional uint32 seq_value = 2;
  bool has_seq_value() const;
  void clear_seq_value();
  ::PROTOBUF_NAMESPACE_ID::uint32 seq_value() const;
  void set_seq_value(::PROTOBUF_NAMESPACE_ID::uint32 value);

  // optional bool is_last = 4;
  bool has_is_last() const;
  void clear_is_last();
  bool is_last() const;
  void set_is_last(bool value);

  // @@protoc_insertion_point(class_scope:perfetto.protos.TestEvent)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArenaLite _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr str_;
  ::perfetto::protos::TestEvent_TestPayload* payload_;
  ::PROTOBUF_NAMESPACE_ID::uint64 counter_;
  ::PROTOBUF_NAMESPACE_ID::uint32 seq_value_;
  bool is_last_;
  friend struct ::TableStruct_protos_2fperfetto_2ftrace_2ftest_5fevent_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// TestEvent_TestPayload

// repeated string str = 1;
inline int TestEvent_TestPayload::str_size() const {
  return str_.size();
}
inline void TestEvent_TestPayload::clear_str() {
  str_.Clear();
}
inline const std::string& TestEvent_TestPayload::str(int index) const {
  // @@protoc_insertion_point(field_get:perfetto.protos.TestEvent.TestPayload.str)
  return str_.Get(index);
}
inline std::string* TestEvent_TestPayload::mutable_str(int index) {
  // @@protoc_insertion_point(field_mutable:perfetto.protos.TestEvent.TestPayload.str)
  return str_.Mutable(index);
}
inline void TestEvent_TestPayload::set_str(int index, const std::string& value) {
  // @@protoc_insertion_point(field_set:perfetto.protos.TestEvent.TestPayload.str)
  str_.Mutable(index)->assign(value);
}
inline void TestEvent_TestPayload::set_str(int index, std::string&& value) {
  // @@protoc_insertion_point(field_set:perfetto.protos.TestEvent.TestPayload.str)
  str_.Mutable(index)->assign(std::move(value));
}
inline void TestEvent_TestPayload::set_str(int index, const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  str_.Mutable(index)->assign(value);
  // @@protoc_insertion_point(field_set_char:perfetto.protos.TestEvent.TestPayload.str)
}
inline void TestEvent_TestPayload::set_str(int index, const char* value, size_t size) {
  str_.Mutable(index)->assign(
    reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:perfetto.protos.TestEvent.TestPayload.str)
}
inline std::string* TestEvent_TestPayload::add_str() {
  // @@protoc_insertion_point(field_add_mutable:perfetto.protos.TestEvent.TestPayload.str)
  return str_.Add();
}
inline void TestEvent_TestPayload::add_str(const std::string& value) {
  str_.Add()->assign(value);
  // @@protoc_insertion_point(field_add:perfetto.protos.TestEvent.TestPayload.str)
}
inline void TestEvent_TestPayload::add_str(std::string&& value) {
  str_.Add(std::move(value));
  // @@protoc_insertion_point(field_add:perfetto.protos.TestEvent.TestPayload.str)
}
inline void TestEvent_TestPayload::add_str(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  str_.Add()->assign(value);
  // @@protoc_insertion_point(field_add_char:perfetto.protos.TestEvent.TestPayload.str)
}
inline void TestEvent_TestPayload::add_str(const char* value, size_t size) {
  str_.Add()->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_add_pointer:perfetto.protos.TestEvent.TestPayload.str)
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>&
TestEvent_TestPayload::str() const {
  // @@protoc_insertion_point(field_list:perfetto.protos.TestEvent.TestPayload.str)
  return str_;
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>*
TestEvent_TestPayload::mutable_str() {
  // @@protoc_insertion_point(field_mutable_list:perfetto.protos.TestEvent.TestPayload.str)
  return &str_;
}

// repeated .perfetto.protos.TestEvent.TestPayload nested = 2;
inline int TestEvent_TestPayload::nested_size() const {
  return nested_.size();
}
inline void TestEvent_TestPayload::clear_nested() {
  nested_.Clear();
}
inline ::perfetto::protos::TestEvent_TestPayload* TestEvent_TestPayload::mutable_nested(int index) {
  // @@protoc_insertion_point(field_mutable:perfetto.protos.TestEvent.TestPayload.nested)
  return nested_.Mutable(index);
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::perfetto::protos::TestEvent_TestPayload >*
TestEvent_TestPayload::mutable_nested() {
  // @@protoc_insertion_point(field_mutable_list:perfetto.protos.TestEvent.TestPayload.nested)
  return &nested_;
}
inline const ::perfetto::protos::TestEvent_TestPayload& TestEvent_TestPayload::nested(int index) const {
  // @@protoc_insertion_point(field_get:perfetto.protos.TestEvent.TestPayload.nested)
  return nested_.Get(index);
}
inline ::perfetto::protos::TestEvent_TestPayload* TestEvent_TestPayload::add_nested() {
  // @@protoc_insertion_point(field_add:perfetto.protos.TestEvent.TestPayload.nested)
  return nested_.Add();
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::perfetto::protos::TestEvent_TestPayload >&
TestEvent_TestPayload::nested() const {
  // @@protoc_insertion_point(field_list:perfetto.protos.TestEvent.TestPayload.nested)
  return nested_;
}

// optional uint32 remaining_nesting_depth = 3;
inline bool TestEvent_TestPayload::has_remaining_nesting_depth() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void TestEvent_TestPayload::clear_remaining_nesting_depth() {
  remaining_nesting_depth_ = 0u;
  _has_bits_[0] &= ~0x00000001u;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 TestEvent_TestPayload::remaining_nesting_depth() const {
  // @@protoc_insertion_point(field_get:perfetto.protos.TestEvent.TestPayload.remaining_nesting_depth)
  return remaining_nesting_depth_;
}
inline void TestEvent_TestPayload::set_remaining_nesting_depth(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  _has_bits_[0] |= 0x00000001u;
  remaining_nesting_depth_ = value;
  // @@protoc_insertion_point(field_set:perfetto.protos.TestEvent.TestPayload.remaining_nesting_depth)
}

// -------------------------------------------------------------------

// TestEvent

// optional string str = 1;
inline bool TestEvent::has_str() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void TestEvent::clear_str() {
  str_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  _has_bits_[0] &= ~0x00000001u;
}
inline const std::string& TestEvent::str() const {
  // @@protoc_insertion_point(field_get:perfetto.protos.TestEvent.str)
  return str_.GetNoArena();
}
inline void TestEvent::set_str(const std::string& value) {
  _has_bits_[0] |= 0x00000001u;
  str_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:perfetto.protos.TestEvent.str)
}
inline void TestEvent::set_str(std::string&& value) {
  _has_bits_[0] |= 0x00000001u;
  str_.SetNoArena(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:perfetto.protos.TestEvent.str)
}
inline void TestEvent::set_str(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  _has_bits_[0] |= 0x00000001u;
  str_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:perfetto.protos.TestEvent.str)
}
inline void TestEvent::set_str(const char* value, size_t size) {
  _has_bits_[0] |= 0x00000001u;
  str_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:perfetto.protos.TestEvent.str)
}
inline std::string* TestEvent::mutable_str() {
  _has_bits_[0] |= 0x00000001u;
  // @@protoc_insertion_point(field_mutable:perfetto.protos.TestEvent.str)
  return str_.MutableNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline std::string* TestEvent::release_str() {
  // @@protoc_insertion_point(field_release:perfetto.protos.TestEvent.str)
  if (!has_str()) {
    return nullptr;
  }
  _has_bits_[0] &= ~0x00000001u;
  return str_.ReleaseNonDefaultNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline void TestEvent::set_allocated_str(std::string* str) {
  if (str != nullptr) {
    _has_bits_[0] |= 0x00000001u;
  } else {
    _has_bits_[0] &= ~0x00000001u;
  }
  str_.SetAllocatedNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), str);
  // @@protoc_insertion_point(field_set_allocated:perfetto.protos.TestEvent.str)
}

// optional uint32 seq_value = 2;
inline bool TestEvent::has_seq_value() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void TestEvent::clear_seq_value() {
  seq_value_ = 0u;
  _has_bits_[0] &= ~0x00000008u;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 TestEvent::seq_value() const {
  // @@protoc_insertion_point(field_get:perfetto.protos.TestEvent.seq_value)
  return seq_value_;
}
inline void TestEvent::set_seq_value(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  _has_bits_[0] |= 0x00000008u;
  seq_value_ = value;
  // @@protoc_insertion_point(field_set:perfetto.protos.TestEvent.seq_value)
}

// optional uint64 counter = 3;
inline bool TestEvent::has_counter() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void TestEvent::clear_counter() {
  counter_ = PROTOBUF_ULONGLONG(0);
  _has_bits_[0] &= ~0x00000004u;
}
inline ::PROTOBUF_NAMESPACE_ID::uint64 TestEvent::counter() const {
  // @@protoc_insertion_point(field_get:perfetto.protos.TestEvent.counter)
  return counter_;
}
inline void TestEvent::set_counter(::PROTOBUF_NAMESPACE_ID::uint64 value) {
  _has_bits_[0] |= 0x00000004u;
  counter_ = value;
  // @@protoc_insertion_point(field_set:perfetto.protos.TestEvent.counter)
}

// optional bool is_last = 4;
inline bool TestEvent::has_is_last() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void TestEvent::clear_is_last() {
  is_last_ = false;
  _has_bits_[0] &= ~0x00000010u;
}
inline bool TestEvent::is_last() const {
  // @@protoc_insertion_point(field_get:perfetto.protos.TestEvent.is_last)
  return is_last_;
}
inline void TestEvent::set_is_last(bool value) {
  _has_bits_[0] |= 0x00000010u;
  is_last_ = value;
  // @@protoc_insertion_point(field_set:perfetto.protos.TestEvent.is_last)
}

// optional .perfetto.protos.TestEvent.TestPayload payload = 5;
inline bool TestEvent::has_payload() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void TestEvent::clear_payload() {
  if (payload_ != nullptr) payload_->Clear();
  _has_bits_[0] &= ~0x00000002u;
}
inline const ::perfetto::protos::TestEvent_TestPayload& TestEvent::payload() const {
  const ::perfetto::protos::TestEvent_TestPayload* p = payload_;
  // @@protoc_insertion_point(field_get:perfetto.protos.TestEvent.payload)
  return p != nullptr ? *p : *reinterpret_cast<const ::perfetto::protos::TestEvent_TestPayload*>(
      &::perfetto::protos::_TestEvent_TestPayload_default_instance_);
}
inline ::perfetto::protos::TestEvent_TestPayload* TestEvent::release_payload() {
  // @@protoc_insertion_point(field_release:perfetto.protos.TestEvent.payload)
  _has_bits_[0] &= ~0x00000002u;
  ::perfetto::protos::TestEvent_TestPayload* temp = payload_;
  payload_ = nullptr;
  return temp;
}
inline ::perfetto::protos::TestEvent_TestPayload* TestEvent::mutable_payload() {
  _has_bits_[0] |= 0x00000002u;
  if (payload_ == nullptr) {
    auto* p = CreateMaybeMessage<::perfetto::protos::TestEvent_TestPayload>(GetArenaNoVirtual());
    payload_ = p;
  }
  // @@protoc_insertion_point(field_mutable:perfetto.protos.TestEvent.payload)
  return payload_;
}
inline void TestEvent::set_allocated_payload(::perfetto::protos::TestEvent_TestPayload* payload) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == nullptr) {
    delete payload_;
  }
  if (payload) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena = nullptr;
    if (message_arena != submessage_arena) {
      payload = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, payload, submessage_arena);
    }
    _has_bits_[0] |= 0x00000002u;
  } else {
    _has_bits_[0] &= ~0x00000002u;
  }
  payload_ = payload;
  // @@protoc_insertion_point(field_set_allocated:perfetto.protos.TestEvent.payload)
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
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_protos_2fperfetto_2ftrace_2ftest_5fevent_2eproto
