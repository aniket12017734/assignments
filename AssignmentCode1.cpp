#include <iostream>
using namespace std;

class Time 
{
    private:
    int hours, minutes, seconds;
    public:
    Time() 
    {
        hours = 0;
        minutes = 0;
        seconds = 0;
    }
    void get() 
    {
        cin >> hours >> minutes >> seconds;
    }
    void addTime(Time t1, Time t2) 
    {
        seconds = t1.seconds + t2.seconds;
        minutes = seconds / 60;
        seconds = seconds % 60;
        minutes += t1.minutes + t2.minutes;
        hours = minutes / 60;
        minutes = minutes % 60;
        hours += t1.hours + t2.hours;
    }
    void display() 
    {
        cout << hours << ":" << minutes << ":" << seconds << endl;
    }
};

int main() 
{
    Time t1, t2, t3;
    t1.get();
    t2.get();
    t3.addTime(t1, t2);
    t3.display();
    return 0;
}