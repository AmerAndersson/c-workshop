#include "date.h"

/// Class Date

Date::Date()
{
    month = 2;
    day = 24;
    year = 2024;
}
std::string Date::getShortDate() const
{
    return std::to_string(month) + "\n" + std::to_string(day) + std::to_string(year);
}