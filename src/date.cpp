#include <iostream>
#include "date.h"

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

std::ostream& operator<<(std::ostream& out, Date& date) {
    out << date.getYear() << '/' << date.getMonth() << '/' << date.getDay()
        << " " << date.getHour() << ':' << date.getMinute() << '\n';
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