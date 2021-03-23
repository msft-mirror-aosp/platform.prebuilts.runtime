// DO NOT EDIT. Autogenerated by Perfetto cppgen_plugin
#ifndef PERFETTO_PROTOS_PROTOS_PERFETTO_TRACE_TRACK_EVENT_CHROME_MOJO_EVENT_INFO_PROTO_CPP_H_
#define PERFETTO_PROTOS_PROTOS_PERFETTO_TRACE_TRACK_EVENT_CHROME_MOJO_EVENT_INFO_PROTO_CPP_H_

#include <stdint.h>
#include <bitset>
#include <vector>
#include <string>
#include <type_traits>

#include "perfetto/protozero/cpp_message_obj.h"
#include "perfetto/protozero/copyable_ptr.h"
#include "perfetto/base/export.h"

namespace perfetto {
namespace protos {
namespace gen {
class ChromeMojoEventInfo;
}  // namespace perfetto
}  // namespace protos
}  // namespace gen

namespace protozero {
class Message;
}  // namespace protozero

namespace perfetto {
namespace protos {
namespace gen {

class PERFETTO_EXPORT ChromeMojoEventInfo : public ::protozero::CppMessageObj {
 public:
  enum FieldNumbers {
    kWatcherNotifyInterfaceTagFieldNumber = 1,
    kIpcHashFieldNumber = 2,
    kMojoInterfaceTagFieldNumber = 3,
  };

  ChromeMojoEventInfo();
  ~ChromeMojoEventInfo() override;
  ChromeMojoEventInfo(ChromeMojoEventInfo&&) noexcept;
  ChromeMojoEventInfo& operator=(ChromeMojoEventInfo&&);
  ChromeMojoEventInfo(const ChromeMojoEventInfo&);
  ChromeMojoEventInfo& operator=(const ChromeMojoEventInfo&);
  bool operator==(const ChromeMojoEventInfo&) const;
  bool operator!=(const ChromeMojoEventInfo& other) const { return !(*this == other); }

  bool ParseFromArray(const void*, size_t) override;
  std::string SerializeAsString() const override;
  std::vector<uint8_t> SerializeAsArray() const override;
  void Serialize(::protozero::Message*) const;

  bool has_watcher_notify_interface_tag() const { return _has_field_[1]; }
  const std::string& watcher_notify_interface_tag() const { return watcher_notify_interface_tag_; }
  void set_watcher_notify_interface_tag(const std::string& value) { watcher_notify_interface_tag_ = value; _has_field_.set(1); }

  bool has_ipc_hash() const { return _has_field_[2]; }
  uint32_t ipc_hash() const { return ipc_hash_; }
  void set_ipc_hash(uint32_t value) { ipc_hash_ = value; _has_field_.set(2); }

  bool has_mojo_interface_tag() const { return _has_field_[3]; }
  const std::string& mojo_interface_tag() const { return mojo_interface_tag_; }
  void set_mojo_interface_tag(const std::string& value) { mojo_interface_tag_ = value; _has_field_.set(3); }

 private:
  std::string watcher_notify_interface_tag_{};
  uint32_t ipc_hash_{};
  std::string mojo_interface_tag_{};

  // Allows to preserve unknown protobuf fields for compatibility
  // with future versions of .proto files.
  std::string unknown_fields_;

  std::bitset<4> _has_field_{};
};

}  // namespace perfetto
}  // namespace protos
}  // namespace gen

#endif  // PERFETTO_PROTOS_PROTOS_PERFETTO_TRACE_TRACK_EVENT_CHROME_MOJO_EVENT_INFO_PROTO_CPP_H_
