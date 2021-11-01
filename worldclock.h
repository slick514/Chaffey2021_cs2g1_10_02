//
// Created by Justin Gries on 11/1/2021.
//

#ifndef CHAFFEY2021_CS2G1_10_02_WORLDCLOCK_H
#define CHAFFEY2021_CS2G1_10_02_WORLDCLOCK_H

#include "clock.h"

class WorldClock : Clock {
public:
    /**
     * Accept an offset that will impact the "hours" that are returned, dependent on time-zone.
     * @param time_offset distance from "GMT" to use to shift our hours output
     */
    WorldClock(int offset){ this->time_offset = offset;}

    /**
     *
     * @return the time (hours) adjusted for the given time_offset
     */
    virtual int get_hours();

private:
    int time_offset;
};


#endif //CHAFFEY2021_CS2G1_10_02_WORLDCLOCK_H
