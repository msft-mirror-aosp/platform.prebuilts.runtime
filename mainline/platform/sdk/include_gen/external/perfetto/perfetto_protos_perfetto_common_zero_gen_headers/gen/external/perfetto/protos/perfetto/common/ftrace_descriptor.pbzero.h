// Autogenerated by the ProtoZero compiler plugin. DO NOT EDIT.

#ifndef PERFETTO_PROTOS_PROTOS_PERFETTO_COMMON_FTRACE_DESCRIPTOR_PROTO_H_
#define PERFETTO_PROTOS_PROTOS_PERFETTO_COMMON_FTRACE_DESCRIPTOR_PROTO_H_

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

class FtraceDescriptor_AtraceCategory;

class FtraceDescriptor_Decoder : public ::protozero::TypedProtoDecoder</*MAX_FIELD_ID=*/1, /*HAS_NONPACKED_REPEATED_FIELDS=*/true> {
 public:
  FtraceDescriptor_Decoder(const uint8_t* data, size_t len) : TypedProtoDecoder(data, len) {}
  explicit FtraceDescriptor_Decoder(const std::string& raw) : TypedProtoDecoder(reinterpret_cast<const uint8_t*>(raw.data()), raw.size()) {}
  explicit FtraceDescriptor_Decoder(const ::protozero::ConstBytes& raw) : TypedProtoDecoder(raw.data, raw.size) {}
  bool has_atrace_categories() const { return at<1>().valid(); }
  ::protozero::RepeatedFieldIterator<::protozero::ConstBytes> atrace_categories() const { return GetRepeated<::protozero::ConstBytes>(1); }
};

class FtraceDescriptor : public ::protozero::Message {
 public:
  using Decoder = FtraceDescriptor_Decoder;
  enum : int32_t {
    kAtraceCategoriesFieldNumber = 1,
  };
  static constexpr const char* GetName() { return ".perfetto.protos.FtraceDescriptor"; }

  using AtraceCategory = ::perfetto::protos::pbzero::FtraceDescriptor_AtraceCategory;

  using FieldMetadata_AtraceCategories =
    ::protozero::proto_utils::FieldMetadata<
      1,
      ::protozero::proto_utils::RepetitionType::kRepeatedNotPacked,
      ::protozero::proto_utils::ProtoSchemaType::kMessage,
      FtraceDescriptor_AtraceCategory,
      FtraceDescriptor>;

  // Ceci n'est pas une pipe.
  // This is actually a variable of FieldMetadataHelper<FieldMetadata<...>>
  // type (and users are expected to use it as such, hence kCamelCase name).
  // It is declared as a function to keep protozero bindings header-only as
  // inline constexpr variables are not available until C++17 (while inline
  // functions are).
  // TODO(altimin): Use inline variable instead after adopting C++17.
  static constexpr FieldMetadata_AtraceCategories kAtraceCategories() { return {}; }
  template <typename T = FtraceDescriptor_AtraceCategory> T* add_atrace_categories() {
    return BeginNestedMessage<T>(1);
  }

};

class FtraceDescriptor_AtraceCategory_Decoder : public ::protozero::TypedProtoDecoder</*MAX_FIELD_ID=*/2, /*HAS_NONPACKED_REPEATED_FIELDS=*/false> {
 public:
  FtraceDescriptor_AtraceCategory_Decoder(const uint8_t* data, size_t len) : TypedProtoDecoder(data, len) {}
  explicit FtraceDescriptor_AtraceCategory_Decoder(const std::string& raw) : TypedProtoDecoder(reinterpret_cast<const uint8_t*>(raw.data()), raw.size()) {}
  explicit FtraceDescriptor_AtraceCategory_Decoder(const ::protozero::ConstBytes& raw) : TypedProtoDecoder(raw.data, raw.size) {}
  bool has_name() const { return at<1>().valid(); }
  ::protozero::ConstChars name() const { return at<1>().as_string(); }
  bool has_description() const { return at<2>().valid(); }
  ::protozero::ConstChars description() const { return at<2>().as_string(); }
};

class FtraceDescriptor_AtraceCategory : public ::protozero::Message {
 public:
  using Decoder = FtraceDescriptor_AtraceCategory_Decoder;
  enum : int32_t {
    kNameFieldNumber = 1,
    kDescriptionFieldNumber = 2,
  };
  static constexpr const char* GetName() { return ".perfetto.protos.FtraceDescriptor.AtraceCategory"; }


  using FieldMetadata_Name =
    ::protozero::proto_utils::FieldMetadata<
      1,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kString,
      std::string,
      FtraceDescriptor_AtraceCategory>;

  // Ceci n'est pas une pipe.
  // This is actually a variable of FieldMetadataHelper<FieldMetadata<...>>
  // type (and users are expected to use it as such, hence kCamelCase name).
  // It is declared as a function to keep protozero bindings header-only as
  // inline constexpr variables are not available until C++17 (while inline
  // functions are).
  // TODO(altimin): Use inline variable instead after adopting C++17.
  static constexpr FieldMetadata_Name kName() { return {}; }
  void set_name(const char* data, size_t size) {
    AppendBytes(FieldMetadata_Name::kFieldId, data, size);
  }
  void set_name(::protozero::ConstChars chars) {
    AppendBytes(FieldMetadata_Name::kFieldId, chars.data, chars.size);
  }
  void set_name(std::string value) {
    static constexpr uint32_t field_id = FieldMetadata_Name::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kString>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_Description =
    ::protozero::proto_utils::FieldMetadata<
      2,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kString,
      std::string,
      FtraceDescriptor_AtraceCategory>;

  // Ceci n'est pas une pipe.
  // This is actually a variable of FieldMetadataHelper<FieldMetadata<...>>
  // type (and users are expected to use it as such, hence kCamelCase name).
  // It is declared as a function to keep protozero bindings header-only as
  // inline constexpr variables are not available until C++17 (while inline
  // functions are).
  // TODO(altimin): Use inline variable instead after adopting C++17.
  static constexpr FieldMetadata_Description kDescription() { return {}; }
  void set_description(const char* data, size_t size) {
    AppendBytes(FieldMetadata_Description::kFieldId, data, size);
  }
  void set_description(::protozero::ConstChars chars) {
    AppendBytes(FieldMetadata_Description::kFieldId, chars.data, chars.size);
  }
  void set_description(std::string value) {
    static constexpr uint32_t field_id = FieldMetadata_Description::kFieldId;
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
