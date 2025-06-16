#include <iostream>
#include <cstdint>
#include "domesticcities.h"

void DomesticCities::addCity(std::string& city){
    for (uint8_t i = 0;i < 10;i++){
        if (cities[i].empty()){
            cities[i] = city;
            return;
        }
    }
    std::cout << "ERROR: Cities full size!!!" << '\n';
}

std::string DomesticCities::getCities(){
    std::string all_city {};
    for (std::string k : cities){
        all_city += " ";
        all_city += k;
        all_city += " ";
    }
    return all_city;  
}