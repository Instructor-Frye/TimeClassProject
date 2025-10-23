#include <iostream>
#include "Time.h"

int main()
{
    Time examTime;

    examTime.setTime(12, 15, 0);
    
    std::cout << "The time for the exam is: " << examTime.getHour()
        << ":" << examTime.getMinute() << ":"
        << examTime.getSecond() << ".\n";
}
