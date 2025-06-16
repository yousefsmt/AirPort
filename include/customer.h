#ifndef CUSTOMER_H
#define CUSTOMER_H

#include <iostream>

// Class: Customer
class Customer {
private:
    std::string name;
    double balance;
    std::string purchasedFlights;

public:
    void setName(std::string& n);
    std::string getName() ;

    void setBalance(double b);
    double getBalance() ;

    void addPurchasedFlight(std::string& flight);
    std::string getPurchasedFlights() ;

    void refundTicket(std::string& flight);
};

#endif // !CUSTOMER_H