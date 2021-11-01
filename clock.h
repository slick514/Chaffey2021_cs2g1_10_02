//
// Created by Justin Gries on 11/1/2021.
//

#ifndef CHAFFEY2021_CS2G1_10_02_CLOCK_H
#define CHAFFEY2021_CS2G1_10_02_CLOCK_H


class Clock
{
private:
    int hours;
    int minutes;
    int seconds;
public:
    Clock();

    Clock(int hr, int min, int sec)
    {
        hours = hr;
        minutes = min;
        seconds = sec;
    }

    void setClock(int, int, int);
};


#endif //CHAFFEY2021_CS2G1_10_02_CLOCK_H
