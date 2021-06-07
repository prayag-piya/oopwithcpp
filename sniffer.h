#include <iostream>
#include <string>

class packetsniffer
{
    private:
        std::string interface;
        std::string filter;
        int port;
        double actualTime;
        void calculateDuration(double timestamp);
    public:
        packetsniffer(std::string iface);
        std::string getInterface();
        void setFilter(std::string filter, int port=0);
        void getFilter();
        double setTime(int hour, int min);
};