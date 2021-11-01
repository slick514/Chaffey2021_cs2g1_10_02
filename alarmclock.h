//
// Created by Justin Gries on 11/1/2021.
//

#ifndef CHAFFEY2021_CS2G1_10_02_ALARMCLOCK_H
#define CHAFFEY2021_CS2G1_10_02_ALARMCLOCK_H


#include "clock.h"

class AlarmClock : public Clock{
public:
    void set_alarm(int hours, int minutes);
private:
    int alarmHours;
    int alarmMinutes;
    int alarmSeconds;
};


#endif //CHAFFEY2021_CS2G1_10_02_ALARMCLOCK_H
