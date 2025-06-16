#ifndef DOMESTIC_FLIGHTS
#define DOMESTIC_FLIGHTS

#include <iostream>
#include "airport.h"
#include "date.h"

class DomesticFlights : public Airport {
private:
    std::string originCity;
    std::string destinationCity;
    Date flightDate;
    std::string planeName;
    bool isCancelled;

public:
    void setOriginCity(std::string& city);
    std::string getOriginCity() ;

    void setDestinationCity(std::string& city);
    std::string getDestinationCity() ;

    void setFlightDate( Date& date);
    Date getFlightDate() ;

    void setPlaneName(std::string& name);
    std::string getPlaneName() ;

    void setIsCancelled(bool cancelled);
    bool getIsCancelled() ;
};

#endif // !DOMESTIC_FLIGHTS