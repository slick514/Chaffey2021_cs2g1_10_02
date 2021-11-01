//
// Created by Justin Gries on 11/1/2021.
//

#include "alarmclock.h"

void AlarmClock::setAlarmClock(int hr, int min, int sec)
{
    alarmHours = hr;
    alarmMinutes = min;
    alarmSeconds = sec;
}

AlarmClock::AlarmClock(int hr, int min, int sec)
: Clock{hr, min, sec}
{
}

AlarmClock::AlarmClock()
 : Clock{0, 0, 0}
{
}
