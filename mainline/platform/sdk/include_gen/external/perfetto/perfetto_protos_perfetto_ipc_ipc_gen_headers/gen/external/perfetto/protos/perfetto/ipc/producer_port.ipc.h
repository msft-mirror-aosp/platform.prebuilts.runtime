// DO NOT EDIT. Autogenerated by Perfetto IPC
#ifndef PERFETTO_PROTOS_PROTOS_PERFETTO_IPC_PRODUCER_PORT_PROTO_H_
#define PERFETTO_PROTOS_PROTOS_PERFETTO_IPC_PRODUCER_PORT_PROTO_H_

#include "perfetto/ext/ipc/deferred.h"
#include "perfetto/ext/ipc/service.h"
#include "perfetto/ext/ipc/service_descriptor.h"
#include "perfetto/ext/ipc/service_proxy.h"

#include "protos/perfetto/ipc/producer_port.gen.h"
#include "protos/perfetto/common/commit_data_request.gen.h"
#include "protos/perfetto/config/data_source_config.gen.h"
#include "protos/perfetto/common/data_source_descriptor.gen.h"

namespace perfetto {
namespace protos {
namespace gen {

class ProducerPort : public ::perfetto::ipc::Service {
 private:
  static ::perfetto::ipc::ServiceDescriptor* NewDescriptor();

 public:
  ~ProducerPort() override;

  static const ::perfetto::ipc::ServiceDescriptor& GetDescriptorStatic();

  // Service implementation.
  const ::perfetto::ipc::ServiceDescriptor& GetDescriptor() override;

  // Methods from the .proto file
  using DeferredInitializeConnectionResponse = ::perfetto::ipc::Deferred<InitializeConnectionResponse>;
  virtual void InitializeConnection(const InitializeConnectionRequest&, DeferredInitializeConnectionResponse) = 0;

  using DeferredRegisterDataSourceResponse = ::perfetto::ipc::Deferred<RegisterDataSourceResponse>;
  virtual void RegisterDataSource(const RegisterDataSourceRequest&, DeferredRegisterDataSourceResponse) = 0;

  using DeferredUnregisterDataSourceResponse = ::perfetto::ipc::Deferred<UnregisterDataSourceResponse>;
  virtual void UnregisterDataSource(const UnregisterDataSourceRequest&, DeferredUnregisterDataSourceResponse) = 0;

  using DeferredCommitDataResponse = ::perfetto::ipc::Deferred<CommitDataResponse>;
  virtual void CommitData(const CommitDataRequest&, DeferredCommitDataResponse) = 0;

  using DeferredGetAsyncCommandResponse = ::perfetto::ipc::Deferred<GetAsyncCommandResponse>;
  virtual void GetAsyncCommand(const GetAsyncCommandRequest&, DeferredGetAsyncCommandResponse) = 0;

  using DeferredRegisterTraceWriterResponse = ::perfetto::ipc::Deferred<RegisterTraceWriterResponse>;
  virtual void RegisterTraceWriter(const RegisterTraceWriterRequest&, DeferredRegisterTraceWriterResponse) = 0;

  using DeferredUnregisterTraceWriterResponse = ::perfetto::ipc::Deferred<UnregisterTraceWriterResponse>;
  virtual void UnregisterTraceWriter(const UnregisterTraceWriterRequest&, DeferredUnregisterTraceWriterResponse) = 0;

  using DeferredNotifyDataSourceStartedResponse = ::perfetto::ipc::Deferred<NotifyDataSourceStartedResponse>;
  virtual void NotifyDataSourceStarted(const NotifyDataSourceStartedRequest&, DeferredNotifyDataSourceStartedResponse) = 0;

  using DeferredNotifyDataSourceStoppedResponse = ::perfetto::ipc::Deferred<NotifyDataSourceStoppedResponse>;
  virtual void NotifyDataSourceStopped(const NotifyDataSourceStoppedRequest&, DeferredNotifyDataSourceStoppedResponse) = 0;

  using DeferredActivateTriggersResponse = ::perfetto::ipc::Deferred<ActivateTriggersResponse>;
  virtual void ActivateTriggers(const ActivateTriggersRequest&, DeferredActivateTriggersResponse) = 0;

  using DeferredSyncResponse = ::perfetto::ipc::Deferred<SyncResponse>;
  virtual void Sync(const SyncRequest&, DeferredSyncResponse) = 0;

  using DeferredUpdateDataSourceResponse = ::perfetto::ipc::Deferred<UpdateDataSourceResponse>;
  virtual void UpdateDataSource(const UpdateDataSourceRequest&, DeferredUpdateDataSourceResponse) = 0;

};


class ProducerPortProxy : public ::perfetto::ipc::ServiceProxy {
 public:
   explicit ProducerPortProxy(::perfetto::ipc::ServiceProxy::EventListener*);
   ~ProducerPortProxy() override;

  // ServiceProxy implementation.
  const ::perfetto::ipc::ServiceDescriptor& GetDescriptor() override;

  // Methods from the .proto file
  using DeferredInitializeConnectionResponse = ::perfetto::ipc::Deferred<InitializeConnectionResponse>;
  void InitializeConnection(const InitializeConnectionRequest&, DeferredInitializeConnectionResponse, int fd = -1);

  using DeferredRegisterDataSourceResponse = ::perfetto::ipc::Deferred<RegisterDataSourceResponse>;
  void RegisterDataSource(const RegisterDataSourceRequest&, DeferredRegisterDataSourceResponse, int fd = -1);

  using DeferredUnregisterDataSourceResponse = ::perfetto::ipc::Deferred<UnregisterDataSourceResponse>;
  void UnregisterDataSource(const UnregisterDataSourceRequest&, DeferredUnregisterDataSourceResponse, int fd = -1);

  using DeferredCommitDataResponse = ::perfetto::ipc::Deferred<CommitDataResponse>;
  void CommitData(const CommitDataRequest&, DeferredCommitDataResponse, int fd = -1);

  using DeferredGetAsyncCommandResponse = ::perfetto::ipc::Deferred<GetAsyncCommandResponse>;
  void GetAsyncCommand(const GetAsyncCommandRequest&, DeferredGetAsyncCommandResponse, int fd = -1);

  using DeferredRegisterTraceWriterResponse = ::perfetto::ipc::Deferred<RegisterTraceWriterResponse>;
  void RegisterTraceWriter(const RegisterTraceWriterRequest&, DeferredRegisterTraceWriterResponse, int fd = -1);

  using DeferredUnregisterTraceWriterResponse = ::perfetto::ipc::Deferred<UnregisterTraceWriterResponse>;
  void UnregisterTraceWriter(const UnregisterTraceWriterRequest&, DeferredUnregisterTraceWriterResponse, int fd = -1);

  using DeferredNotifyDataSourceStartedResponse = ::perfetto::ipc::Deferred<NotifyDataSourceStartedResponse>;
  void NotifyDataSourceStarted(const NotifyDataSourceStartedRequest&, DeferredNotifyDataSourceStartedResponse, int fd = -1);

  using DeferredNotifyDataSourceStoppedResponse = ::perfetto::ipc::Deferred<NotifyDataSourceStoppedResponse>;
  void NotifyDataSourceStopped(const NotifyDataSourceStoppedRequest&, DeferredNotifyDataSourceStoppedResponse, int fd = -1);

  using DeferredActivateTriggersResponse = ::perfetto::ipc::Deferred<ActivateTriggersResponse>;
  void ActivateTriggers(const ActivateTriggersRequest&, DeferredActivateTriggersResponse, int fd = -1);

  using DeferredSyncResponse = ::perfetto::ipc::Deferred<SyncResponse>;
  void Sync(const SyncRequest&, DeferredSyncResponse, int fd = -1);

  using DeferredUpdateDataSourceResponse = ::perfetto::ipc::Deferred<UpdateDataSourceResponse>;
  void UpdateDataSource(const UpdateDataSourceRequest&, DeferredUpdateDataSourceResponse, int fd = -1);

};

}  // namespace perfetto
}  // namespace protos
}  // namespace gen

#endif  // PERFETTO_PROTOS_PROTOS_PERFETTO_IPC_PRODUCER_PORT_PROTO_H_
