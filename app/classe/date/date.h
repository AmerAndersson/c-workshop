#include <iostream>

/// Class Date
class Date
{
private:
    int month;
    int day;
    int year;

public:
    Date();
    Date(int _month, int _day, int _year) : month(_month), day(_day), year(_year) {}
    int getMonth() const { return month; }
    std::string getShortDate() const;
    void setDate(int day) { this->day = day; }
};
