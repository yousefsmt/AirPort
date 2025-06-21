#include <iostream>
#include "airport.h"

void Airport::addFlight(std::string& fl){
    

}
void Airport::removeFlight(std::string& fl){}

void Airport::displayFlights(){
    std::cout << "Domestic Flights:\n" << "   "
              << domesticFlights << "   \n"
              << "Foreign Flights:\n" << "   \n"
              << foreignFlights << '\n';
}