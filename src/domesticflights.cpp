#include <iostream>
#include "domesticflights.h"
#include "data.h"

void DomesticFlights::setOriginCity(std::string& city){
    originCity = city;
}
std::string DomesticFlights::getOriginCity(){
    return originCity;
}

void DomesticFlights::setDestinationCity(std::string& city){
    destinationCity = city;
}
std::string DomesticFlights::getDestinationCity(){
    return destinationCity;
}

void DomesticFlights::setFlightDate(Date& date){
    std::cin >> date;
}
Date DomesticFlights::getFlightDate(){
    return flightDate;
}

void DomesticFlights::setPlaneName(std::string& name){
    planeName = name;
}
std::string DomesticFlights::getPlaneName(){
    return planeName;
}

void DomesticFlights::setIsCancelled(bool cancelled){
    isCancelled = cancelled;
}
bool DomesticFlights::getIsCancelled(){
    return isCancelled;
}