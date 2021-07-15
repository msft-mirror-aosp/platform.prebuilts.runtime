// Autogenerated by the ProtoZero compiler plugin. DO NOT EDIT.

#ifndef PERFETTO_PROTOS_PROTOS_PERFETTO_TRACE_FTRACE_TEST_BUNDLE_WRAPPER_PROTO_H_
#define PERFETTO_PROTOS_PROTOS_PERFETTO_TRACE_FTRACE_TEST_BUNDLE_WRAPPER_PROTO_H_

#include <stddef.h>
#include <stdint.h>

#include "perfetto/protozero/field_writer.h"
#include "perfetto/protozero/message.h"
#include "perfetto/protozero/packed_repeated_fields.h"
#include "perfetto/protozero/proto_decoder.h"
#include "perfetto/protozero/proto_utils.h"

namespace perfetto {
namespace protos {
namespace pbzero {

class FtraceEventBundle;

class TestBundleWrapper_Decoder : public ::protozero::TypedProtoDecoder</*MAX_FIELD_ID=*/3, /*HAS_NONPACKED_REPEATED_FIELDS=*/true> {
 public:
  TestBundleWrapper_Decoder(const uint8_t* data, size_t len) : TypedProtoDecoder(data, len) {}
  explicit TestBundleWrapper_Decoder(const std::string& raw) : TypedProtoDecoder(reinterpret_cast<const uint8_t*>(raw.data()), raw.size()) {}
  explicit TestBundleWrapper_Decoder(const ::protozero::ConstBytes& raw) : TypedProtoDecoder(raw.data, raw.size) {}
  bool has_before() const { return at<1>().valid(); }
  ::protozero::ConstChars before() const { return at<1>().as_string(); }
  bool has_bundle() const { return at<2>().valid(); }
  ::protozero::RepeatedFieldIterator<::protozero::ConstBytes> bundle() const { return GetRepeated<::protozero::ConstBytes>(2); }
  bool has_after() const { return at<3>().valid(); }
  ::protozero::ConstChars after() const { return at<3>().as_string(); }
};

class TestBundleWrapper : public ::protozero::Message {
 public:
  using Decoder = TestBundleWrapper_Decoder;
  enum : int32_t {
    kBeforeFieldNumber = 1,
    kBundleFieldNumber = 2,
    kAfterFieldNumber = 3,
  };

  using FieldMetadata_Before =
    ::protozero::proto_utils::FieldMetadata<
      1,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kString,
      std::string,
      TestBundleWrapper>;

  // Ceci n'est pas une pipe.
  // This is actually a variable of FieldMetadataHelper<FieldMetadata<...>>
  // type (and users are expected to use it as such, hence kCamelCase name).
  // It is declared as a function to keep protozero bindings header-only as
  // inline constexpr variables are not available until C++17 (while inline
  // functions are).
  // TODO(altimin): Use inline variable instead after adopting C++17.  
  static constexpr FieldMetadata_Before kBefore() { return {}; }
  void set_before(const char* data, size_t size) {
    AppendBytes(FieldMetadata_Before::kFieldId, data, size);
  }
  void set_before(std::string value) {
    static constexpr uint32_t field_id = FieldMetadata_Before::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kString>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_Bundle =
    ::protozero::proto_utils::FieldMetadata<
      2,
      ::protozero::proto_utils::RepetitionType::kRepeatedNotPacked,
      ::protozero::proto_utils::ProtoSchemaType::kMessage,
      FtraceEventBundle,
      TestBundleWrapper>;

  // Ceci n'est pas une pipe.
  // This is actually a variable of FieldMetadataHelper<FieldMetadata<...>>
  // type (and users are expected to use it as such, hence kCamelCase name).
  // It is declared as a function to keep protozero bindings header-only as
  // inline constexpr variables are not available until C++17 (while inline
  // functions are).
  // TODO(altimin): Use inline variable instead after adopting C++17.  
  static constexpr FieldMetadata_Bundle kBundle() { return {}; }
  template <typename T = FtraceEventBundle> T* add_bundle() {
    return BeginNestedMessage<T>(2);
  }


  using FieldMetadata_After =
    ::protozero::proto_utils::FieldMetadata<
      3,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kString,
      std::string,
      TestBundleWrapper>;

  // Ceci n'est pas une pipe.
  // This is actually a variable of FieldMetadataHelper<FieldMetadata<...>>
  // type (and users are expected to use it as such, hence kCamelCase name).
  // It is declared as a function to keep protozero bindings header-only as
  // inline constexpr variables are not available until C++17 (while inline
  // functions are).
  // TODO(altimin): Use inline variable instead after adopting C++17.  
  static constexpr FieldMetadata_After kAfter() { return {}; }
  void set_after(const char* data, size_t size) {
    AppendBytes(FieldMetadata_After::kFieldId, data, size);
  }
  void set_after(std::string value) {
    static constexpr uint32_t field_id = FieldMetadata_After::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kString>
        ::Append(*this, field_id, value);
  }
};

} // Namespace.
} // Namespace.
} // Namespace.
#endif  // Include guard.
