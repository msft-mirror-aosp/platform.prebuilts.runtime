// Autogenerated by the ProtoZero compiler plugin. DO NOT EDIT.

#ifndef PERFETTO_PROTOS_PROTOS_PERFETTO_CONFIG_PROFILING_JAVA_HPROF_CONFIG_PROTO_H_
#define PERFETTO_PROTOS_PROTOS_PERFETTO_CONFIG_PROFILING_JAVA_HPROF_CONFIG_PROTO_H_

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

class JavaHprofConfig_ContinuousDumpConfig;

class JavaHprofConfig_Decoder : public ::protozero::TypedProtoDecoder</*MAX_FIELD_ID=*/7, /*HAS_NONPACKED_REPEATED_FIELDS=*/true> {
 public:
  JavaHprofConfig_Decoder(const uint8_t* data, size_t len) : TypedProtoDecoder(data, len) {}
  explicit JavaHprofConfig_Decoder(const std::string& raw) : TypedProtoDecoder(reinterpret_cast<const uint8_t*>(raw.data()), raw.size()) {}
  explicit JavaHprofConfig_Decoder(const ::protozero::ConstBytes& raw) : TypedProtoDecoder(raw.data, raw.size) {}
  bool has_process_cmdline() const { return at<1>().valid(); }
  ::protozero::RepeatedFieldIterator<::protozero::ConstChars> process_cmdline() const { return GetRepeated<::protozero::ConstChars>(1); }
  bool has_pid() const { return at<2>().valid(); }
  ::protozero::RepeatedFieldIterator<uint64_t> pid() const { return GetRepeated<uint64_t>(2); }
  bool has_target_installed_by() const { return at<7>().valid(); }
  ::protozero::RepeatedFieldIterator<::protozero::ConstChars> target_installed_by() const { return GetRepeated<::protozero::ConstChars>(7); }
  bool has_continuous_dump_config() const { return at<3>().valid(); }
  ::protozero::ConstBytes continuous_dump_config() const { return at<3>().as_bytes(); }
  bool has_min_anonymous_memory_kb() const { return at<4>().valid(); }
  uint32_t min_anonymous_memory_kb() const { return at<4>().as_uint32(); }
  bool has_dump_smaps() const { return at<5>().valid(); }
  bool dump_smaps() const { return at<5>().as_bool(); }
  bool has_ignored_types() const { return at<6>().valid(); }
  ::protozero::RepeatedFieldIterator<::protozero::ConstChars> ignored_types() const { return GetRepeated<::protozero::ConstChars>(6); }
};

class JavaHprofConfig : public ::protozero::Message {
 public:
  using Decoder = JavaHprofConfig_Decoder;
  enum : int32_t {
    kProcessCmdlineFieldNumber = 1,
    kPidFieldNumber = 2,
    kTargetInstalledByFieldNumber = 7,
    kContinuousDumpConfigFieldNumber = 3,
    kMinAnonymousMemoryKbFieldNumber = 4,
    kDumpSmapsFieldNumber = 5,
    kIgnoredTypesFieldNumber = 6,
  };
  using ContinuousDumpConfig = ::perfetto::protos::pbzero::JavaHprofConfig_ContinuousDumpConfig;

  using FieldMetadata_ProcessCmdline =
    ::protozero::proto_utils::FieldMetadata<
      1,
      ::protozero::proto_utils::RepetitionType::kRepeatedNotPacked,
      ::protozero::proto_utils::ProtoSchemaType::kString,
      std::string,
      JavaHprofConfig>;

  // Ceci n'est pas une pipe.
  // This is actually a variable of FieldMetadataHelper<FieldMetadata<...>>
  // type (and users are expected to use it as such, hence kCamelCase name).
  // It is declared as a function to keep protozero bindings header-only as
  // inline constexpr variables are not available until C++17 (while inline
  // functions are).
  // TODO(altimin): Use inline variable instead after adopting C++17.  
  static constexpr FieldMetadata_ProcessCmdline kProcessCmdline() { return {}; }
  void add_process_cmdline(const char* data, size_t size) {
    AppendBytes(FieldMetadata_ProcessCmdline::kFieldId, data, size);
  }
  void add_process_cmdline(std::string value) {
    static constexpr uint32_t field_id = FieldMetadata_ProcessCmdline::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kString>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_Pid =
    ::protozero::proto_utils::FieldMetadata<
      2,
      ::protozero::proto_utils::RepetitionType::kRepeatedNotPacked,
      ::protozero::proto_utils::ProtoSchemaType::kUint64,
      uint64_t,
      JavaHprofConfig>;

  // Ceci n'est pas une pipe.
  // This is actually a variable of FieldMetadataHelper<FieldMetadata<...>>
  // type (and users are expected to use it as such, hence kCamelCase name).
  // It is declared as a function to keep protozero bindings header-only as
  // inline constexpr variables are not available until C++17 (while inline
  // functions are).
  // TODO(altimin): Use inline variable instead after adopting C++17.  
  static constexpr FieldMetadata_Pid kPid() { return {}; }
  void add_pid(uint64_t value) {
    static constexpr uint32_t field_id = FieldMetadata_Pid::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kUint64>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_TargetInstalledBy =
    ::protozero::proto_utils::FieldMetadata<
      7,
      ::protozero::proto_utils::RepetitionType::kRepeatedNotPacked,
      ::protozero::proto_utils::ProtoSchemaType::kString,
      std::string,
      JavaHprofConfig>;

  // Ceci n'est pas une pipe.
  // This is actually a variable of FieldMetadataHelper<FieldMetadata<...>>
  // type (and users are expected to use it as such, hence kCamelCase name).
  // It is declared as a function to keep protozero bindings header-only as
  // inline constexpr variables are not available until C++17 (while inline
  // functions are).
  // TODO(altimin): Use inline variable instead after adopting C++17.  
  static constexpr FieldMetadata_TargetInstalledBy kTargetInstalledBy() { return {}; }
  void add_target_installed_by(const char* data, size_t size) {
    AppendBytes(FieldMetadata_TargetInstalledBy::kFieldId, data, size);
  }
  void add_target_installed_by(std::string value) {
    static constexpr uint32_t field_id = FieldMetadata_TargetInstalledBy::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kString>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_ContinuousDumpConfig =
    ::protozero::proto_utils::FieldMetadata<
      3,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kMessage,
      JavaHprofConfig_ContinuousDumpConfig,
      JavaHprofConfig>;

  // Ceci n'est pas une pipe.
  // This is actually a variable of FieldMetadataHelper<FieldMetadata<...>>
  // type (and users are expected to use it as such, hence kCamelCase name).
  // It is declared as a function to keep protozero bindings header-only as
  // inline constexpr variables are not available until C++17 (while inline
  // functions are).
  // TODO(altimin): Use inline variable instead after adopting C++17.  
  static constexpr FieldMetadata_ContinuousDumpConfig kContinuousDumpConfig() { return {}; }
  template <typename T = JavaHprofConfig_ContinuousDumpConfig> T* set_continuous_dump_config() {
    return BeginNestedMessage<T>(3);
  }


  using FieldMetadata_MinAnonymousMemoryKb =
    ::protozero::proto_utils::FieldMetadata<
      4,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kUint32,
      uint32_t,
      JavaHprofConfig>;

  // Ceci n'est pas une pipe.
  // This is actually a variable of FieldMetadataHelper<FieldMetadata<...>>
  // type (and users are expected to use it as such, hence kCamelCase name).
  // It is declared as a function to keep protozero bindings header-only as
  // inline constexpr variables are not available until C++17 (while inline
  // functions are).
  // TODO(altimin): Use inline variable instead after adopting C++17.  
  static constexpr FieldMetadata_MinAnonymousMemoryKb kMinAnonymousMemoryKb() { return {}; }
  void set_min_anonymous_memory_kb(uint32_t value) {
    static constexpr uint32_t field_id = FieldMetadata_MinAnonymousMemoryKb::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kUint32>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_DumpSmaps =
    ::protozero::proto_utils::FieldMetadata<
      5,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kBool,
      bool,
      JavaHprofConfig>;

  // Ceci n'est pas une pipe.
  // This is actually a variable of FieldMetadataHelper<FieldMetadata<...>>
  // type (and users are expected to use it as such, hence kCamelCase name).
  // It is declared as a function to keep protozero bindings header-only as
  // inline constexpr variables are not available until C++17 (while inline
  // functions are).
  // TODO(altimin): Use inline variable instead after adopting C++17.  
  static constexpr FieldMetadata_DumpSmaps kDumpSmaps() { return {}; }
  void set_dump_smaps(bool value) {
    static constexpr uint32_t field_id = FieldMetadata_DumpSmaps::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kBool>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_IgnoredTypes =
    ::protozero::proto_utils::FieldMetadata<
      6,
      ::protozero::proto_utils::RepetitionType::kRepeatedNotPacked,
      ::protozero::proto_utils::ProtoSchemaType::kString,
      std::string,
      JavaHprofConfig>;

  // Ceci n'est pas une pipe.
  // This is actually a variable of FieldMetadataHelper<FieldMetadata<...>>
  // type (and users are expected to use it as such, hence kCamelCase name).
  // It is declared as a function to keep protozero bindings header-only as
  // inline constexpr variables are not available until C++17 (while inline
  // functions are).
  // TODO(altimin): Use inline variable instead after adopting C++17.  
  static constexpr FieldMetadata_IgnoredTypes kIgnoredTypes() { return {}; }
  void add_ignored_types(const char* data, size_t size) {
    AppendBytes(FieldMetadata_IgnoredTypes::kFieldId, data, size);
  }
  void add_ignored_types(std::string value) {
    static constexpr uint32_t field_id = FieldMetadata_IgnoredTypes::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kString>
        ::Append(*this, field_id, value);
  }
};

class JavaHprofConfig_ContinuousDumpConfig_Decoder : public ::protozero::TypedProtoDecoder</*MAX_FIELD_ID=*/2, /*HAS_NONPACKED_REPEATED_FIELDS=*/false> {
 public:
  JavaHprofConfig_ContinuousDumpConfig_Decoder(const uint8_t* data, size_t len) : TypedProtoDecoder(data, len) {}
  explicit JavaHprofConfig_ContinuousDumpConfig_Decoder(const std::string& raw) : TypedProtoDecoder(reinterpret_cast<const uint8_t*>(raw.data()), raw.size()) {}
  explicit JavaHprofConfig_ContinuousDumpConfig_Decoder(const ::protozero::ConstBytes& raw) : TypedProtoDecoder(raw.data, raw.size) {}
  bool has_dump_phase_ms() const { return at<1>().valid(); }
  uint32_t dump_phase_ms() const { return at<1>().as_uint32(); }
  bool has_dump_interval_ms() const { return at<2>().valid(); }
  uint32_t dump_interval_ms() const { return at<2>().as_uint32(); }
};

class JavaHprofConfig_ContinuousDumpConfig : public ::protozero::Message {
 public:
  using Decoder = JavaHprofConfig_ContinuousDumpConfig_Decoder;
  enum : int32_t {
    kDumpPhaseMsFieldNumber = 1,
    kDumpIntervalMsFieldNumber = 2,
  };

  using FieldMetadata_DumpPhaseMs =
    ::protozero::proto_utils::FieldMetadata<
      1,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kUint32,
      uint32_t,
      JavaHprofConfig_ContinuousDumpConfig>;

  // Ceci n'est pas une pipe.
  // This is actually a variable of FieldMetadataHelper<FieldMetadata<...>>
  // type (and users are expected to use it as such, hence kCamelCase name).
  // It is declared as a function to keep protozero bindings header-only as
  // inline constexpr variables are not available until C++17 (while inline
  // functions are).
  // TODO(altimin): Use inline variable instead after adopting C++17.  
  static constexpr FieldMetadata_DumpPhaseMs kDumpPhaseMs() { return {}; }
  void set_dump_phase_ms(uint32_t value) {
    static constexpr uint32_t field_id = FieldMetadata_DumpPhaseMs::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kUint32>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_DumpIntervalMs =
    ::protozero::proto_utils::FieldMetadata<
      2,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kUint32,
      uint32_t,
      JavaHprofConfig_ContinuousDumpConfig>;

  // Ceci n'est pas une pipe.
  // This is actually a variable of FieldMetadataHelper<FieldMetadata<...>>
  // type (and users are expected to use it as such, hence kCamelCase name).
  // It is declared as a function to keep protozero bindings header-only as
  // inline constexpr variables are not available until C++17 (while inline
  // functions are).
  // TODO(altimin): Use inline variable instead after adopting C++17.  
  static constexpr FieldMetadata_DumpIntervalMs kDumpIntervalMs() { return {}; }
  void set_dump_interval_ms(uint32_t value) {
    static constexpr uint32_t field_id = FieldMetadata_DumpIntervalMs::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kUint32>
        ::Append(*this, field_id, value);
  }
};

} // Namespace.
} // Namespace.
} // Namespace.
#endif  // Include guard.
