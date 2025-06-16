#ifndef DOMESTIC_CITIES
#define DOMESTIC_CITIES

#include <iostream>

class DomesticCities {
private:
    std::string cities[10];

public:
    void addCity(std::string& city);
    std::string getCities() ;
};

#endif // !DOMESTIC_CITIES