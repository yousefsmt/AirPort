#include <iostream>
#include <cstdint>
#include "foreignflights.h"
#include "date.h"

void ForeignFlights::setOriginCity(std::string& city){
    originCity = city;
}
std::string ForeignFlights::getOriginCity(){
    return originCity;
}

void ForeignFlights::setDestinationCity(std::string& city){
    destinationCity = city;
}
std::string ForeignFlights::getDestinationCity(){
    return destinationCity;
}

void ForeignFlights::setFlightDate(Date& date){
    flightDate = date;
}
Date ForeignFlights::getFlightDate(){
    return flightDate;
}

void ForeignFlights::setPlaneName(std::string& name){
    planeName = name;
}
std::string ForeignFlights::getPlaneName(){
    return planeName;
}

void ForeignFlights::setIsCancelled(bool cancelled){
    isCancelled = cancelled;
}
bool ForeignFlights::getIsCancelled(){
    return isCancelled;
}