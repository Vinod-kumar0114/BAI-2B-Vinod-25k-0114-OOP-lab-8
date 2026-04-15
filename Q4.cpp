#include <iostream>
using namespace std;

class TrafficSystem {
private:
    int cars;
    int waitTime;

public:
    TrafficSystem(int c = 0, int w = 0) {
        cars = c;
        waitTime = w;
    }

    TrafficSystem operator + (int extraCars) {
        return TrafficSystem(cars + extraCars, waitTime);
    }

    TrafficSystem operator - (int movedCars) {
        return TrafficSystem(cars - movedCars, waitTime);
    }

    TrafficSystem operator * (int multiplier) {
        return TrafficSystem(cars, waitTime * multiplier);
    }

    bool operator == (const TrafficSystem& other) {
        return (cars == other.cars);
    }

    void display() {
        cout << "Cars in Traffic: " << cars << ", Wait Time: " << waitTime << " mins" << endl;
    }
};

int main() {
    TrafficSystem roadA(50, 5);
    
    cout << "Initial Status: ";
    roadA.display();

    roadA = roadA + 20;
    cout << "After addition: ";
    roadA.display();

    roadA = roadA - 15;
    cout << "After subtraction: ";
    roadA.display();

    roadA = roadA * 2;
    cout << "After signal failure (Multiplication): ";
    roadA.display();

    TrafficSystem roadB(55, 10);
    if (roadA == roadB) {
        cout << "Gridlock detected! Both roads are equally jammed." << endl;
    }

    return 0;
}