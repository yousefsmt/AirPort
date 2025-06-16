#ifndef ADMIN_H
#define ADMIN_H

#include <iostream>

class Admin {
private:
    std::string adminName;
    std::string adminPassword;

public:
    void setAdminName(std::string& name);
    std::string getAdminName() ;

    void setAdminPassword(std::string& password);
    std::string getAdminPassword() ;

    bool authenticate(std::string& name, std::string& password) ;
    void manageFlights();
};

#endif // !ADMIN_H