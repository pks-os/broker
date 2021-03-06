#include "NagiosContactStatusData.h"

namespace statusengine {

    NagiosContactStatusData::NagiosContactStatusData(const nebstruct_contact_status_data *contactStatusData) {
        SetData<>("type", contactStatusData->type);
        SetData<>("flags", contactStatusData->flags);
        SetData<>("attr", contactStatusData->attr);
        SetData<>("timestamp", contactStatusData->timestamp.tv_sec);

        auto tmpContact = reinterpret_cast<contact *>(contactStatusData->object_ptr);

        NagiosObject contactstatus;
        contactstatus.SetData<>("contact_name", tmpContact->name);
        contactstatus.SetData<>("host_notifications_enabled", tmpContact->host_notifications_enabled);
        contactstatus.SetData<>("service_notifications_enabled", tmpContact->service_notifications_enabled);
        contactstatus.SetData<>("last_host_notification", tmpContact->last_host_notification);
        contactstatus.SetData<>("last_service_notification", tmpContact->last_service_notification);
        contactstatus.SetData<>("modified_attributes", tmpContact->modified_attributes);
        contactstatus.SetData<>("modified_host_attributes", tmpContact->modified_host_attributes);
        contactstatus.SetData<>("modified_service_attributes", tmpContact->modified_service_attributes);

        SetData<>("contactstatus", &contactstatus);
    }
} // namespace statusengine
