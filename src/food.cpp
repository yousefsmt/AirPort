#include <iostream>
#include "food.h"

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