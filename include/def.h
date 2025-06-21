#ifndef DEF_H
#define DEF_H

#include "date.h"
#include "admin.h"
#include "airport.h"
#include "customer.h"
#include "domesticcities.h"
#include "domesticflights.h"
#include "food.h"
#include "foreigncities.h"
#include "foreignflights.h"
#include "tax.h"

bool init(Admin& admin, DomesticCities& DomesticCities_obj, ForeignCities& ForeignCities_obj){
    std::string UserName {}, PassWord {}, CountStr {}; 
    std::cout << "*** Please enter your user ***\n"
              << "Enter username: ";
    std::cin >> UserName;
    std::cout << "Enter password: ";
    std::cin >> PassWord;
    admin.setAdminName(UserName);
    admin.setAdminPassword(PassWord);

    std::cout << "\n*** Please enter your domestic cities ***\n";
    for (int i = 1; i <= 10; i++){
        std::cout << "Domestic City-" << i << ": ";
        std::cin >> CountStr;
        DomesticCities_obj.addCity(CountStr);
    }

    std::cout << "\n*** Please enter your foreign cities ***\n";
    for (int i = 1; i <= 10; i++){
        std::cout << "Foreign City-" << i << ": ";
        std::cin >> CountStr;
        ForeignCities_obj.addCity(CountStr);
    }

    return true;
}


#endif // !DEF_H