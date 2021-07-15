// Autogenerated by the ProtoZero compiler plugin. DO NOT EDIT.

#ifndef PERFETTO_PROTOS_PROTOS_PERFETTO_TRACE_TRACK_EVENT_THREAD_DESCRIPTOR_PROTO_H_
#define PERFETTO_PROTOS_PROTOS_PERFETTO_TRACE_TRACK_EVENT_THREAD_DESCRIPTOR_PROTO_H_

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

enum ThreadDescriptor_ChromeThreadType : int32_t;

enum ThreadDescriptor_ChromeThreadType : int32_t {
  ThreadDescriptor_ChromeThreadType_CHROME_THREAD_UNSPECIFIED = 0,
  ThreadDescriptor_ChromeThreadType_CHROME_THREAD_MAIN = 1,
  ThreadDescriptor_ChromeThreadType_CHROME_THREAD_IO = 2,
  ThreadDescriptor_ChromeThreadType_CHROME_THREAD_POOL_BG_WORKER = 3,
  ThreadDescriptor_ChromeThreadType_CHROME_THREAD_POOL_FG_WORKER = 4,
  ThreadDescriptor_ChromeThreadType_CHROME_THREAD_POOL_FB_BLOCKING = 5,
  ThreadDescriptor_ChromeThreadType_CHROME_THREAD_POOL_BG_BLOCKING = 6,
  ThreadDescriptor_ChromeThreadType_CHROME_THREAD_POOL_SERVICE = 7,
  ThreadDescriptor_ChromeThreadType_CHROME_THREAD_COMPOSITOR = 8,
  ThreadDescriptor_ChromeThreadType_CHROME_THREAD_VIZ_COMPOSITOR = 9,
  ThreadDescriptor_ChromeThreadType_CHROME_THREAD_COMPOSITOR_WORKER = 10,
  ThreadDescriptor_ChromeThreadType_CHROME_THREAD_SERVICE_WORKER = 11,
  ThreadDescriptor_ChromeThreadType_CHROME_THREAD_MEMORY_INFRA = 50,
  ThreadDescriptor_ChromeThreadType_CHROME_THREAD_SAMPLING_PROFILER = 51,
};

const ThreadDescriptor_ChromeThreadType ThreadDescriptor_ChromeThreadType_MIN = ThreadDescriptor_ChromeThreadType_CHROME_THREAD_UNSPECIFIED;
const ThreadDescriptor_ChromeThreadType ThreadDescriptor_ChromeThreadType_MAX = ThreadDescriptor_ChromeThreadType_CHROME_THREAD_SAMPLING_PROFILER;

class ThreadDescriptor_Decoder : public ::protozero::TypedProtoDecoder</*MAX_FIELD_ID=*/8, /*HAS_NONPACKED_REPEATED_FIELDS=*/false> {
 public:
  ThreadDescriptor_Decoder(const uint8_t* data, size_t len) : TypedProtoDecoder(data, len) {}
  explicit ThreadDescriptor_Decoder(const std::string& raw) : TypedProtoDecoder(reinterpret_cast<const uint8_t*>(raw.data()), raw.size()) {}
  explicit ThreadDescriptor_Decoder(const ::protozero::ConstBytes& raw) : TypedProtoDecoder(raw.data, raw.size) {}
  bool has_pid() const { return at<1>().valid(); }
  int32_t pid() const { return at<1>().as_int32(); }
  bool has_tid() const { return at<2>().valid(); }
  int32_t tid() const { return at<2>().as_int32(); }
  bool has_thread_name() const { return at<5>().valid(); }
  ::protozero::ConstChars thread_name() const { return at<5>().as_string(); }
  bool has_chrome_thread_type() const { return at<4>().valid(); }
  int32_t chrome_thread_type() const { return at<4>().as_int32(); }
  bool has_reference_timestamp_us() const { return at<6>().valid(); }
  int64_t reference_timestamp_us() const { return at<6>().as_int64(); }
  bool has_reference_thread_time_us() const { return at<7>().valid(); }
  int64_t reference_thread_time_us() const { return at<7>().as_int64(); }
  bool has_reference_thread_instruction_count() const { return at<8>().valid(); }
  int64_t reference_thread_instruction_count() const { return at<8>().as_int64(); }
  bool has_legacy_sort_index() const { return at<3>().valid(); }
  int32_t legacy_sort_index() const { return at<3>().as_int32(); }
};

class ThreadDescriptor : public ::protozero::Message {
 public:
  using Decoder = ThreadDescriptor_Decoder;
  enum : int32_t {
    kPidFieldNumber = 1,
    kTidFieldNumber = 2,
    kThreadNameFieldNumber = 5,
    kChromeThreadTypeFieldNumber = 4,
    kReferenceTimestampUsFieldNumber = 6,
    kReferenceThreadTimeUsFieldNumber = 7,
    kReferenceThreadInstructionCountFieldNumber = 8,
    kLegacySortIndexFieldNumber = 3,
  };
  using ChromeThreadType = ::perfetto::protos::pbzero::ThreadDescriptor_ChromeThreadType;
  static const ChromeThreadType CHROME_THREAD_UNSPECIFIED = ThreadDescriptor_ChromeThreadType_CHROME_THREAD_UNSPECIFIED;
  static const ChromeThreadType CHROME_THREAD_MAIN = ThreadDescriptor_ChromeThreadType_CHROME_THREAD_MAIN;
  static const ChromeThreadType CHROME_THREAD_IO = ThreadDescriptor_ChromeThreadType_CHROME_THREAD_IO;
  static const ChromeThreadType CHROME_THREAD_POOL_BG_WORKER = ThreadDescriptor_ChromeThreadType_CHROME_THREAD_POOL_BG_WORKER;
  static const ChromeThreadType CHROME_THREAD_POOL_FG_WORKER = ThreadDescriptor_ChromeThreadType_CHROME_THREAD_POOL_FG_WORKER;
  static const ChromeThreadType CHROME_THREAD_POOL_FB_BLOCKING = ThreadDescriptor_ChromeThreadType_CHROME_THREAD_POOL_FB_BLOCKING;
  static const ChromeThreadType CHROME_THREAD_POOL_BG_BLOCKING = ThreadDescriptor_ChromeThreadType_CHROME_THREAD_POOL_BG_BLOCKING;
  static const ChromeThreadType CHROME_THREAD_POOL_SERVICE = ThreadDescriptor_ChromeThreadType_CHROME_THREAD_POOL_SERVICE;
  static const ChromeThreadType CHROME_THREAD_COMPOSITOR = ThreadDescriptor_ChromeThreadType_CHROME_THREAD_COMPOSITOR;
  static const ChromeThreadType CHROME_THREAD_VIZ_COMPOSITOR = ThreadDescriptor_ChromeThreadType_CHROME_THREAD_VIZ_COMPOSITOR;
  static const ChromeThreadType CHROME_THREAD_COMPOSITOR_WORKER = ThreadDescriptor_ChromeThreadType_CHROME_THREAD_COMPOSITOR_WORKER;
  static const ChromeThreadType CHROME_THREAD_SERVICE_WORKER = ThreadDescriptor_ChromeThreadType_CHROME_THREAD_SERVICE_WORKER;
  static const ChromeThreadType CHROME_THREAD_MEMORY_INFRA = ThreadDescriptor_ChromeThreadType_CHROME_THREAD_MEMORY_INFRA;
  static const ChromeThreadType CHROME_THREAD_SAMPLING_PROFILER = ThreadDescriptor_ChromeThreadType_CHROME_THREAD_SAMPLING_PROFILER;

  using FieldMetadata_Pid =
    ::protozero::proto_utils::FieldMetadata<
      1,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kInt32,
      int32_t,
      ThreadDescriptor>;

  // Ceci n'est pas une pipe.
  // This is actually a variable of FieldMetadataHelper<FieldMetadata<...>>
  // type (and users are expected to use it as such, hence kCamelCase name).
  // It is declared as a function to keep protozero bindings header-only as
  // inline constexpr variables are not available until C++17 (while inline
  // functions are).
  // TODO(altimin): Use inline variable instead after adopting C++17.  
  static constexpr FieldMetadata_Pid kPid() { return {}; }
  void set_pid(int32_t value) {
    static constexpr uint32_t field_id = FieldMetadata_Pid::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kInt32>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_Tid =
    ::protozero::proto_utils::FieldMetadata<
      2,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kInt32,
      int32_t,
      ThreadDescriptor>;

  // Ceci n'est pas une pipe.
  // This is actually a variable of FieldMetadataHelper<FieldMetadata<...>>
  // type (and users are expected to use it as such, hence kCamelCase name).
  // It is declared as a function to keep protozero bindings header-only as
  // inline constexpr variables are not available until C++17 (while inline
  // functions are).
  // TODO(altimin): Use inline variable instead after adopting C++17.  
  static constexpr FieldMetadata_Tid kTid() { return {}; }
  void set_tid(int32_t value) {
    static constexpr uint32_t field_id = FieldMetadata_Tid::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kInt32>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_ThreadName =
    ::protozero::proto_utils::FieldMetadata<
      5,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kString,
      std::string,
      ThreadDescriptor>;

  // Ceci n'est pas une pipe.
  // This is actually a variable of FieldMetadataHelper<FieldMetadata<...>>
  // type (and users are expected to use it as such, hence kCamelCase name).
  // It is declared as a function to keep protozero bindings header-only as
  // inline constexpr variables are not available until C++17 (while inline
  // functions are).
  // TODO(altimin): Use inline variable instead after adopting C++17.  
  static constexpr FieldMetadata_ThreadName kThreadName() { return {}; }
  void set_thread_name(const char* data, size_t size) {
    AppendBytes(FieldMetadata_ThreadName::kFieldId, data, size);
  }
  void set_thread_name(std::string value) {
    static constexpr uint32_t field_id = FieldMetadata_ThreadName::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kString>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_ChromeThreadType =
    ::protozero::proto_utils::FieldMetadata<
      4,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kEnum,
      ::perfetto::protos::pbzero::ThreadDescriptor_ChromeThreadType,
      ThreadDescriptor>;

  // Ceci n'est pas une pipe.
  // This is actually a variable of FieldMetadataHelper<FieldMetadata<...>>
  // type (and users are expected to use it as such, hence kCamelCase name).
  // It is declared as a function to keep protozero bindings header-only as
  // inline constexpr variables are not available until C++17 (while inline
  // functions are).
  // TODO(altimin): Use inline variable instead after adopting C++17.  
  static constexpr FieldMetadata_ChromeThreadType kChromeThreadType() { return {}; }
  void set_chrome_thread_type(::perfetto::protos::pbzero::ThreadDescriptor_ChromeThreadType value) {
    static constexpr uint32_t field_id = FieldMetadata_ChromeThreadType::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kEnum>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_ReferenceTimestampUs =
    ::protozero::proto_utils::FieldMetadata<
      6,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kInt64,
      int64_t,
      ThreadDescriptor>;

  // Ceci n'est pas une pipe.
  // This is actually a variable of FieldMetadataHelper<FieldMetadata<...>>
  // type (and users are expected to use it as such, hence kCamelCase name).
  // It is declared as a function to keep protozero bindings header-only as
  // inline constexpr variables are not available until C++17 (while inline
  // functions are).
  // TODO(altimin): Use inline variable instead after adopting C++17.  
  static constexpr FieldMetadata_ReferenceTimestampUs kReferenceTimestampUs() { return {}; }
  void set_reference_timestamp_us(int64_t value) {
    static constexpr uint32_t field_id = FieldMetadata_ReferenceTimestampUs::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kInt64>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_ReferenceThreadTimeUs =
    ::protozero::proto_utils::FieldMetadata<
      7,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kInt64,
      int64_t,
      ThreadDescriptor>;

  // Ceci n'est pas une pipe.
  // This is actually a variable of FieldMetadataHelper<FieldMetadata<...>>
  // type (and users are expected to use it as such, hence kCamelCase name).
  // It is declared as a function to keep protozero bindings header-only as
  // inline constexpr variables are not available until C++17 (while inline
  // functions are).
  // TODO(altimin): Use inline variable instead after adopting C++17.  
  static constexpr FieldMetadata_ReferenceThreadTimeUs kReferenceThreadTimeUs() { return {}; }
  void set_reference_thread_time_us(int64_t value) {
    static constexpr uint32_t field_id = FieldMetadata_ReferenceThreadTimeUs::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kInt64>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_ReferenceThreadInstructionCount =
    ::protozero::proto_utils::FieldMetadata<
      8,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kInt64,
      int64_t,
      ThreadDescriptor>;

  // Ceci n'est pas une pipe.
  // This is actually a variable of FieldMetadataHelper<FieldMetadata<...>>
  // type (and users are expected to use it as such, hence kCamelCase name).
  // It is declared as a function to keep protozero bindings header-only as
  // inline constexpr variables are not available until C++17 (while inline
  // functions are).
  // TODO(altimin): Use inline variable instead after adopting C++17.  
  static constexpr FieldMetadata_ReferenceThreadInstructionCount kReferenceThreadInstructionCount() { return {}; }
  void set_reference_thread_instruction_count(int64_t value) {
    static constexpr uint32_t field_id = FieldMetadata_ReferenceThreadInstructionCount::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kInt64>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_LegacySortIndex =
    ::protozero::proto_utils::FieldMetadata<
      3,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kInt32,
      int32_t,
      ThreadDescriptor>;

  // Ceci n'est pas une pipe.
  // This is actually a variable of FieldMetadataHelper<FieldMetadata<...>>
  // type (and users are expected to use it as such, hence kCamelCase name).
  // It is declared as a function to keep protozero bindings header-only as
  // inline constexpr variables are not available until C++17 (while inline
  // functions are).
  // TODO(altimin): Use inline variable instead after adopting C++17.  
  static constexpr FieldMetadata_LegacySortIndex kLegacySortIndex() { return {}; }
  void set_legacy_sort_index(int32_t value) {
    static constexpr uint32_t field_id = FieldMetadata_LegacySortIndex::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kInt32>
        ::Append(*this, field_id, value);
  }
};

} // Namespace.
} // Namespace.
} // Namespace.
#endif  // Include guard.
