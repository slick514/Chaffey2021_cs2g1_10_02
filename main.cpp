#include <iostream>
#include "alarmclock.h"
using namespace std;

/*
 * Course: Chaffey College 2021-Fall CS2
 * Prof: Dr. Tracy Kocher
 * Date: 1 Nov 2021
 * Project: 10.02
 * Coder: Duncan Foutz
 * Tester(s): Justin Gries
 *
 * Prompt: Add an alarm feature to the Clock class of Exercise •• P10.1 (See below). When set_alarm(hours, minutes) is
 * called, the clock stores the alarm. When you call get_time, and the alarm time has been reached or exceeded,
 * return the time followed by the string "Alarm" (or, if you prefer, the string "\u23F0") and clear the alarm. What
 * do you need to do to make the set_alarm function work for WorldClock objects?
 *
 * Exercise P10.1:
 * Implement a class Clock whose get_hours and get_minutes member functions return the current time at your location.
 * To get the current time, use the following code, which requires that you include the <ctime> header:
    time_t current_time = time(0);
    tm* local_time = localtime(&current_time);
    int hours = local_time->tm_hour;
    int minutes = local_time->tm_min;
   Also provide a get_time member function that returns a string with the hours and minutes by calling the
   get_hours and get_minutes functions. Provide a derived class WorldClock whose constructor accepts a time offset.
   For example, if you live in California, a new WorldClock(3) should show the time in New York, three time zones
   ahead. Which member functions did you override? (You should not override get_time.)
 */

int main(){
    cout << "Hello World" << endl;
    return 0;
}