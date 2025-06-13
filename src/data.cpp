#include <iostream>
#include "data.h"

void Date::setDay(int input_d){
    day = input_d;
}
int Date::getDay() const {
    return day;
}

void Date::setMonth(int input_m){
    month = input_m;
}
int Date::getMonth() const {
    return month;
}

void Date::setYear(int input_y){
    year = input_y;
}
int Date::getYear() const {
    return year;
}

void Date::setHour(int input_h){
    hour = input_h;
}
int Date::getHour() const {
    return hour;
}

void Date::setMinute(int input_m){
    minute = input_m;
}
int Date::getMinute() const {
    return minute;
}

std::ostream& operator<<(std::ostream& out, const Date& date) {
    out << date.getDay() << '/' << date.getMonth() << '/' << date.getYear()
        << " " << date.getHour() << ':' << date.getMinute();
    return out;
}

std::istream& operator>>(std::istream& in, Date& date) {
    std::cout << "Enter day: ";
    in >> date.day;
    std::cout << "Enter month: ";
    in >> date.month;
    std::cout << "Enter year: ";
    in >> date.year;
    std::cout << "Enter hour: ";
    in >> date.hour;
    std::cout << "Enter minute: ";
    in >> date.minute;
    return in;
}

void Food::setType(std::string& input_t){
    type = input_t;
}
std::string Food::getType() const{
    return type;
}

void Food::setMeal(std::string& input_g){
    meal = input_g;
}
std::string Food::getMeal() const{
    return meal;
}

std::ostream& operator<<(std::ostream& out,  Food& food){
    out << "Food Type: " << food.getType() << "\nMeal Choice: " << food.getMeal() << '\n';
    return out;
}
std::istream& operator>>( std::istream& in, Food& food){
    std::cout << "Enter your type: ";
    in >> food.type;
    std::cout << "Enter your meal: ";
    in >> food.meal;
    return in;
}

void Airport::addFlight(std::string& fl){}
void Airport::removeFlight(std::string& fl){}

void Airport::displayFlights(){}

void DomesticFlights::setOriginCity(std::string& city){}
std::string DomesticFlights::getOriginCity(){}

void DomesticFlights::setDestinationCity(std::string& city){}
std::string DomesticFlights::getDestinationCity(){}

void DomesticFlights::setFlightDate( Date& date){}
Date DomesticFlights::getFlightDate(){}

void DomesticFlights::setPlaneName(std::string& name){}
std::string DomesticFlights::getPlaneName(){}

void DomesticFlights::setIsCancelled(bool cancelled){}
bool DomesticFlights::getIsCancelled(){}

void DomesticCities::addCity(std::string& city){}
std::string DomesticCities::getCities(){}

void ForeignFlights::setOriginCity(std::string& city){}
std::string ForeignFlights::getOriginCity(){}

void ForeignFlights::setDestinationCity(std::string& city){}
std::string ForeignFlights::getDestinationCity(){}

void ForeignFlights::setFlightDate(Date& date){}
Date ForeignFlights::getFlightDate(){}

void ForeignFlights::setPlaneName(std::string& name){}
std::string ForeignFlights::getPlaneName(){}

void ForeignFlights::setIsCancelled(bool cancelled){}
bool ForeignFlights::getIsCancelled(){}

void ForeignCities::addCity(std::string& city){}
std::string ForeignCities::getCities(){}

void Customer::setName(std::string& n){}
std::string Customer::getName(){}

void Customer::setBalance(double b){}
double Customer::getBalance(){}

void Customer::addPurchasedFlight(std::string& flight){}
std::string Customer::getPurchasedFlights(){}

void Customer::refundTicket(std::string& flight){}

void Admin::setAdminName(std::string& name){}
std::string Admin::getAdminName(){}

void Admin::setAdminPassword(std::string& password){}
std::string Admin::getAdminPassword(){}

bool Admin::authenticate(std::string& name, std::string& password){}
void Admin::manageFlights(){}

double Tax::calculateTax(double price, double percentage){}