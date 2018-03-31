#ifndef GEARMAN_CLIENT_H
#define GEARMAN_CLIENT_H

#include <sstream>

#include "libgearman-1.0/gearman.h"


namespace statusengine {

	class GearmanClient {
	public:
		GearmanClient(std::ostream &os);
		~GearmanClient();

		void SendMessage(const std::string queue, const std::string message) const;
	private:
		std::ostream &ls;
		gearman_client_st *client;
	};
}

#endif // !GEARMAN_CLIENT_H
