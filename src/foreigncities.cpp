#include <iostream>
#include <cstdint>
#include "foreigncities.h"

void ForeignCities::addCity(std::string& city){
    for (int i = 0; i < 10; i++)
    {
        if(cities[i].empty()){
            cities[i] = city;
            return;
        }
    }
    std::cout << "ERROR: Cities don't enough space!!!!\n";
}

std::string ForeignCities::getCities(){
    std::string all_city {};
    for (std::string k : cities){
        all_city += " ";
        all_city += k;
        all_city += " ";
    }
    return all_city;  
}