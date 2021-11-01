#include <iostream>
using namespace std;

class Clock
{
private:
    int hours;
    int minutes;
    int seconds;
public:
    Clock()
    {
        hours = 00;
        minutes = 00;
        seconds = 00;
    }

    Clock(int hr, int min, int sec)
    {
        hours = hr;
        minutes = min;
        seconds = sec;
    }

    void setClock(int, int, int);
};

void Clock::setClock(int hr, int min, int sec)
{
    hours = hr;
    minutes = min;
    seconds = sec;
}

class AlarmClock : public Clock
{
private:
    int alarmHours;
    int alarmMinutes;
    int alarmSeconds;
public:
    AlarmClock()
    {
        alarmHours = 00;
        alarmMinutes = 00;
        alarmSeconds = 00;
    }

    AlarmClock(int hr, int min, int sec)
    {
        alarmHours = hr;
        alarmMinutes = min;
        alarmSeconds = sec;
    }

    void setAlarmClock(int, int, int);

    AlarmClock getAlarmClock() const;
};


AlarmClock AlarmClock::getAlarmClock() const {
        AlarmClock result;
        result.alarmHours = alarmHours;
        result.alarmMinutes = alarmMinutes;
        result.alarmSeconds = alarmSeconds;

        return result;
}
void AlarmClock::setAlarmClock(int hr, int min, int sec)
{
    alarmHours = hr;
    alarmMinutes = min;
    alarmSeconds = sec;
}

int main()
{
    AlarmClock time;
    time.setAlarmClock(00, 00, 00);
    AlarmClock alarmTime = time.getAlarmClock();
    cout << endl;
    system("pause");
    return 0;
}