//
// Created by Justin Gries on 11/1/2021.
//

#ifndef CHAFFEY2021_CS2G1_10_02_ALARMCLOCK_H
#define CHAFFEY2021_CS2G1_10_02_ALARMCLOCK_H


#include "clock.h"

class AlarmClock : public Clock
{
private:
    int alarmHours;
    int alarmMinutes;
    int alarmSeconds;
public:
    AlarmClock();
    AlarmClock(int hr, int min, int sec);
    void setAlarmClock(int hours, int minutes, int seconds);
};


#endif //CHAFFEY2021_CS2G1_10_02_ALARMCLOCK_H
