#include <iostream>
#include "def.h"




int main(){
    Admin admin;
    DomesticCities DomesticCities_obj;
    ForeignCities ForeignCities_obj;

    bool StartApp {true};

    // init(admin, DomesticCities_obj, ForeignCities_obj);

    /* Check all parameters with below command*/
    // std::cout << "Admin Name: " << admin.getAdminName() << '\n'
    //           << "Admin Password: " << admin.getAdminPassword() << '\n'
    //           << "Domestic Cities: " << DomesticCities_obj.getCities() << '\n'
    //           << "Foreign Cities: " << ForeignCities_obj.getCities() << '\n';
    /*****************************************/

    std::cout << "\n********************************************************\n"
            << "********************************************************\n"
            << "************ Welcome To Airport ************************\n"
            << "********************************************************\n"
            << "********************************************************\n";

    std::string user {}, password {};
    while (StartApp)
    {
        std::cout << "!!! Authenticate !!!\n";
        for (int i = 1; i <= 3; i++)
        {
            std::cout << "Username: ";
            std::cin >> user;
            std::cout << "Password: ";
            std::cin >> password;
            if (admin.authenticate(user, password))
                break;
            else
                std::cout << "Username or password does't match, try again (try = " << i << " )\n"; 
        }
        
    }
    

    return 0;
}