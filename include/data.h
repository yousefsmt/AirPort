#ifndef DATA_AIRPORT
#define DATA_AIRPORT

#include <fstream>

// Class: Date
class Date {
private:
    int day;
    int month;
    int year;
    int hour;
    int minute;

public:
    void setDay(int d);
    int getDay() const;

    void setMonth(int m);
    int getMonth() const;

    void setYear(int y);
    int getYear() const;

    void setHour(int h);
    int getHour() const;

    void setMinute(int m);
    int getMinute() const;

    friend  std::ostream& operator<<( std::ostream& out,  Date& date);
    friend  std::istream& operator>>( std::istream& in, Date& date);
};

// Class: Food
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

// Class: Airport
class Airport {
protected:
    std::string domesticFlights;
    std::string foreignFlights;

public:
    virtual void addFlight(std::string& flight);
    virtual void removeFlight(std::string& flight);
    virtual void displayFlights() ;
};

// Class: DomesticFlights (Derived from Airport)
class DomesticFlights : public Airport {
private:
    std::string originCity;
    std::string destinationCity;
    Date flightDate;
    std::string planeName;
    bool isCancelled;

public:
    void setOriginCity(std::string& city);
    std::string getOriginCity() ;

    void setDestinationCity(std::string& city);
    std::string getDestinationCity() ;

    void setFlightDate( Date& date);
    Date getFlightDate() ;

    void setPlaneName(std::string& name);
    std::string getPlaneName() ;

    void setIsCancelled(bool cancelled);
    bool getIsCancelled() ;
};

// Class: DomesticCities
class DomesticCities {
private:
    std::string cities[10];

public:
    void addCity(std::string& city);
    std::string getCities() ;
};

// Class: ForeignFlights (Derived from Airport)
class ForeignFlights : public Airport {
private:
    std::string originCity;
    std::string destinationCity;
    Date flightDate;
    std::string planeName;
    bool isCancelled;

public:
    void setOriginCity(std::string& city);
    std::string getOriginCity() ;

    void setDestinationCity(std::string& city);
    std::string getDestinationCity() ;

    void setFlightDate(Date& date);
    Date getFlightDate() ;

    void setPlaneName(std::string& name);
    std::string getPlaneName() ;

    void setIsCancelled(bool cancelled);
    bool getIsCancelled() ;
};

// Class: ForeignCities
class ForeignCities {
private:
    std::string cities[10];

public:
    void addCity(std::string& city);
    std::string getCities() ;
};

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

// Class: Admin
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

// Class: Tax
class Tax {
public:
    double calculateTax(double price, double percentage) ;
};

#endif // !DATA_AIRPORT