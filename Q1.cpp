#include <iostream>
using namespace std;

class Vehicle{
    protected:
string model;
double rate;

public:

virtual double getdailyrate() =0;
virtual void displayDetails() = 0;

};

class Car: public Vehicle{
    public:
    Car(string m, double r){
        model=m;
        rate=r;
    }

    double getdailyrate(){
        return rate;
    }

    void displayDetails(){
        cout<<"Car Model: "<<model<<endl;
        cout<<"Car Rate: "<<rate<<endl;
    }
};

class Bike: public Vehicle{
    public:
Bike(string m, double r){
        model=m;
        rate=r;
    }

    double getdailyrate(){
        return rate;
    }

    void displayDetails(){
        cout<<"Bike Model: "<<model<<endl;
        cout<<"Bike Rate: "<<rate<<endl;
    }
};

int main(){
    Vehicle *v;
    v=new Car("City", 19.5);

    v->displayDetails();
    v=new Bike ("Honda", 10.8);

    v->displayDetails();

    delete v;
    return 0;
}
