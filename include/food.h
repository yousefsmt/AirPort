#ifndef FOOD_H
#define FOOD_H

#include <iostream>

class Food {
private:
    std::string type; // Economic or Business
    std::string meal;

public:
    void setType(std::string& t);
    std::string getType() const;

    void setMeal(std::string& m);
    std::string getMeal() const;

    friend  std::ostream& operator<<(std::ostream& out,  Food& food);
    friend  std::istream& operator>>( std::istream& in, Food& food);
};

#endif // !FOOD_H