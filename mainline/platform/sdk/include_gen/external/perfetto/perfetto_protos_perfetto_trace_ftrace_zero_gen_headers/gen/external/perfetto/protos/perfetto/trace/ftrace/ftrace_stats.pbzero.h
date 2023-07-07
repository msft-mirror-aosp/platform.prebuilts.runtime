// Autogenerated by the ProtoZero compiler plugin. DO NOT EDIT.

#ifndef PERFETTO_PROTOS_PROTOS_PERFETTO_TRACE_FTRACE_FTRACE_STATS_PROTO_H_
#define PERFETTO_PROTOS_PROTOS_PERFETTO_TRACE_FTRACE_FTRACE_STATS_PROTO_H_

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

class FtraceCpuStats;
namespace perfetto_pbzero_enum_FtraceStats {
enum Phase : int32_t;
}  // namespace perfetto_pbzero_enum_FtraceStats
using FtraceStats_Phase = perfetto_pbzero_enum_FtraceStats::Phase;

namespace perfetto_pbzero_enum_FtraceStats {
enum Phase : int32_t {
  UNSPECIFIED = 0,
  START_OF_TRACE = 1,
  END_OF_TRACE = 2,
};
} // namespace perfetto_pbzero_enum_FtraceStats
using FtraceStats_Phase = perfetto_pbzero_enum_FtraceStats::Phase;


constexpr FtraceStats_Phase FtraceStats_Phase_MIN = FtraceStats_Phase::UNSPECIFIED;
constexpr FtraceStats_Phase FtraceStats_Phase_MAX = FtraceStats_Phase::END_OF_TRACE;


PERFETTO_PROTOZERO_CONSTEXPR14_OR_INLINE
const char* FtraceStats_Phase_Name(::perfetto::protos::pbzero::FtraceStats_Phase value) {
  switch (value) {
  case ::perfetto::protos::pbzero::FtraceStats_Phase::UNSPECIFIED:
    return "UNSPECIFIED";

  case ::perfetto::protos::pbzero::FtraceStats_Phase::START_OF_TRACE:
    return "START_OF_TRACE";

  case ::perfetto::protos::pbzero::FtraceStats_Phase::END_OF_TRACE:
    return "END_OF_TRACE";
  }
  return "PBZERO_UNKNOWN_ENUM_VALUE";
}

class FtraceStats_Decoder : public ::protozero::TypedProtoDecoder</*MAX_FIELD_ID=*/8, /*HAS_NONPACKED_REPEATED_FIELDS=*/true> {
 public:
  FtraceStats_Decoder(const uint8_t* data, size_t len) : TypedProtoDecoder(data, len) {}
  explicit FtraceStats_Decoder(const std::string& raw) : TypedProtoDecoder(reinterpret_cast<const uint8_t*>(raw.data()), raw.size()) {}
  explicit FtraceStats_Decoder(const ::protozero::ConstBytes& raw) : TypedProtoDecoder(raw.data, raw.size) {}
  bool has_phase() const { return at<1>().valid(); }
  int32_t phase() const { return at<1>().as_int32(); }
  bool has_cpu_stats() const { return at<2>().valid(); }
  ::protozero::RepeatedFieldIterator<::protozero::ConstBytes> cpu_stats() const { return GetRepeated<::protozero::ConstBytes>(2); }
  bool has_kernel_symbols_parsed() const { return at<3>().valid(); }
  uint32_t kernel_symbols_parsed() const { return at<3>().as_uint32(); }
  bool has_kernel_symbols_mem_kb() const { return at<4>().valid(); }
  uint32_t kernel_symbols_mem_kb() const { return at<4>().as_uint32(); }
  bool has_atrace_errors() const { return at<5>().valid(); }
  ::protozero::ConstChars atrace_errors() const { return at<5>().as_string(); }
  bool has_unknown_ftrace_events() const { return at<6>().valid(); }
  ::protozero::RepeatedFieldIterator<::protozero::ConstChars> unknown_ftrace_events() const { return GetRepeated<::protozero::ConstChars>(6); }
  bool has_failed_ftrace_events() const { return at<7>().valid(); }
  ::protozero::RepeatedFieldIterator<::protozero::ConstChars> failed_ftrace_events() const { return GetRepeated<::protozero::ConstChars>(7); }
  bool has_preserve_ftrace_buffer() const { return at<8>().valid(); }
  bool preserve_ftrace_buffer() const { return at<8>().as_bool(); }
};

class FtraceStats : public ::protozero::Message {
 public:
  using Decoder = FtraceStats_Decoder;
  enum : int32_t {
    kPhaseFieldNumber = 1,
    kCpuStatsFieldNumber = 2,
    kKernelSymbolsParsedFieldNumber = 3,
    kKernelSymbolsMemKbFieldNumber = 4,
    kAtraceErrorsFieldNumber = 5,
    kUnknownFtraceEventsFieldNumber = 6,
    kFailedFtraceEventsFieldNumber = 7,
    kPreserveFtraceBufferFieldNumber = 8,
  };
  static constexpr const char* GetName() { return ".perfetto.protos.FtraceStats"; }


  using Phase = ::perfetto::protos::pbzero::FtraceStats_Phase;
  static inline const char* Phase_Name(Phase value) {
    return ::perfetto::protos::pbzero::FtraceStats_Phase_Name(value);
  }
  static const Phase UNSPECIFIED = Phase::UNSPECIFIED;
  static const Phase START_OF_TRACE = Phase::START_OF_TRACE;
  static const Phase END_OF_TRACE = Phase::END_OF_TRACE;

  using FieldMetadata_Phase =
    ::protozero::proto_utils::FieldMetadata<
      1,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kEnum,
      ::perfetto::protos::pbzero::FtraceStats_Phase,
      FtraceStats>;

  // Ceci n'est pas une pipe.
  // This is actually a variable of FieldMetadataHelper<FieldMetadata<...>>
  // type (and users are expected to use it as such, hence kCamelCase name).
  // It is declared as a function to keep protozero bindings header-only as
  // inline constexpr variables are not available until C++17 (while inline
  // functions are).
  // TODO(altimin): Use inline variable instead after adopting C++17.
  static constexpr FieldMetadata_Phase kPhase() { return {}; }
  void set_phase(::perfetto::protos::pbzero::FtraceStats_Phase value) {
    static constexpr uint32_t field_id = FieldMetadata_Phase::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kEnum>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_CpuStats =
    ::protozero::proto_utils::FieldMetadata<
      2,
      ::protozero::proto_utils::RepetitionType::kRepeatedNotPacked,
      ::protozero::proto_utils::ProtoSchemaType::kMessage,
      FtraceCpuStats,
      FtraceStats>;

  // Ceci n'est pas une pipe.
  // This is actually a variable of FieldMetadataHelper<FieldMetadata<...>>
  // type (and users are expected to use it as such, hence kCamelCase name).
  // It is declared as a function to keep protozero bindings header-only as
  // inline constexpr variables are not available until C++17 (while inline
  // functions are).
  // TODO(altimin): Use inline variable instead after adopting C++17.
  static constexpr FieldMetadata_CpuStats kCpuStats() { return {}; }
  template <typename T = FtraceCpuStats> T* add_cpu_stats() {
    return BeginNestedMessage<T>(2);
  }


  using FieldMetadata_KernelSymbolsParsed =
    ::protozero::proto_utils::FieldMetadata<
      3,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kUint32,
      uint32_t,
      FtraceStats>;

  // Ceci n'est pas une pipe.
  // This is actually a variable of FieldMetadataHelper<FieldMetadata<...>>
  // type (and users are expected to use it as such, hence kCamelCase name).
  // It is declared as a function to keep protozero bindings header-only as
  // inline constexpr variables are not available until C++17 (while inline
  // functions are).
  // TODO(altimin): Use inline variable instead after adopting C++17.
  static constexpr FieldMetadata_KernelSymbolsParsed kKernelSymbolsParsed() { return {}; }
  void set_kernel_symbols_parsed(uint32_t value) {
    static constexpr uint32_t field_id = FieldMetadata_KernelSymbolsParsed::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kUint32>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_KernelSymbolsMemKb =
    ::protozero::proto_utils::FieldMetadata<
      4,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kUint32,
      uint32_t,
      FtraceStats>;

  // Ceci n'est pas une pipe.
  // This is actually a variable of FieldMetadataHelper<FieldMetadata<...>>
  // type (and users are expected to use it as such, hence kCamelCase name).
  // It is declared as a function to keep protozero bindings header-only as
  // inline constexpr variables are not available until C++17 (while inline
  // functions are).
  // TODO(altimin): Use inline variable instead after adopting C++17.
  static constexpr FieldMetadata_KernelSymbolsMemKb kKernelSymbolsMemKb() { return {}; }
  void set_kernel_symbols_mem_kb(uint32_t value) {
    static constexpr uint32_t field_id = FieldMetadata_KernelSymbolsMemKb::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kUint32>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_AtraceErrors =
    ::protozero::proto_utils::FieldMetadata<
      5,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kString,
      std::string,
      FtraceStats>;

  // Ceci n'est pas une pipe.
  // This is actually a variable of FieldMetadataHelper<FieldMetadata<...>>
  // type (and users are expected to use it as such, hence kCamelCase name).
  // It is declared as a function to keep protozero bindings header-only as
  // inline constexpr variables are not available until C++17 (while inline
  // functions are).
  // TODO(altimin): Use inline variable instead after adopting C++17.
  static constexpr FieldMetadata_AtraceErrors kAtraceErrors() { return {}; }
  void set_atrace_errors(const char* data, size_t size) {
    AppendBytes(FieldMetadata_AtraceErrors::kFieldId, data, size);
  }
  void set_atrace_errors(::protozero::ConstChars chars) {
    AppendBytes(FieldMetadata_AtraceErrors::kFieldId, chars.data, chars.size);
  }
  void set_atrace_errors(std::string value) {
    static constexpr uint32_t field_id = FieldMetadata_AtraceErrors::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kString>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_UnknownFtraceEvents =
    ::protozero::proto_utils::FieldMetadata<
      6,
      ::protozero::proto_utils::RepetitionType::kRepeatedNotPacked,
      ::protozero::proto_utils::ProtoSchemaType::kString,
      std::string,
      FtraceStats>;

  // Ceci n'est pas une pipe.
  // This is actually a variable of FieldMetadataHelper<FieldMetadata<...>>
  // type (and users are expected to use it as such, hence kCamelCase name).
  // It is declared as a function to keep protozero bindings header-only as
  // inline constexpr variables are not available until C++17 (while inline
  // functions are).
  // TODO(altimin): Use inline variable instead after adopting C++17.
  static constexpr FieldMetadata_UnknownFtraceEvents kUnknownFtraceEvents() { return {}; }
  void add_unknown_ftrace_events(const char* data, size_t size) {
    AppendBytes(FieldMetadata_UnknownFtraceEvents::kFieldId, data, size);
  }
  void add_unknown_ftrace_events(::protozero::ConstChars chars) {
    AppendBytes(FieldMetadata_UnknownFtraceEvents::kFieldId, chars.data, chars.size);
  }
  void add_unknown_ftrace_events(std::string value) {
    static constexpr uint32_t field_id = FieldMetadata_UnknownFtraceEvents::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kString>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_FailedFtraceEvents =
    ::protozero::proto_utils::FieldMetadata<
      7,
      ::protozero::proto_utils::RepetitionType::kRepeatedNotPacked,
      ::protozero::proto_utils::ProtoSchemaType::kString,
      std::string,
      FtraceStats>;

  // Ceci n'est pas une pipe.
  // This is actually a variable of FieldMetadataHelper<FieldMetadata<...>>
  // type (and users are expected to use it as such, hence kCamelCase name).
  // It is declared as a function to keep protozero bindings header-only as
  // inline constexpr variables are not available until C++17 (while inline
  // functions are).
  // TODO(altimin): Use inline variable instead after adopting C++17.
  static constexpr FieldMetadata_FailedFtraceEvents kFailedFtraceEvents() { return {}; }
  void add_failed_ftrace_events(const char* data, size_t size) {
    AppendBytes(FieldMetadata_FailedFtraceEvents::kFieldId, data, size);
  }
  void add_failed_ftrace_events(::protozero::ConstChars chars) {
    AppendBytes(FieldMetadata_FailedFtraceEvents::kFieldId, chars.data, chars.size);
  }
  void add_failed_ftrace_events(std::string value) {
    static constexpr uint32_t field_id = FieldMetadata_FailedFtraceEvents::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kString>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_PreserveFtraceBuffer =
    ::protozero::proto_utils::FieldMetadata<
      8,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kBool,
      bool,
      FtraceStats>;

  // Ceci n'est pas une pipe.
  // This is actually a variable of FieldMetadataHelper<FieldMetadata<...>>
  // type (and users are expected to use it as such, hence kCamelCase name).
  // It is declared as a function to keep protozero bindings header-only as
  // inline constexpr variables are not available until C++17 (while inline
  // functions are).
  // TODO(altimin): Use inline variable instead after adopting C++17.
  static constexpr FieldMetadata_PreserveFtraceBuffer kPreserveFtraceBuffer() { return {}; }
  void set_preserve_ftrace_buffer(bool value) {
    static constexpr uint32_t field_id = FieldMetadata_PreserveFtraceBuffer::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kBool>
        ::Append(*this, field_id, value);
  }
};

class FtraceCpuStats_Decoder : public ::protozero::TypedProtoDecoder</*MAX_FIELD_ID=*/9, /*HAS_NONPACKED_REPEATED_FIELDS=*/false> {
 public:
  FtraceCpuStats_Decoder(const uint8_t* data, size_t len) : TypedProtoDecoder(data, len) {}
  explicit FtraceCpuStats_Decoder(const std::string& raw) : TypedProtoDecoder(reinterpret_cast<const uint8_t*>(raw.data()), raw.size()) {}
  explicit FtraceCpuStats_Decoder(const ::protozero::ConstBytes& raw) : TypedProtoDecoder(raw.data, raw.size) {}
  bool has_cpu() const { return at<1>().valid(); }
  uint64_t cpu() const { return at<1>().as_uint64(); }
  bool has_entries() const { return at<2>().valid(); }
  uint64_t entries() const { return at<2>().as_uint64(); }
  bool has_overrun() const { return at<3>().valid(); }
  uint64_t overrun() const { return at<3>().as_uint64(); }
  bool has_commit_overrun() const { return at<4>().valid(); }
  uint64_t commit_overrun() const { return at<4>().as_uint64(); }
  bool has_bytes_read() const { return at<5>().valid(); }
  uint64_t bytes_read() const { return at<5>().as_uint64(); }
  bool has_oldest_event_ts() const { return at<6>().valid(); }
  double oldest_event_ts() const { return at<6>().as_double(); }
  bool has_now_ts() const { return at<7>().valid(); }
  double now_ts() const { return at<7>().as_double(); }
  bool has_dropped_events() const { return at<8>().valid(); }
  uint64_t dropped_events() const { return at<8>().as_uint64(); }
  bool has_read_events() const { return at<9>().valid(); }
  uint64_t read_events() const { return at<9>().as_uint64(); }
};

class FtraceCpuStats : public ::protozero::Message {
 public:
  using Decoder = FtraceCpuStats_Decoder;
  enum : int32_t {
    kCpuFieldNumber = 1,
    kEntriesFieldNumber = 2,
    kOverrunFieldNumber = 3,
    kCommitOverrunFieldNumber = 4,
    kBytesReadFieldNumber = 5,
    kOldestEventTsFieldNumber = 6,
    kNowTsFieldNumber = 7,
    kDroppedEventsFieldNumber = 8,
    kReadEventsFieldNumber = 9,
  };
  static constexpr const char* GetName() { return ".perfetto.protos.FtraceCpuStats"; }


  using FieldMetadata_Cpu =
    ::protozero::proto_utils::FieldMetadata<
      1,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kUint64,
      uint64_t,
      FtraceCpuStats>;

  // Ceci n'est pas une pipe.
  // This is actually a variable of FieldMetadataHelper<FieldMetadata<...>>
  // type (and users are expected to use it as such, hence kCamelCase name).
  // It is declared as a function to keep protozero bindings header-only as
  // inline constexpr variables are not available until C++17 (while inline
  // functions are).
  // TODO(altimin): Use inline variable instead after adopting C++17.
  static constexpr FieldMetadata_Cpu kCpu() { return {}; }
  void set_cpu(uint64_t value) {
    static constexpr uint32_t field_id = FieldMetadata_Cpu::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kUint64>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_Entries =
    ::protozero::proto_utils::FieldMetadata<
      2,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kUint64,
      uint64_t,
      FtraceCpuStats>;

  // Ceci n'est pas une pipe.
  // This is actually a variable of FieldMetadataHelper<FieldMetadata<...>>
  // type (and users are expected to use it as such, hence kCamelCase name).
  // It is declared as a function to keep protozero bindings header-only as
  // inline constexpr variables are not available until C++17 (while inline
  // functions are).
  // TODO(altimin): Use inline variable instead after adopting C++17.
  static constexpr FieldMetadata_Entries kEntries() { return {}; }
  void set_entries(uint64_t value) {
    static constexpr uint32_t field_id = FieldMetadata_Entries::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kUint64>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_Overrun =
    ::protozero::proto_utils::FieldMetadata<
      3,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kUint64,
      uint64_t,
      FtraceCpuStats>;

  // Ceci n'est pas une pipe.
  // This is actually a variable of FieldMetadataHelper<FieldMetadata<...>>
  // type (and users are expected to use it as such, hence kCamelCase name).
  // It is declared as a function to keep protozero bindings header-only as
  // inline constexpr variables are not available until C++17 (while inline
  // functions are).
  // TODO(altimin): Use inline variable instead after adopting C++17.
  static constexpr FieldMetadata_Overrun kOverrun() { return {}; }
  void set_overrun(uint64_t value) {
    static constexpr uint32_t field_id = FieldMetadata_Overrun::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kUint64>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_CommitOverrun =
    ::protozero::proto_utils::FieldMetadata<
      4,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kUint64,
      uint64_t,
      FtraceCpuStats>;

  // Ceci n'est pas une pipe.
  // This is actually a variable of FieldMetadataHelper<FieldMetadata<...>>
  // type (and users are expected to use it as such, hence kCamelCase name).
  // It is declared as a function to keep protozero bindings header-only as
  // inline constexpr variables are not available until C++17 (while inline
  // functions are).
  // TODO(altimin): Use inline variable instead after adopting C++17.
  static constexpr FieldMetadata_CommitOverrun kCommitOverrun() { return {}; }
  void set_commit_overrun(uint64_t value) {
    static constexpr uint32_t field_id = FieldMetadata_CommitOverrun::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kUint64>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_BytesRead =
    ::protozero::proto_utils::FieldMetadata<
      5,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kUint64,
      uint64_t,
      FtraceCpuStats>;

  // Ceci n'est pas une pipe.
  // This is actually a variable of FieldMetadataHelper<FieldMetadata<...>>
  // type (and users are expected to use it as such, hence kCamelCase name).
  // It is declared as a function to keep protozero bindings header-only as
  // inline constexpr variables are not available until C++17 (while inline
  // functions are).
  // TODO(altimin): Use inline variable instead after adopting C++17.
  static constexpr FieldMetadata_BytesRead kBytesRead() { return {}; }
  void set_bytes_read(uint64_t value) {
    static constexpr uint32_t field_id = FieldMetadata_BytesRead::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kUint64>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_OldestEventTs =
    ::protozero::proto_utils::FieldMetadata<
      6,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kDouble,
      double,
      FtraceCpuStats>;

  // Ceci n'est pas une pipe.
  // This is actually a variable of FieldMetadataHelper<FieldMetadata<...>>
  // type (and users are expected to use it as such, hence kCamelCase name).
  // It is declared as a function to keep protozero bindings header-only as
  // inline constexpr variables are not available until C++17 (while inline
  // functions are).
  // TODO(altimin): Use inline variable instead after adopting C++17.
  static constexpr FieldMetadata_OldestEventTs kOldestEventTs() { return {}; }
  void set_oldest_event_ts(double value) {
    static constexpr uint32_t field_id = FieldMetadata_OldestEventTs::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kDouble>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_NowTs =
    ::protozero::proto_utils::FieldMetadata<
      7,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kDouble,
      double,
      FtraceCpuStats>;

  // Ceci n'est pas une pipe.
  // This is actually a variable of FieldMetadataHelper<FieldMetadata<...>>
  // type (and users are expected to use it as such, hence kCamelCase name).
  // It is declared as a function to keep protozero bindings header-only as
  // inline constexpr variables are not available until C++17 (while inline
  // functions are).
  // TODO(altimin): Use inline variable instead after adopting C++17.
  static constexpr FieldMetadata_NowTs kNowTs() { return {}; }
  void set_now_ts(double value) {
    static constexpr uint32_t field_id = FieldMetadata_NowTs::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kDouble>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_DroppedEvents =
    ::protozero::proto_utils::FieldMetadata<
      8,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kUint64,
      uint64_t,
      FtraceCpuStats>;

  // Ceci n'est pas une pipe.
  // This is actually a variable of FieldMetadataHelper<FieldMetadata<...>>
  // type (and users are expected to use it as such, hence kCamelCase name).
  // It is declared as a function to keep protozero bindings header-only as
  // inline constexpr variables are not available until C++17 (while inline
  // functions are).
  // TODO(altimin): Use inline variable instead after adopting C++17.
  static constexpr FieldMetadata_DroppedEvents kDroppedEvents() { return {}; }
  void set_dropped_events(uint64_t value) {
    static constexpr uint32_t field_id = FieldMetadata_DroppedEvents::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kUint64>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_ReadEvents =
    ::protozero::proto_utils::FieldMetadata<
      9,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kUint64,
      uint64_t,
      FtraceCpuStats>;

  // Ceci n'est pas une pipe.
  // This is actually a variable of FieldMetadataHelper<FieldMetadata<...>>
  // type (and users are expected to use it as such, hence kCamelCase name).
  // It is declared as a function to keep protozero bindings header-only as
  // inline constexpr variables are not available until C++17 (while inline
  // functions are).
  // TODO(altimin): Use inline variable instead after adopting C++17.
  static constexpr FieldMetadata_ReadEvents kReadEvents() { return {}; }
  void set_read_events(uint64_t value) {
    static constexpr uint32_t field_id = FieldMetadata_ReadEvents::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kUint64>
        ::Append(*this, field_id, value);
  }
};

} // Namespace.
} // Namespace.
} // Namespace.
#endif  // Include guard.
