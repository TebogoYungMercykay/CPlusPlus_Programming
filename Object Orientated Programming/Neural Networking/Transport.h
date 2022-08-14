#ifndef Transport_H
#define Transport_H
#include "Message.h"
#include "Layer.h"
#include "Network.h"
#include <string>

class Transport: public Layer{
    public:
        std::string type;
        Transport();
        void execute(Message* message, bool sending = true);
        void configure(config);
    private:
        std::string port;
        std::string DestPort;
};
#endif