//
// Created by Justin Gries on 11/1/2021.
//

#include <string>
#include <sstream>
#include "alarmclock.h"
using namespace std;

void AlarmClock::set_alarm(int hr, int min){
    this->alarm_hours = hr;
    this->alarm_minutes = min;
}

std::string AlarmClock::get_time() {
    stringstream stream;
    string time_base = this->Clock::get_time();
    stream << time_base;
    // TODO: Add the alarm indicator and then clear, if appropriate

    return stream.str();
}

//TODO: clear the alarm
void AlarmClock::clear() {

}

// TODO instantiate alarm fields, (or maybe just call "clear" and let that handle resetting things...?)
AlarmClock::AlarmClock() {

}


