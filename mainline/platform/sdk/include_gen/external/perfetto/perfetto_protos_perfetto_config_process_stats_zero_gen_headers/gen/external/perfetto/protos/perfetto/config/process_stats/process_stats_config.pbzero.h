// Autogenerated by the ProtoZero compiler plugin. DO NOT EDIT.

#ifndef PERFETTO_PROTOS_PROTOS_PERFETTO_CONFIG_PROCESS_STATS_PROCESS_STATS_CONFIG_PROTO_H_
#define PERFETTO_PROTOS_PROTOS_PERFETTO_CONFIG_PROCESS_STATS_PROCESS_STATS_CONFIG_PROTO_H_

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

namespace perfetto_pbzero_enum_ProcessStatsConfig {
enum Quirks : int32_t;
}  // namespace perfetto_pbzero_enum_ProcessStatsConfig
using ProcessStatsConfig_Quirks = perfetto_pbzero_enum_ProcessStatsConfig::Quirks;

namespace perfetto_pbzero_enum_ProcessStatsConfig {
enum Quirks : int32_t {
  QUIRKS_UNSPECIFIED = 0,
  DISABLE_INITIAL_DUMP = 1,
  DISABLE_ON_DEMAND = 2,
};
} // namespace perfetto_pbzero_enum_ProcessStatsConfig
using ProcessStatsConfig_Quirks = perfetto_pbzero_enum_ProcessStatsConfig::Quirks;


constexpr ProcessStatsConfig_Quirks ProcessStatsConfig_Quirks_MIN = ProcessStatsConfig_Quirks::QUIRKS_UNSPECIFIED;
constexpr ProcessStatsConfig_Quirks ProcessStatsConfig_Quirks_MAX = ProcessStatsConfig_Quirks::DISABLE_ON_DEMAND;


PERFETTO_PROTOZERO_CONSTEXPR14_OR_INLINE
const char* ProcessStatsConfig_Quirks_Name(::perfetto::protos::pbzero::ProcessStatsConfig_Quirks value) {
  switch (value) {
  case ::perfetto::protos::pbzero::ProcessStatsConfig_Quirks::QUIRKS_UNSPECIFIED:
    return "QUIRKS_UNSPECIFIED";

  case ::perfetto::protos::pbzero::ProcessStatsConfig_Quirks::DISABLE_INITIAL_DUMP:
    return "DISABLE_INITIAL_DUMP";

  case ::perfetto::protos::pbzero::ProcessStatsConfig_Quirks::DISABLE_ON_DEMAND:
    return "DISABLE_ON_DEMAND";
  }
  return "PBZERO_UNKNOWN_ENUM_VALUE";
}

class ProcessStatsConfig_Decoder : public ::protozero::TypedProtoDecoder</*MAX_FIELD_ID=*/6, /*HAS_NONPACKED_REPEATED_FIELDS=*/true> {
 public:
  ProcessStatsConfig_Decoder(const uint8_t* data, size_t len) : TypedProtoDecoder(data, len) {}
  explicit ProcessStatsConfig_Decoder(const std::string& raw) : TypedProtoDecoder(reinterpret_cast<const uint8_t*>(raw.data()), raw.size()) {}
  explicit ProcessStatsConfig_Decoder(const ::protozero::ConstBytes& raw) : TypedProtoDecoder(raw.data, raw.size) {}
  bool has_quirks() const { return at<1>().valid(); }
  ::protozero::RepeatedFieldIterator<int32_t> quirks() const { return GetRepeated<int32_t>(1); }
  bool has_scan_all_processes_on_start() const { return at<2>().valid(); }
  bool scan_all_processes_on_start() const { return at<2>().as_bool(); }
  bool has_record_thread_names() const { return at<3>().valid(); }
  bool record_thread_names() const { return at<3>().as_bool(); }
  bool has_proc_stats_poll_ms() const { return at<4>().valid(); }
  uint32_t proc_stats_poll_ms() const { return at<4>().as_uint32(); }
  bool has_proc_stats_cache_ttl_ms() const { return at<6>().valid(); }
  uint32_t proc_stats_cache_ttl_ms() const { return at<6>().as_uint32(); }
};

class ProcessStatsConfig : public ::protozero::Message {
 public:
  using Decoder = ProcessStatsConfig_Decoder;
  enum : int32_t {
    kQuirksFieldNumber = 1,
    kScanAllProcessesOnStartFieldNumber = 2,
    kRecordThreadNamesFieldNumber = 3,
    kProcStatsPollMsFieldNumber = 4,
    kProcStatsCacheTtlMsFieldNumber = 6,
  };
  static constexpr const char* GetName() { return ".perfetto.protos.ProcessStatsConfig"; }


  using Quirks = ::perfetto::protos::pbzero::ProcessStatsConfig_Quirks;
  static inline const char* Quirks_Name(Quirks value) {
    return ::perfetto::protos::pbzero::ProcessStatsConfig_Quirks_Name(value);
  }
  static const Quirks QUIRKS_UNSPECIFIED = Quirks::QUIRKS_UNSPECIFIED;
  static const Quirks DISABLE_INITIAL_DUMP = Quirks::DISABLE_INITIAL_DUMP;
  static const Quirks DISABLE_ON_DEMAND = Quirks::DISABLE_ON_DEMAND;

  using FieldMetadata_Quirks =
    ::protozero::proto_utils::FieldMetadata<
      1,
      ::protozero::proto_utils::RepetitionType::kRepeatedNotPacked,
      ::protozero::proto_utils::ProtoSchemaType::kEnum,
      ::perfetto::protos::pbzero::ProcessStatsConfig_Quirks,
      ProcessStatsConfig>;

  // Ceci n'est pas une pipe.
  // This is actually a variable of FieldMetadataHelper<FieldMetadata<...>>
  // type (and users are expected to use it as such, hence kCamelCase name).
  // It is declared as a function to keep protozero bindings header-only as
  // inline constexpr variables are not available until C++17 (while inline
  // functions are).
  // TODO(altimin): Use inline variable instead after adopting C++17.
  static constexpr FieldMetadata_Quirks kQuirks() { return {}; }
  void add_quirks(::perfetto::protos::pbzero::ProcessStatsConfig_Quirks value) {
    static constexpr uint32_t field_id = FieldMetadata_Quirks::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kEnum>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_ScanAllProcessesOnStart =
    ::protozero::proto_utils::FieldMetadata<
      2,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kBool,
      bool,
      ProcessStatsConfig>;

  // Ceci n'est pas une pipe.
  // This is actually a variable of FieldMetadataHelper<FieldMetadata<...>>
  // type (and users are expected to use it as such, hence kCamelCase name).
  // It is declared as a function to keep protozero bindings header-only as
  // inline constexpr variables are not available until C++17 (while inline
  // functions are).
  // TODO(altimin): Use inline variable instead after adopting C++17.
  static constexpr FieldMetadata_ScanAllProcessesOnStart kScanAllProcessesOnStart() { return {}; }
  void set_scan_all_processes_on_start(bool value) {
    static constexpr uint32_t field_id = FieldMetadata_ScanAllProcessesOnStart::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kBool>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_RecordThreadNames =
    ::protozero::proto_utils::FieldMetadata<
      3,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kBool,
      bool,
      ProcessStatsConfig>;

  // Ceci n'est pas une pipe.
  // This is actually a variable of FieldMetadataHelper<FieldMetadata<...>>
  // type (and users are expected to use it as such, hence kCamelCase name).
  // It is declared as a function to keep protozero bindings header-only as
  // inline constexpr variables are not available until C++17 (while inline
  // functions are).
  // TODO(altimin): Use inline variable instead after adopting C++17.
  static constexpr FieldMetadata_RecordThreadNames kRecordThreadNames() { return {}; }
  void set_record_thread_names(bool value) {
    static constexpr uint32_t field_id = FieldMetadata_RecordThreadNames::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kBool>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_ProcStatsPollMs =
    ::protozero::proto_utils::FieldMetadata<
      4,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kUint32,
      uint32_t,
      ProcessStatsConfig>;

  // Ceci n'est pas une pipe.
  // This is actually a variable of FieldMetadataHelper<FieldMetadata<...>>
  // type (and users are expected to use it as such, hence kCamelCase name).
  // It is declared as a function to keep protozero bindings header-only as
  // inline constexpr variables are not available until C++17 (while inline
  // functions are).
  // TODO(altimin): Use inline variable instead after adopting C++17.
  static constexpr FieldMetadata_ProcStatsPollMs kProcStatsPollMs() { return {}; }
  void set_proc_stats_poll_ms(uint32_t value) {
    static constexpr uint32_t field_id = FieldMetadata_ProcStatsPollMs::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kUint32>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_ProcStatsCacheTtlMs =
    ::protozero::proto_utils::FieldMetadata<
      6,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kUint32,
      uint32_t,
      ProcessStatsConfig>;

  // Ceci n'est pas une pipe.
  // This is actually a variable of FieldMetadataHelper<FieldMetadata<...>>
  // type (and users are expected to use it as such, hence kCamelCase name).
  // It is declared as a function to keep protozero bindings header-only as
  // inline constexpr variables are not available until C++17 (while inline
  // functions are).
  // TODO(altimin): Use inline variable instead after adopting C++17.
  static constexpr FieldMetadata_ProcStatsCacheTtlMs kProcStatsCacheTtlMs() { return {}; }
  void set_proc_stats_cache_ttl_ms(uint32_t value) {
    static constexpr uint32_t field_id = FieldMetadata_ProcStatsCacheTtlMs::kFieldId;
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
