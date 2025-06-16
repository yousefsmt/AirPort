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
    std::string call_back {};
    for (uint8_t i = 0; i < 10; i++)
    {
        if (!cities[i].empty()){
            call_back += " ";
            call_back += cities[i];
            call_back += " ";
        }          
        else
            return call_back;
    }
}