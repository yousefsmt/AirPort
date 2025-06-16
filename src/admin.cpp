#include <iostream>
#include "admin.h"


void Admin::setAdminName(std::string& name){
    adminName = name;
}
std::string Admin::getAdminName(){
    return adminName;
}

void Admin::setAdminPassword(std::string& password){
    adminPassword = password;
}
std::string Admin::getAdminPassword(){
    return adminPassword;
}

bool Admin::authenticate(std::string& name_t, std::string& password_t){
    return (adminName == name_t && adminPassword == password_t);
}
void Admin::manageFlights(){}