#pragma once
#include <string>

class Time
{
    private:
        int hour;
        int minute;
        int second;

    public:
        Time();
        Time(int newHour, int newMinute, int newSecond);
        void setTime(int newHour, int newMinute, int newSecond);
        void setHour(int newHour);
        void setMinute(int newMinute);
        void setSecond(int newSecond);
        int getHour();
        int getMinute();
        int getSecond();
        std::string to_string();   // return time as a string in the format HH:MM:SS
};

