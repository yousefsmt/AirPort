#ifndef FOREIGN_CITY_H
#define FOREIGN_CITY_H

#include <iostream>

// Class: ForeignCities
class ForeignCities {
private:
    std::string cities[10];

public:
    void addCity(std::string& city);
    std::string getCities() ;
};

#endif // !FOREIGN_CITY_H