#include <iostream>
using namespace std;

class Activity {
public:
    virtual double calculateCaloriesBurned() = 0;
};

class Running : public Activity {
private:
    double distance;
    double time;

public:
    Running(double d, double t) {
        distance = d;
        time = t;
    }

    double calculateCaloriesBurned() {
        return distance * 60.0;
    }
};

class Cycling : public Activity {
private:
    double speed;
    double time;

public:
    Cycling(double s, double t) {
        speed = s;
        time = t;
    }

    double calculateCaloriesBurned() {
        return speed * time * 30.0;
    }
};

int main() {
    Running r1(5.5, 40.0);
    Cycling c1(15.0, 2.0);

    cout << "Running Activity:" << endl;
    cout << "Calories Burned: " << r1.calculateCaloriesBurned() << endl;

    cout << "\nCycling Activity:" << endl;
    cout << "Calories Burned: " << c1.calculateCaloriesBurned() << endl;

    return 0;
}