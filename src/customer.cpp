#include <iostream>
#include "customer.h"

void Customer::setName(std::string& n){
    name = n;
}
std::string Customer::getName(){
    return name;
}

void Customer::setBalance(double b){
    balance = b;
}
double Customer::getBalance(){
    return balance;
}

void Customer::addPurchasedFlight(std::string& flight){
    purchasedFlights = flight;
}
std::string Customer::getPurchasedFlights(){
    return purchasedFlights;
}

void Customer::refundTicket(std::string& flight){}