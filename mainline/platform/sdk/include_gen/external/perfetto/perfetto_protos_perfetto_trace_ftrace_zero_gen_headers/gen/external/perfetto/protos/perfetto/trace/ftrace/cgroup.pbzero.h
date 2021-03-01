// Autogenerated by the ProtoZero compiler plugin. DO NOT EDIT.

#ifndef PERFETTO_PROTOS_PROTOS_PERFETTO_TRACE_FTRACE_CGROUP_PROTO_H_
#define PERFETTO_PROTOS_PROTOS_PERFETTO_TRACE_FTRACE_CGROUP_PROTO_H_

#include <stddef.h>
#include <stdint.h>

#include "perfetto/protozero/message.h"
#include "perfetto/protozero/packed_repeated_fields.h"
#include "perfetto/protozero/proto_decoder.h"
#include "perfetto/protozero/proto_utils.h"

namespace perfetto {
namespace protos {
namespace pbzero {


class CgroupSetupRootFtraceEvent_Decoder : public ::protozero::TypedProtoDecoder</*MAX_FIELD_ID=*/3, /*HAS_NONPACKED_REPEATED_FIELDS=*/false> {
 public:
  CgroupSetupRootFtraceEvent_Decoder(const uint8_t* data, size_t len) : TypedProtoDecoder(data, len) {}
  explicit CgroupSetupRootFtraceEvent_Decoder(const std::string& raw) : TypedProtoDecoder(reinterpret_cast<const uint8_t*>(raw.data()), raw.size()) {}
  explicit CgroupSetupRootFtraceEvent_Decoder(const ::protozero::ConstBytes& raw) : TypedProtoDecoder(raw.data, raw.size) {}
  bool has_root() const { return at<1>().valid(); }
  int32_t root() const { return at<1>().as_int32(); }
  bool has_ss_mask() const { return at<2>().valid(); }
  uint32_t ss_mask() const { return at<2>().as_uint32(); }
  bool has_name() const { return at<3>().valid(); }
  ::protozero::ConstChars name() const { return at<3>().as_string(); }
};

class CgroupSetupRootFtraceEvent : public ::protozero::Message {
 public:
  using Decoder = CgroupSetupRootFtraceEvent_Decoder;
  enum : int32_t {
    kRootFieldNumber = 1,
    kSsMaskFieldNumber = 2,
    kNameFieldNumber = 3,
  };
  void set_root(int32_t value) {
    AppendVarInt(1, value);
  }
  void set_ss_mask(uint32_t value) {
    AppendVarInt(2, value);
  }
  void set_name(const std::string& value) {
    AppendBytes(3, value.data(), value.size());
  }
  void set_name(const char* data, size_t size) {
    AppendBytes(3, data, size);
  }
};

class CgroupRenameFtraceEvent_Decoder : public ::protozero::TypedProtoDecoder</*MAX_FIELD_ID=*/3, /*HAS_NONPACKED_REPEATED_FIELDS=*/false> {
 public:
  CgroupRenameFtraceEvent_Decoder(const uint8_t* data, size_t len) : TypedProtoDecoder(data, len) {}
  explicit CgroupRenameFtraceEvent_Decoder(const std::string& raw) : TypedProtoDecoder(reinterpret_cast<const uint8_t*>(raw.data()), raw.size()) {}
  explicit CgroupRenameFtraceEvent_Decoder(const ::protozero::ConstBytes& raw) : TypedProtoDecoder(raw.data, raw.size) {}
  bool has_root() const { return at<1>().valid(); }
  int32_t root() const { return at<1>().as_int32(); }
  bool has_id() const { return at<2>().valid(); }
  int32_t id() const { return at<2>().as_int32(); }
  bool has_cname() const { return at<3>().valid(); }
  ::protozero::ConstChars cname() const { return at<3>().as_string(); }
};

class CgroupRenameFtraceEvent : public ::protozero::Message {
 public:
  using Decoder = CgroupRenameFtraceEvent_Decoder;
  enum : int32_t {
    kRootFieldNumber = 1,
    kIdFieldNumber = 2,
    kCnameFieldNumber = 3,
  };
  void set_root(int32_t value) {
    AppendVarInt(1, value);
  }
  void set_id(int32_t value) {
    AppendVarInt(2, value);
  }
  void set_cname(const std::string& value) {
    AppendBytes(3, value.data(), value.size());
  }
  void set_cname(const char* data, size_t size) {
    AppendBytes(3, data, size);
  }
};

class CgroupReleaseFtraceEvent_Decoder : public ::protozero::TypedProtoDecoder</*MAX_FIELD_ID=*/3, /*HAS_NONPACKED_REPEATED_FIELDS=*/false> {
 public:
  CgroupReleaseFtraceEvent_Decoder(const uint8_t* data, size_t len) : TypedProtoDecoder(data, len) {}
  explicit CgroupReleaseFtraceEvent_Decoder(const std::string& raw) : TypedProtoDecoder(reinterpret_cast<const uint8_t*>(raw.data()), raw.size()) {}
  explicit CgroupReleaseFtraceEvent_Decoder(const ::protozero::ConstBytes& raw) : TypedProtoDecoder(raw.data, raw.size) {}
  bool has_root() const { return at<1>().valid(); }
  int32_t root() const { return at<1>().as_int32(); }
  bool has_id() const { return at<2>().valid(); }
  int32_t id() const { return at<2>().as_int32(); }
  bool has_cname() const { return at<3>().valid(); }
  ::protozero::ConstChars cname() const { return at<3>().as_string(); }
};

class CgroupReleaseFtraceEvent : public ::protozero::Message {
 public:
  using Decoder = CgroupReleaseFtraceEvent_Decoder;
  enum : int32_t {
    kRootFieldNumber = 1,
    kIdFieldNumber = 2,
    kCnameFieldNumber = 3,
  };
  void set_root(int32_t value) {
    AppendVarInt(1, value);
  }
  void set_id(int32_t value) {
    AppendVarInt(2, value);
  }
  void set_cname(const std::string& value) {
    AppendBytes(3, value.data(), value.size());
  }
  void set_cname(const char* data, size_t size) {
    AppendBytes(3, data, size);
  }
};

class CgroupDestroyRootFtraceEvent_Decoder : public ::protozero::TypedProtoDecoder</*MAX_FIELD_ID=*/3, /*HAS_NONPACKED_REPEATED_FIELDS=*/false> {
 public:
  CgroupDestroyRootFtraceEvent_Decoder(const uint8_t* data, size_t len) : TypedProtoDecoder(data, len) {}
  explicit CgroupDestroyRootFtraceEvent_Decoder(const std::string& raw) : TypedProtoDecoder(reinterpret_cast<const uint8_t*>(raw.data()), raw.size()) {}
  explicit CgroupDestroyRootFtraceEvent_Decoder(const ::protozero::ConstBytes& raw) : TypedProtoDecoder(raw.data, raw.size) {}
  bool has_root() const { return at<1>().valid(); }
  int32_t root() const { return at<1>().as_int32(); }
  bool has_ss_mask() const { return at<2>().valid(); }
  uint32_t ss_mask() const { return at<2>().as_uint32(); }
  bool has_name() const { return at<3>().valid(); }
  ::protozero::ConstChars name() const { return at<3>().as_string(); }
};

class CgroupDestroyRootFtraceEvent : public ::protozero::Message {
 public:
  using Decoder = CgroupDestroyRootFtraceEvent_Decoder;
  enum : int32_t {
    kRootFieldNumber = 1,
    kSsMaskFieldNumber = 2,
    kNameFieldNumber = 3,
  };
  void set_root(int32_t value) {
    AppendVarInt(1, value);
  }
  void set_ss_mask(uint32_t value) {
    AppendVarInt(2, value);
  }
  void set_name(const std::string& value) {
    AppendBytes(3, value.data(), value.size());
  }
  void set_name(const char* data, size_t size) {
    AppendBytes(3, data, size);
  }
};

class CgroupTransferTasksFtraceEvent_Decoder : public ::protozero::TypedProtoDecoder</*MAX_FIELD_ID=*/5, /*HAS_NONPACKED_REPEATED_FIELDS=*/false> {
 public:
  CgroupTransferTasksFtraceEvent_Decoder(const uint8_t* data, size_t len) : TypedProtoDecoder(data, len) {}
  explicit CgroupTransferTasksFtraceEvent_Decoder(const std::string& raw) : TypedProtoDecoder(reinterpret_cast<const uint8_t*>(raw.data()), raw.size()) {}
  explicit CgroupTransferTasksFtraceEvent_Decoder(const ::protozero::ConstBytes& raw) : TypedProtoDecoder(raw.data, raw.size) {}
  bool has_dst_root() const { return at<1>().valid(); }
  int32_t dst_root() const { return at<1>().as_int32(); }
  bool has_dst_id() const { return at<2>().valid(); }
  int32_t dst_id() const { return at<2>().as_int32(); }
  bool has_pid() const { return at<3>().valid(); }
  int32_t pid() const { return at<3>().as_int32(); }
  bool has_comm() const { return at<4>().valid(); }
  ::protozero::ConstChars comm() const { return at<4>().as_string(); }
  bool has_cname() const { return at<5>().valid(); }
  ::protozero::ConstChars cname() const { return at<5>().as_string(); }
};

class CgroupTransferTasksFtraceEvent : public ::protozero::Message {
 public:
  using Decoder = CgroupTransferTasksFtraceEvent_Decoder;
  enum : int32_t {
    kDstRootFieldNumber = 1,
    kDstIdFieldNumber = 2,
    kPidFieldNumber = 3,
    kCommFieldNumber = 4,
    kCnameFieldNumber = 5,
  };
  void set_dst_root(int32_t value) {
    AppendVarInt(1, value);
  }
  void set_dst_id(int32_t value) {
    AppendVarInt(2, value);
  }
  void set_pid(int32_t value) {
    AppendVarInt(3, value);
  }
  void set_comm(const std::string& value) {
    AppendBytes(4, value.data(), value.size());
  }
  void set_comm(const char* data, size_t size) {
    AppendBytes(4, data, size);
  }
  void set_cname(const std::string& value) {
    AppendBytes(5, value.data(), value.size());
  }
  void set_cname(const char* data, size_t size) {
    AppendBytes(5, data, size);
  }
};

class CgroupRmdirFtraceEvent_Decoder : public ::protozero::TypedProtoDecoder</*MAX_FIELD_ID=*/3, /*HAS_NONPACKED_REPEATED_FIELDS=*/false> {
 public:
  CgroupRmdirFtraceEvent_Decoder(const uint8_t* data, size_t len) : TypedProtoDecoder(data, len) {}
  explicit CgroupRmdirFtraceEvent_Decoder(const std::string& raw) : TypedProtoDecoder(reinterpret_cast<const uint8_t*>(raw.data()), raw.size()) {}
  explicit CgroupRmdirFtraceEvent_Decoder(const ::protozero::ConstBytes& raw) : TypedProtoDecoder(raw.data, raw.size) {}
  bool has_root() const { return at<1>().valid(); }
  int32_t root() const { return at<1>().as_int32(); }
  bool has_id() const { return at<2>().valid(); }
  int32_t id() const { return at<2>().as_int32(); }
  bool has_cname() const { return at<3>().valid(); }
  ::protozero::ConstChars cname() const { return at<3>().as_string(); }
};

class CgroupRmdirFtraceEvent : public ::protozero::Message {
 public:
  using Decoder = CgroupRmdirFtraceEvent_Decoder;
  enum : int32_t {
    kRootFieldNumber = 1,
    kIdFieldNumber = 2,
    kCnameFieldNumber = 3,
  };
  void set_root(int32_t value) {
    AppendVarInt(1, value);
  }
  void set_id(int32_t value) {
    AppendVarInt(2, value);
  }
  void set_cname(const std::string& value) {
    AppendBytes(3, value.data(), value.size());
  }
  void set_cname(const char* data, size_t size) {
    AppendBytes(3, data, size);
  }
};

class CgroupRemountFtraceEvent_Decoder : public ::protozero::TypedProtoDecoder</*MAX_FIELD_ID=*/3, /*HAS_NONPACKED_REPEATED_FIELDS=*/false> {
 public:
  CgroupRemountFtraceEvent_Decoder(const uint8_t* data, size_t len) : TypedProtoDecoder(data, len) {}
  explicit CgroupRemountFtraceEvent_Decoder(const std::string& raw) : TypedProtoDecoder(reinterpret_cast<const uint8_t*>(raw.data()), raw.size()) {}
  explicit CgroupRemountFtraceEvent_Decoder(const ::protozero::ConstBytes& raw) : TypedProtoDecoder(raw.data, raw.size) {}
  bool has_root() const { return at<1>().valid(); }
  int32_t root() const { return at<1>().as_int32(); }
  bool has_ss_mask() const { return at<2>().valid(); }
  uint32_t ss_mask() const { return at<2>().as_uint32(); }
  bool has_name() const { return at<3>().valid(); }
  ::protozero::ConstChars name() const { return at<3>().as_string(); }
};

class CgroupRemountFtraceEvent : public ::protozero::Message {
 public:
  using Decoder = CgroupRemountFtraceEvent_Decoder;
  enum : int32_t {
    kRootFieldNumber = 1,
    kSsMaskFieldNumber = 2,
    kNameFieldNumber = 3,
  };
  void set_root(int32_t value) {
    AppendVarInt(1, value);
  }
  void set_ss_mask(uint32_t value) {
    AppendVarInt(2, value);
  }
  void set_name(const std::string& value) {
    AppendBytes(3, value.data(), value.size());
  }
  void set_name(const char* data, size_t size) {
    AppendBytes(3, data, size);
  }
};

class CgroupMkdirFtraceEvent_Decoder : public ::protozero::TypedProtoDecoder</*MAX_FIELD_ID=*/3, /*HAS_NONPACKED_REPEATED_FIELDS=*/false> {
 public:
  CgroupMkdirFtraceEvent_Decoder(const uint8_t* data, size_t len) : TypedProtoDecoder(data, len) {}
  explicit CgroupMkdirFtraceEvent_Decoder(const std::string& raw) : TypedProtoDecoder(reinterpret_cast<const uint8_t*>(raw.data()), raw.size()) {}
  explicit CgroupMkdirFtraceEvent_Decoder(const ::protozero::ConstBytes& raw) : TypedProtoDecoder(raw.data, raw.size) {}
  bool has_root() const { return at<1>().valid(); }
  int32_t root() const { return at<1>().as_int32(); }
  bool has_id() const { return at<2>().valid(); }
  int32_t id() const { return at<2>().as_int32(); }
  bool has_cname() const { return at<3>().valid(); }
  ::protozero::ConstChars cname() const { return at<3>().as_string(); }
};

class CgroupMkdirFtraceEvent : public ::protozero::Message {
 public:
  using Decoder = CgroupMkdirFtraceEvent_Decoder;
  enum : int32_t {
    kRootFieldNumber = 1,
    kIdFieldNumber = 2,
    kCnameFieldNumber = 3,
  };
  void set_root(int32_t value) {
    AppendVarInt(1, value);
  }
  void set_id(int32_t value) {
    AppendVarInt(2, value);
  }
  void set_cname(const std::string& value) {
    AppendBytes(3, value.data(), value.size());
  }
  void set_cname(const char* data, size_t size) {
    AppendBytes(3, data, size);
  }
};

class CgroupAttachTaskFtraceEvent_Decoder : public ::protozero::TypedProtoDecoder</*MAX_FIELD_ID=*/5, /*HAS_NONPACKED_REPEATED_FIELDS=*/false> {
 public:
  CgroupAttachTaskFtraceEvent_Decoder(const uint8_t* data, size_t len) : TypedProtoDecoder(data, len) {}
  explicit CgroupAttachTaskFtraceEvent_Decoder(const std::string& raw) : TypedProtoDecoder(reinterpret_cast<const uint8_t*>(raw.data()), raw.size()) {}
  explicit CgroupAttachTaskFtraceEvent_Decoder(const ::protozero::ConstBytes& raw) : TypedProtoDecoder(raw.data, raw.size) {}
  bool has_dst_root() const { return at<1>().valid(); }
  int32_t dst_root() const { return at<1>().as_int32(); }
  bool has_dst_id() const { return at<2>().valid(); }
  int32_t dst_id() const { return at<2>().as_int32(); }
  bool has_pid() const { return at<3>().valid(); }
  int32_t pid() const { return at<3>().as_int32(); }
  bool has_comm() const { return at<4>().valid(); }
  ::protozero::ConstChars comm() const { return at<4>().as_string(); }
  bool has_cname() const { return at<5>().valid(); }
  ::protozero::ConstChars cname() const { return at<5>().as_string(); }
};

class CgroupAttachTaskFtraceEvent : public ::protozero::Message {
 public:
  using Decoder = CgroupAttachTaskFtraceEvent_Decoder;
  enum : int32_t {
    kDstRootFieldNumber = 1,
    kDstIdFieldNumber = 2,
    kPidFieldNumber = 3,
    kCommFieldNumber = 4,
    kCnameFieldNumber = 5,
  };
  void set_dst_root(int32_t value) {
    AppendVarInt(1, value);
  }
  void set_dst_id(int32_t value) {
    AppendVarInt(2, value);
  }
  void set_pid(int32_t value) {
    AppendVarInt(3, value);
  }
  void set_comm(const std::string& value) {
    AppendBytes(4, value.data(), value.size());
  }
  void set_comm(const char* data, size_t size) {
    AppendBytes(4, data, size);
  }
  void set_cname(const std::string& value) {
    AppendBytes(5, value.data(), value.size());
  }
  void set_cname(const char* data, size_t size) {
    AppendBytes(5, data, size);
  }
};

} // Namespace.
} // Namespace.
} // Namespace.
#endif  // Include guard.
