#include "sniffer.h"

int main()
{
    packetsniffer pkt("en0");
    std::cout << "Interface is "<< pkt.getInterface() << std::endl;
    pkt.setFilter("TCP");
    pkt.getFilter();
    pkt.setTime(7, 3);
}