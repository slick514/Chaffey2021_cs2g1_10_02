//
// Created by Justin Gries on 11/1/2021.
//

#ifndef CHAFFEY2021_CS2G1_10_02_CLOCK_H
#define CHAFFEY2021_CS2G1_10_02_CLOCK_H

#include <string>

/**
 *  Implement a class Clock whose get_hours and get_minutes member functions return the current time at your location.
 *
 */
class Clock
{
public:

    /**
     * @return a string with the hours and minutes, representing the time
     */
    virtual std::string get_time();

    /**
     *
     * @return the current time (minutes after the hour) at this location
     */
    virtual int get_hours() const;

    /**
     *
     * @return the current time (hours) at this location
     */
    int get_minutes() const;
};


#endif //CHAFFEY2021_CS2G1_10_02_CLOCK_H
