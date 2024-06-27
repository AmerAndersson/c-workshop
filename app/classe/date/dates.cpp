#include <iostream>
#include "date.h"

int main()
{

    Date defaultDate;
    Date schoolStart(2024, 24, 2);
    std::cout << defaultDate.getShortDate();
    std::cout << schoolStart.getShortDate();
    defaultDate.setDate(20);
    std::cout << defaultDate.getShortDate() << "\n";
    return 0;
}