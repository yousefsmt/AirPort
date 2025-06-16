#ifndef DATA_H
#define DATA_H

#include <fstream>

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

#endif // !DATA_H