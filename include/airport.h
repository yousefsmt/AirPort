#ifndef AIRPORT
#define AIRPORT

#include <iostream>

class Airport {
protected:
    std::string domesticFlights;
    std::string foreignFlights;

public:
    virtual void addFlight(std::string& flight);
    virtual void removeFlight(std::string& flight);
    virtual void displayFlights();
};

#endif // !AIRPORT