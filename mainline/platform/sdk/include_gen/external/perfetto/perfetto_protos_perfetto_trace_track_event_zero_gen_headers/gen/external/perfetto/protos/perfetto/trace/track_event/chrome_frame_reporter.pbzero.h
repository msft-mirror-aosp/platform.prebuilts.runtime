// Autogenerated by the ProtoZero compiler plugin. DO NOT EDIT.

#ifndef PERFETTO_PROTOS_PROTOS_PERFETTO_TRACE_TRACK_EVENT_CHROME_FRAME_REPORTER_PROTO_H_
#define PERFETTO_PROTOS_PROTOS_PERFETTO_TRACE_TRACK_EVENT_CHROME_FRAME_REPORTER_PROTO_H_

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

namespace perfetto_pbzero_enum_ChromeFrameReporter {
enum FrameDropReason : int32_t;
}  // namespace perfetto_pbzero_enum_ChromeFrameReporter
using ChromeFrameReporter_FrameDropReason = perfetto_pbzero_enum_ChromeFrameReporter::FrameDropReason;
namespace perfetto_pbzero_enum_ChromeFrameReporter {
enum FrameType : int32_t;
}  // namespace perfetto_pbzero_enum_ChromeFrameReporter
using ChromeFrameReporter_FrameType = perfetto_pbzero_enum_ChromeFrameReporter::FrameType;
namespace perfetto_pbzero_enum_ChromeFrameReporter {
enum ScrollState : int32_t;
}  // namespace perfetto_pbzero_enum_ChromeFrameReporter
using ChromeFrameReporter_ScrollState = perfetto_pbzero_enum_ChromeFrameReporter::ScrollState;
namespace perfetto_pbzero_enum_ChromeFrameReporter {
enum State : int32_t;
}  // namespace perfetto_pbzero_enum_ChromeFrameReporter
using ChromeFrameReporter_State = perfetto_pbzero_enum_ChromeFrameReporter::State;

namespace perfetto_pbzero_enum_ChromeFrameReporter {
enum State : int32_t {
  STATE_NO_UPDATE_DESIRED = 0,
  STATE_PRESENTED_ALL = 1,
  STATE_PRESENTED_PARTIAL = 2,
  STATE_DROPPED = 3,
};
} // namespace perfetto_pbzero_enum_ChromeFrameReporter
using ChromeFrameReporter_State = perfetto_pbzero_enum_ChromeFrameReporter::State;


constexpr ChromeFrameReporter_State ChromeFrameReporter_State_MIN = ChromeFrameReporter_State::STATE_NO_UPDATE_DESIRED;
constexpr ChromeFrameReporter_State ChromeFrameReporter_State_MAX = ChromeFrameReporter_State::STATE_DROPPED;


PERFETTO_PROTOZERO_CONSTEXPR14_OR_INLINE
const char* ChromeFrameReporter_State_Name(::perfetto::protos::pbzero::ChromeFrameReporter_State value) {
  switch (value) {
  case ::perfetto::protos::pbzero::ChromeFrameReporter_State::STATE_NO_UPDATE_DESIRED:
    return "STATE_NO_UPDATE_DESIRED";

  case ::perfetto::protos::pbzero::ChromeFrameReporter_State::STATE_PRESENTED_ALL:
    return "STATE_PRESENTED_ALL";

  case ::perfetto::protos::pbzero::ChromeFrameReporter_State::STATE_PRESENTED_PARTIAL:
    return "STATE_PRESENTED_PARTIAL";

  case ::perfetto::protos::pbzero::ChromeFrameReporter_State::STATE_DROPPED:
    return "STATE_DROPPED";
  }
  return "PBZERO_UNKNOWN_ENUM_VALUE";
}

namespace perfetto_pbzero_enum_ChromeFrameReporter {
enum FrameDropReason : int32_t {
  REASON_UNSPECIFIED = 0,
  REASON_DISPLAY_COMPOSITOR = 1,
  REASON_MAIN_THREAD = 2,
  REASON_CLIENT_COMPOSITOR = 3,
};
} // namespace perfetto_pbzero_enum_ChromeFrameReporter
using ChromeFrameReporter_FrameDropReason = perfetto_pbzero_enum_ChromeFrameReporter::FrameDropReason;


constexpr ChromeFrameReporter_FrameDropReason ChromeFrameReporter_FrameDropReason_MIN = ChromeFrameReporter_FrameDropReason::REASON_UNSPECIFIED;
constexpr ChromeFrameReporter_FrameDropReason ChromeFrameReporter_FrameDropReason_MAX = ChromeFrameReporter_FrameDropReason::REASON_CLIENT_COMPOSITOR;


PERFETTO_PROTOZERO_CONSTEXPR14_OR_INLINE
const char* ChromeFrameReporter_FrameDropReason_Name(::perfetto::protos::pbzero::ChromeFrameReporter_FrameDropReason value) {
  switch (value) {
  case ::perfetto::protos::pbzero::ChromeFrameReporter_FrameDropReason::REASON_UNSPECIFIED:
    return "REASON_UNSPECIFIED";

  case ::perfetto::protos::pbzero::ChromeFrameReporter_FrameDropReason::REASON_DISPLAY_COMPOSITOR:
    return "REASON_DISPLAY_COMPOSITOR";

  case ::perfetto::protos::pbzero::ChromeFrameReporter_FrameDropReason::REASON_MAIN_THREAD:
    return "REASON_MAIN_THREAD";

  case ::perfetto::protos::pbzero::ChromeFrameReporter_FrameDropReason::REASON_CLIENT_COMPOSITOR:
    return "REASON_CLIENT_COMPOSITOR";
  }
  return "PBZERO_UNKNOWN_ENUM_VALUE";
}

namespace perfetto_pbzero_enum_ChromeFrameReporter {
enum ScrollState : int32_t {
  SCROLL_NONE = 0,
  SCROLL_MAIN_THREAD = 1,
  SCROLL_COMPOSITOR_THREAD = 2,
  SCROLL_UNKNOWN = 3,
};
} // namespace perfetto_pbzero_enum_ChromeFrameReporter
using ChromeFrameReporter_ScrollState = perfetto_pbzero_enum_ChromeFrameReporter::ScrollState;


constexpr ChromeFrameReporter_ScrollState ChromeFrameReporter_ScrollState_MIN = ChromeFrameReporter_ScrollState::SCROLL_NONE;
constexpr ChromeFrameReporter_ScrollState ChromeFrameReporter_ScrollState_MAX = ChromeFrameReporter_ScrollState::SCROLL_UNKNOWN;


PERFETTO_PROTOZERO_CONSTEXPR14_OR_INLINE
const char* ChromeFrameReporter_ScrollState_Name(::perfetto::protos::pbzero::ChromeFrameReporter_ScrollState value) {
  switch (value) {
  case ::perfetto::protos::pbzero::ChromeFrameReporter_ScrollState::SCROLL_NONE:
    return "SCROLL_NONE";

  case ::perfetto::protos::pbzero::ChromeFrameReporter_ScrollState::SCROLL_MAIN_THREAD:
    return "SCROLL_MAIN_THREAD";

  case ::perfetto::protos::pbzero::ChromeFrameReporter_ScrollState::SCROLL_COMPOSITOR_THREAD:
    return "SCROLL_COMPOSITOR_THREAD";

  case ::perfetto::protos::pbzero::ChromeFrameReporter_ScrollState::SCROLL_UNKNOWN:
    return "SCROLL_UNKNOWN";
  }
  return "PBZERO_UNKNOWN_ENUM_VALUE";
}

namespace perfetto_pbzero_enum_ChromeFrameReporter {
enum FrameType : int32_t {
  FORKED = 0,
  BACKFILL = 1,
};
} // namespace perfetto_pbzero_enum_ChromeFrameReporter
using ChromeFrameReporter_FrameType = perfetto_pbzero_enum_ChromeFrameReporter::FrameType;


constexpr ChromeFrameReporter_FrameType ChromeFrameReporter_FrameType_MIN = ChromeFrameReporter_FrameType::FORKED;
constexpr ChromeFrameReporter_FrameType ChromeFrameReporter_FrameType_MAX = ChromeFrameReporter_FrameType::BACKFILL;


PERFETTO_PROTOZERO_CONSTEXPR14_OR_INLINE
const char* ChromeFrameReporter_FrameType_Name(::perfetto::protos::pbzero::ChromeFrameReporter_FrameType value) {
  switch (value) {
  case ::perfetto::protos::pbzero::ChromeFrameReporter_FrameType::FORKED:
    return "FORKED";

  case ::perfetto::protos::pbzero::ChromeFrameReporter_FrameType::BACKFILL:
    return "BACKFILL";
  }
  return "PBZERO_UNKNOWN_ENUM_VALUE";
}

class ChromeFrameReporter_Decoder : public ::protozero::TypedProtoDecoder</*MAX_FIELD_ID=*/14, /*HAS_NONPACKED_REPEATED_FIELDS=*/true> {
 public:
  ChromeFrameReporter_Decoder(const uint8_t* data, size_t len) : TypedProtoDecoder(data, len) {}
  explicit ChromeFrameReporter_Decoder(const std::string& raw) : TypedProtoDecoder(reinterpret_cast<const uint8_t*>(raw.data()), raw.size()) {}
  explicit ChromeFrameReporter_Decoder(const ::protozero::ConstBytes& raw) : TypedProtoDecoder(raw.data, raw.size) {}
  bool has_state() const { return at<1>().valid(); }
  int32_t state() const { return at<1>().as_int32(); }
  bool has_reason() const { return at<2>().valid(); }
  int32_t reason() const { return at<2>().as_int32(); }
  bool has_frame_source() const { return at<3>().valid(); }
  uint64_t frame_source() const { return at<3>().as_uint64(); }
  bool has_frame_sequence() const { return at<4>().valid(); }
  uint64_t frame_sequence() const { return at<4>().as_uint64(); }
  bool has_affects_smoothness() const { return at<5>().valid(); }
  bool affects_smoothness() const { return at<5>().as_bool(); }
  bool has_scroll_state() const { return at<6>().valid(); }
  int32_t scroll_state() const { return at<6>().as_int32(); }
  bool has_has_main_animation() const { return at<7>().valid(); }
  bool has_main_animation() const { return at<7>().as_bool(); }
  bool has_has_compositor_animation() const { return at<8>().valid(); }
  bool has_compositor_animation() const { return at<8>().as_bool(); }
  bool has_has_smooth_input_main() const { return at<9>().valid(); }
  bool has_smooth_input_main() const { return at<9>().as_bool(); }
  bool has_has_missing_content() const { return at<10>().valid(); }
  bool has_missing_content() const { return at<10>().as_bool(); }
  bool has_layer_tree_host_id() const { return at<11>().valid(); }
  uint64_t layer_tree_host_id() const { return at<11>().as_uint64(); }
  bool has_has_high_latency() const { return at<12>().valid(); }
  bool has_high_latency() const { return at<12>().as_bool(); }
  bool has_frame_type() const { return at<13>().valid(); }
  int32_t frame_type() const { return at<13>().as_int32(); }
  bool has_high_latency_contribution_stage() const { return at<14>().valid(); }
  ::protozero::RepeatedFieldIterator<::protozero::ConstChars> high_latency_contribution_stage() const { return GetRepeated<::protozero::ConstChars>(14); }
};

class ChromeFrameReporter : public ::protozero::Message {
 public:
  using Decoder = ChromeFrameReporter_Decoder;
  enum : int32_t {
    kStateFieldNumber = 1,
    kReasonFieldNumber = 2,
    kFrameSourceFieldNumber = 3,
    kFrameSequenceFieldNumber = 4,
    kAffectsSmoothnessFieldNumber = 5,
    kScrollStateFieldNumber = 6,
    kHasMainAnimationFieldNumber = 7,
    kHasCompositorAnimationFieldNumber = 8,
    kHasSmoothInputMainFieldNumber = 9,
    kHasMissingContentFieldNumber = 10,
    kLayerTreeHostIdFieldNumber = 11,
    kHasHighLatencyFieldNumber = 12,
    kFrameTypeFieldNumber = 13,
    kHighLatencyContributionStageFieldNumber = 14,
  };
  static constexpr const char* GetName() { return ".perfetto.protos.ChromeFrameReporter"; }


  using State = ::perfetto::protos::pbzero::ChromeFrameReporter_State;
  static inline const char* State_Name(State value) {
    return ::perfetto::protos::pbzero::ChromeFrameReporter_State_Name(value);
  }

  using FrameDropReason = ::perfetto::protos::pbzero::ChromeFrameReporter_FrameDropReason;
  static inline const char* FrameDropReason_Name(FrameDropReason value) {
    return ::perfetto::protos::pbzero::ChromeFrameReporter_FrameDropReason_Name(value);
  }

  using ScrollState = ::perfetto::protos::pbzero::ChromeFrameReporter_ScrollState;
  static inline const char* ScrollState_Name(ScrollState value) {
    return ::perfetto::protos::pbzero::ChromeFrameReporter_ScrollState_Name(value);
  }

  using FrameType = ::perfetto::protos::pbzero::ChromeFrameReporter_FrameType;
  static inline const char* FrameType_Name(FrameType value) {
    return ::perfetto::protos::pbzero::ChromeFrameReporter_FrameType_Name(value);
  }
  static const State STATE_NO_UPDATE_DESIRED = State::STATE_NO_UPDATE_DESIRED;
  static const State STATE_PRESENTED_ALL = State::STATE_PRESENTED_ALL;
  static const State STATE_PRESENTED_PARTIAL = State::STATE_PRESENTED_PARTIAL;
  static const State STATE_DROPPED = State::STATE_DROPPED;
  static const FrameDropReason REASON_UNSPECIFIED = FrameDropReason::REASON_UNSPECIFIED;
  static const FrameDropReason REASON_DISPLAY_COMPOSITOR = FrameDropReason::REASON_DISPLAY_COMPOSITOR;
  static const FrameDropReason REASON_MAIN_THREAD = FrameDropReason::REASON_MAIN_THREAD;
  static const FrameDropReason REASON_CLIENT_COMPOSITOR = FrameDropReason::REASON_CLIENT_COMPOSITOR;
  static const ScrollState SCROLL_NONE = ScrollState::SCROLL_NONE;
  static const ScrollState SCROLL_MAIN_THREAD = ScrollState::SCROLL_MAIN_THREAD;
  static const ScrollState SCROLL_COMPOSITOR_THREAD = ScrollState::SCROLL_COMPOSITOR_THREAD;
  static const ScrollState SCROLL_UNKNOWN = ScrollState::SCROLL_UNKNOWN;
  static const FrameType FORKED = FrameType::FORKED;
  static const FrameType BACKFILL = FrameType::BACKFILL;

  using FieldMetadata_State =
    ::protozero::proto_utils::FieldMetadata<
      1,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kEnum,
      ::perfetto::protos::pbzero::ChromeFrameReporter_State,
      ChromeFrameReporter>;

  // Ceci n'est pas une pipe.
  // This is actually a variable of FieldMetadataHelper<FieldMetadata<...>>
  // type (and users are expected to use it as such, hence kCamelCase name).
  // It is declared as a function to keep protozero bindings header-only as
  // inline constexpr variables are not available until C++17 (while inline
  // functions are).
  // TODO(altimin): Use inline variable instead after adopting C++17.
  static constexpr FieldMetadata_State kState() { return {}; }
  void set_state(::perfetto::protos::pbzero::ChromeFrameReporter_State value) {
    static constexpr uint32_t field_id = FieldMetadata_State::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kEnum>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_Reason =
    ::protozero::proto_utils::FieldMetadata<
      2,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kEnum,
      ::perfetto::protos::pbzero::ChromeFrameReporter_FrameDropReason,
      ChromeFrameReporter>;

  // Ceci n'est pas une pipe.
  // This is actually a variable of FieldMetadataHelper<FieldMetadata<...>>
  // type (and users are expected to use it as such, hence kCamelCase name).
  // It is declared as a function to keep protozero bindings header-only as
  // inline constexpr variables are not available until C++17 (while inline
  // functions are).
  // TODO(altimin): Use inline variable instead after adopting C++17.
  static constexpr FieldMetadata_Reason kReason() { return {}; }
  void set_reason(::perfetto::protos::pbzero::ChromeFrameReporter_FrameDropReason value) {
    static constexpr uint32_t field_id = FieldMetadata_Reason::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kEnum>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_FrameSource =
    ::protozero::proto_utils::FieldMetadata<
      3,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kUint64,
      uint64_t,
      ChromeFrameReporter>;

  // Ceci n'est pas une pipe.
  // This is actually a variable of FieldMetadataHelper<FieldMetadata<...>>
  // type (and users are expected to use it as such, hence kCamelCase name).
  // It is declared as a function to keep protozero bindings header-only as
  // inline constexpr variables are not available until C++17 (while inline
  // functions are).
  // TODO(altimin): Use inline variable instead after adopting C++17.
  static constexpr FieldMetadata_FrameSource kFrameSource() { return {}; }
  void set_frame_source(uint64_t value) {
    static constexpr uint32_t field_id = FieldMetadata_FrameSource::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kUint64>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_FrameSequence =
    ::protozero::proto_utils::FieldMetadata<
      4,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kUint64,
      uint64_t,
      ChromeFrameReporter>;

  // Ceci n'est pas une pipe.
  // This is actually a variable of FieldMetadataHelper<FieldMetadata<...>>
  // type (and users are expected to use it as such, hence kCamelCase name).
  // It is declared as a function to keep protozero bindings header-only as
  // inline constexpr variables are not available until C++17 (while inline
  // functions are).
  // TODO(altimin): Use inline variable instead after adopting C++17.
  static constexpr FieldMetadata_FrameSequence kFrameSequence() { return {}; }
  void set_frame_sequence(uint64_t value) {
    static constexpr uint32_t field_id = FieldMetadata_FrameSequence::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kUint64>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_AffectsSmoothness =
    ::protozero::proto_utils::FieldMetadata<
      5,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kBool,
      bool,
      ChromeFrameReporter>;

  // Ceci n'est pas une pipe.
  // This is actually a variable of FieldMetadataHelper<FieldMetadata<...>>
  // type (and users are expected to use it as such, hence kCamelCase name).
  // It is declared as a function to keep protozero bindings header-only as
  // inline constexpr variables are not available until C++17 (while inline
  // functions are).
  // TODO(altimin): Use inline variable instead after adopting C++17.
  static constexpr FieldMetadata_AffectsSmoothness kAffectsSmoothness() { return {}; }
  void set_affects_smoothness(bool value) {
    static constexpr uint32_t field_id = FieldMetadata_AffectsSmoothness::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kBool>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_ScrollState =
    ::protozero::proto_utils::FieldMetadata<
      6,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kEnum,
      ::perfetto::protos::pbzero::ChromeFrameReporter_ScrollState,
      ChromeFrameReporter>;

  // Ceci n'est pas une pipe.
  // This is actually a variable of FieldMetadataHelper<FieldMetadata<...>>
  // type (and users are expected to use it as such, hence kCamelCase name).
  // It is declared as a function to keep protozero bindings header-only as
  // inline constexpr variables are not available until C++17 (while inline
  // functions are).
  // TODO(altimin): Use inline variable instead after adopting C++17.
  static constexpr FieldMetadata_ScrollState kScrollState() { return {}; }
  void set_scroll_state(::perfetto::protos::pbzero::ChromeFrameReporter_ScrollState value) {
    static constexpr uint32_t field_id = FieldMetadata_ScrollState::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kEnum>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_HasMainAnimation =
    ::protozero::proto_utils::FieldMetadata<
      7,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kBool,
      bool,
      ChromeFrameReporter>;

  // Ceci n'est pas une pipe.
  // This is actually a variable of FieldMetadataHelper<FieldMetadata<...>>
  // type (and users are expected to use it as such, hence kCamelCase name).
  // It is declared as a function to keep protozero bindings header-only as
  // inline constexpr variables are not available until C++17 (while inline
  // functions are).
  // TODO(altimin): Use inline variable instead after adopting C++17.
  static constexpr FieldMetadata_HasMainAnimation kHasMainAnimation() { return {}; }
  void set_has_main_animation(bool value) {
    static constexpr uint32_t field_id = FieldMetadata_HasMainAnimation::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kBool>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_HasCompositorAnimation =
    ::protozero::proto_utils::FieldMetadata<
      8,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kBool,
      bool,
      ChromeFrameReporter>;

  // Ceci n'est pas une pipe.
  // This is actually a variable of FieldMetadataHelper<FieldMetadata<...>>
  // type (and users are expected to use it as such, hence kCamelCase name).
  // It is declared as a function to keep protozero bindings header-only as
  // inline constexpr variables are not available until C++17 (while inline
  // functions are).
  // TODO(altimin): Use inline variable instead after adopting C++17.
  static constexpr FieldMetadata_HasCompositorAnimation kHasCompositorAnimation() { return {}; }
  void set_has_compositor_animation(bool value) {
    static constexpr uint32_t field_id = FieldMetadata_HasCompositorAnimation::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kBool>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_HasSmoothInputMain =
    ::protozero::proto_utils::FieldMetadata<
      9,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kBool,
      bool,
      ChromeFrameReporter>;

  // Ceci n'est pas une pipe.
  // This is actually a variable of FieldMetadataHelper<FieldMetadata<...>>
  // type (and users are expected to use it as such, hence kCamelCase name).
  // It is declared as a function to keep protozero bindings header-only as
  // inline constexpr variables are not available until C++17 (while inline
  // functions are).
  // TODO(altimin): Use inline variable instead after adopting C++17.
  static constexpr FieldMetadata_HasSmoothInputMain kHasSmoothInputMain() { return {}; }
  void set_has_smooth_input_main(bool value) {
    static constexpr uint32_t field_id = FieldMetadata_HasSmoothInputMain::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kBool>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_HasMissingContent =
    ::protozero::proto_utils::FieldMetadata<
      10,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kBool,
      bool,
      ChromeFrameReporter>;

  // Ceci n'est pas une pipe.
  // This is actually a variable of FieldMetadataHelper<FieldMetadata<...>>
  // type (and users are expected to use it as such, hence kCamelCase name).
  // It is declared as a function to keep protozero bindings header-only as
  // inline constexpr variables are not available until C++17 (while inline
  // functions are).
  // TODO(altimin): Use inline variable instead after adopting C++17.
  static constexpr FieldMetadata_HasMissingContent kHasMissingContent() { return {}; }
  void set_has_missing_content(bool value) {
    static constexpr uint32_t field_id = FieldMetadata_HasMissingContent::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kBool>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_LayerTreeHostId =
    ::protozero::proto_utils::FieldMetadata<
      11,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kUint64,
      uint64_t,
      ChromeFrameReporter>;

  // Ceci n'est pas une pipe.
  // This is actually a variable of FieldMetadataHelper<FieldMetadata<...>>
  // type (and users are expected to use it as such, hence kCamelCase name).
  // It is declared as a function to keep protozero bindings header-only as
  // inline constexpr variables are not available until C++17 (while inline
  // functions are).
  // TODO(altimin): Use inline variable instead after adopting C++17.
  static constexpr FieldMetadata_LayerTreeHostId kLayerTreeHostId() { return {}; }
  void set_layer_tree_host_id(uint64_t value) {
    static constexpr uint32_t field_id = FieldMetadata_LayerTreeHostId::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kUint64>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_HasHighLatency =
    ::protozero::proto_utils::FieldMetadata<
      12,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kBool,
      bool,
      ChromeFrameReporter>;

  // Ceci n'est pas une pipe.
  // This is actually a variable of FieldMetadataHelper<FieldMetadata<...>>
  // type (and users are expected to use it as such, hence kCamelCase name).
  // It is declared as a function to keep protozero bindings header-only as
  // inline constexpr variables are not available until C++17 (while inline
  // functions are).
  // TODO(altimin): Use inline variable instead after adopting C++17.
  static constexpr FieldMetadata_HasHighLatency kHasHighLatency() { return {}; }
  void set_has_high_latency(bool value) {
    static constexpr uint32_t field_id = FieldMetadata_HasHighLatency::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kBool>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_FrameType =
    ::protozero::proto_utils::FieldMetadata<
      13,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kEnum,
      ::perfetto::protos::pbzero::ChromeFrameReporter_FrameType,
      ChromeFrameReporter>;

  // Ceci n'est pas une pipe.
  // This is actually a variable of FieldMetadataHelper<FieldMetadata<...>>
  // type (and users are expected to use it as such, hence kCamelCase name).
  // It is declared as a function to keep protozero bindings header-only as
  // inline constexpr variables are not available until C++17 (while inline
  // functions are).
  // TODO(altimin): Use inline variable instead after adopting C++17.
  static constexpr FieldMetadata_FrameType kFrameType() { return {}; }
  void set_frame_type(::perfetto::protos::pbzero::ChromeFrameReporter_FrameType value) {
    static constexpr uint32_t field_id = FieldMetadata_FrameType::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kEnum>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_HighLatencyContributionStage =
    ::protozero::proto_utils::FieldMetadata<
      14,
      ::protozero::proto_utils::RepetitionType::kRepeatedNotPacked,
      ::protozero::proto_utils::ProtoSchemaType::kString,
      std::string,
      ChromeFrameReporter>;

  // Ceci n'est pas une pipe.
  // This is actually a variable of FieldMetadataHelper<FieldMetadata<...>>
  // type (and users are expected to use it as such, hence kCamelCase name).
  // It is declared as a function to keep protozero bindings header-only as
  // inline constexpr variables are not available until C++17 (while inline
  // functions are).
  // TODO(altimin): Use inline variable instead after adopting C++17.
  static constexpr FieldMetadata_HighLatencyContributionStage kHighLatencyContributionStage() { return {}; }
  void add_high_latency_contribution_stage(const char* data, size_t size) {
    AppendBytes(FieldMetadata_HighLatencyContributionStage::kFieldId, data, size);
  }
  void add_high_latency_contribution_stage(::protozero::ConstChars chars) {
    AppendBytes(FieldMetadata_HighLatencyContributionStage::kFieldId, chars.data, chars.size);
  }
  void add_high_latency_contribution_stage(std::string value) {
    static constexpr uint32_t field_id = FieldMetadata_HighLatencyContributionStage::kFieldId;
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
