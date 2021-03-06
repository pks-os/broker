#include "NagiosService.h"

namespace statusengine {
    NagiosService::NagiosService(const service *data) {
        SetData<>("host_name", data->host_name);
        SetData<>("description", data->description);
        SetData<>("plugin_output", EncodeString(data->plugin_output));
        SetData<>("long_plugin_output", EncodeString(data->long_plugin_output));
        SetData<>("event_handler", data->event_handler);
        SetData<>("perf_data", EncodeString(data->perf_data));
        SetData<>("check_command", data->check_command);
        SetData<>("check_period", data->check_period);
        SetData<>("current_state", data->current_state);
        SetData<>("has_been_checked", data->has_been_checked);
        SetData<>("should_be_scheduled", 1); // Nagios Compatibility
        SetData<>("current_attempt", data->current_attempt);
        SetData<>("max_attempts", data->max_attempts);
        SetData<>("last_check", data->last_check);
        SetData<>("next_check", data->next_check);
        SetData<>("check_type", data->check_type);
        SetData<>("last_state_change", data->last_state_change);
        SetData<>("last_hard_state_change", data->last_hard_state_change);
        SetData<>("last_hard_state", data->last_hard_state);
        SetData<>("last_time_ok", data->last_time_ok);
        SetData<>("last_time_warning", data->last_time_warning);
        SetData<>("last_time_critical", data->last_time_critical);
        SetData<>("last_time_unknown", data->last_time_unknown);
        SetData<>("state_type", data->state_type);
        SetData<>("last_notification", data->last_notification);
        SetData<>("next_notification", data->next_notification);
        SetData<>("no_more_notifications", data->no_more_notifications);
        SetData<>("notifications_enabled", data->notifications_enabled);
        SetData<>("problem_has_been_acknowledged", data->problem_has_been_acknowledged);
        SetData<>("acknowledgement_type", data->acknowledgement_type);
        SetData<>("current_notification_number", data->current_notification_number);
        SetData<>("accept_passive_checks", data->accept_passive_checks);
        SetData<>("event_handler_enabled", data->event_handler_enabled);
        SetData<>("checks_enabled", data->checks_enabled);
        SetData<>("flap_detection_enabled", data->flap_detection_enabled);
        SetData<>("is_flapping", data->is_flapping);
        SetData<>("percent_state_change", data->percent_state_change);
        SetData<>("latency", data->latency);
        SetData<>("execution_time", data->execution_time);
        SetData<>("scheduled_downtime_depth", data->scheduled_downtime_depth);
        SetData<>("process_performance_data", data->process_performance_data);
        SetData<>("obsess", data->obsess);
        SetData<>("modified_attributes", data->modified_attributes);
        SetData<>("check_interval", data->check_interval);
        SetData<>("retry_interval", data->retry_interval);
    }
} // namespace statusengine
