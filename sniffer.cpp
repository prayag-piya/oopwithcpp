#include "sniffer.h"

packetsniffer::packetsniffer(std::string iface)
{
    this->interface = iface;
}

std::string packetsniffer::getInterface()
{
    return this->interface;  
}

void packetsniffer::setFilter(std::string filt, int pt)
{
    this->filter = filt;
    this->port = pt;
}

void packetsniffer::getFilter()
{
    std::cout << "Your protocol filter is set in " << this->filter << std::endl;
    if (this->port > 0)
    {
        std::cout << "Your prot filter is " << this->port << std::endl;
    }
    else
    {
        std::cout << "No port filter set"<<std::endl;
    }
}

double packetsniffer::setTime(int h, int m)
{
    double timeEstimation = (h * m) * 0.5;
    this->calculateDuration(timeEstimation);
    return 0.0;
}

void packetsniffer::calculateDuration(double timestamp)
{
    this->actualTime = timestamp * 2;
    std::cout << "The actual time is " << this->actualTime<<std::endl;
}