//
// Created by Justin Gries on 11/1/2021.
//

#include "clock.h"

void Clock::setClock(int hr, int min, int sec)
{
    hours = hr;
    minutes = min;
    seconds = sec;
}

Clock::Clock() {
    hours = 00;
    minutes = 00;
    seconds = 00;
}

