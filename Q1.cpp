#include <iostream>
using namespace std;

class Time;

class Speed {
private:
    double kmph;

public:
    Speed(double s) {
        kmph = s;
    }
    friend void calculateDistance(Speed s, Time t);
};

class Time {
private:
    double hours;

public:
    Time(double h) {
        hours = h;
    }
    friend void calculateDistance(Speed s, Time t);
};

void calculateDistance(Speed s, Time t) {
    double distance = s.kmph * t.hours;
    cout << "Total distance traveled: " << distance << " km" << endl;
}

int main() {
    Speed mySpeed(60.0);
    Time myTime(2.0);

    calculateDistance(mySpeed, myTime);

    return 0;
}