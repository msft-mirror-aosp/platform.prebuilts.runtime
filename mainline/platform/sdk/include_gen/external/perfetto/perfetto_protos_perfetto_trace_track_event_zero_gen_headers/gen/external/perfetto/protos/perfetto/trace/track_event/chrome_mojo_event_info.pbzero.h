// Autogenerated by the ProtoZero compiler plugin. DO NOT EDIT.

#ifndef PERFETTO_PROTOS_PROTOS_PERFETTO_TRACE_TRACK_EVENT_CHROME_MOJO_EVENT_INFO_PROTO_H_
#define PERFETTO_PROTOS_PROTOS_PERFETTO_TRACE_TRACK_EVENT_CHROME_MOJO_EVENT_INFO_PROTO_H_

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


class ChromeMojoEventInfo_Decoder : public ::protozero::TypedProtoDecoder</*MAX_FIELD_ID=*/3, /*HAS_NONPACKED_REPEATED_FIELDS=*/false> {
 public:
  ChromeMojoEventInfo_Decoder(const uint8_t* data, size_t len) : TypedProtoDecoder(data, len) {}
  explicit ChromeMojoEventInfo_Decoder(const std::string& raw) : TypedProtoDecoder(reinterpret_cast<const uint8_t*>(raw.data()), raw.size()) {}
  explicit ChromeMojoEventInfo_Decoder(const ::protozero::ConstBytes& raw) : TypedProtoDecoder(raw.data, raw.size) {}
  bool has_watcher_notify_interface_tag() const { return at<1>().valid(); }
  ::protozero::ConstChars watcher_notify_interface_tag() const { return at<1>().as_string(); }
  bool has_ipc_hash() const { return at<2>().valid(); }
  uint32_t ipc_hash() const { return at<2>().as_uint32(); }
  bool has_mojo_interface_tag() const { return at<3>().valid(); }
  ::protozero::ConstChars mojo_interface_tag() const { return at<3>().as_string(); }
};

class ChromeMojoEventInfo : public ::protozero::Message {
 public:
  using Decoder = ChromeMojoEventInfo_Decoder;
  enum : int32_t {
    kWatcherNotifyInterfaceTagFieldNumber = 1,
    kIpcHashFieldNumber = 2,
    kMojoInterfaceTagFieldNumber = 3,
  };

  using FieldMetadata_WatcherNotifyInterfaceTag =
    ::protozero::proto_utils::FieldMetadata<
      1,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kString,
      std::string,
      ChromeMojoEventInfo>;

  // Ceci n'est pas une pipe.
  // This is actually a variable of FieldMetadataHelper<FieldMetadata<...>>
  // type (and users are expected to use it as such, hence kCamelCase name).
  // It is declared as a function to keep protozero bindings header-only as
  // inline constexpr variables are not available until C++17 (while inline
  // functions are).
  // TODO(altimin): Use inline variable instead after adopting C++17.  
  static constexpr FieldMetadata_WatcherNotifyInterfaceTag kWatcherNotifyInterfaceTag() { return {}; }
  void set_watcher_notify_interface_tag(const char* data, size_t size) {
    AppendBytes(FieldMetadata_WatcherNotifyInterfaceTag::kFieldId, data, size);
  }
  void set_watcher_notify_interface_tag(std::string value) {
    static constexpr uint32_t field_id = FieldMetadata_WatcherNotifyInterfaceTag::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kString>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_IpcHash =
    ::protozero::proto_utils::FieldMetadata<
      2,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kUint32,
      uint32_t,
      ChromeMojoEventInfo>;

  // Ceci n'est pas une pipe.
  // This is actually a variable of FieldMetadataHelper<FieldMetadata<...>>
  // type (and users are expected to use it as such, hence kCamelCase name).
  // It is declared as a function to keep protozero bindings header-only as
  // inline constexpr variables are not available until C++17 (while inline
  // functions are).
  // TODO(altimin): Use inline variable instead after adopting C++17.  
  static constexpr FieldMetadata_IpcHash kIpcHash() { return {}; }
  void set_ipc_hash(uint32_t value) {
    static constexpr uint32_t field_id = FieldMetadata_IpcHash::kFieldId;
    // Call the appropriate protozero::Message::Append(field_id, ...)
    // method based on the type of the field.
    ::protozero::internal::FieldWriter<
      ::protozero::proto_utils::ProtoSchemaType::kUint32>
        ::Append(*this, field_id, value);
  }

  using FieldMetadata_MojoInterfaceTag =
    ::protozero::proto_utils::FieldMetadata<
      3,
      ::protozero::proto_utils::RepetitionType::kNotRepeated,
      ::protozero::proto_utils::ProtoSchemaType::kString,
      std::string,
      ChromeMojoEventInfo>;

  // Ceci n'est pas une pipe.
  // This is actually a variable of FieldMetadataHelper<FieldMetadata<...>>
  // type (and users are expected to use it as such, hence kCamelCase name).
  // It is declared as a function to keep protozero bindings header-only as
  // inline constexpr variables are not available until C++17 (while inline
  // functions are).
  // TODO(altimin): Use inline variable instead after adopting C++17.  
  static constexpr FieldMetadata_MojoInterfaceTag kMojoInterfaceTag() { return {}; }
  void set_mojo_interface_tag(const char* data, size_t size) {
    AppendBytes(FieldMetadata_MojoInterfaceTag::kFieldId, data, size);
  }
  void set_mojo_interface_tag(std::string value) {
    static constexpr uint32_t field_id = FieldMetadata_MojoInterfaceTag::kFieldId;
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
