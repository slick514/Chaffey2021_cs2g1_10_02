//
// Created by Justin Gries on 11/1/2021.
//

#ifndef CHAFFEY2021_CS2G1_10_02_ALARMCLOCK_H
#define CHAFFEY2021_CS2G1_10_02_ALARMCLOCK_H


#include "clock.h"

class AlarmClock : public Clock{
public:

    AlarmClock();

    /**
     * TODO: Similar to Clock::get_time, but adds the string "Alarm" (or the string "\u23F0", appparently?) if the time
     *  has exceeded the time specified by the alarm_hours and alarm_minutes fields.
     * TODO: Clears the alarm once the alarm has been triggered
     * @return a string representing the time, with an alarm indicator if appropriate
     */
    virtual std::string get_time() override;

    void set_alarm(int hours, int minutes);
private:
    /**
     * TODO: clears the alarm; what does that look like?
     */
    void clear();

    /**
     * TODO: What should these field defaults be if the alarm is cleared?
     */
    int alarm_hours{};
    int alarm_minutes{};
};


#endif //CHAFFEY2021_CS2G1_10_02_ALARMCLOCK_H
