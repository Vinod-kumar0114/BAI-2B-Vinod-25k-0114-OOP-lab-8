#include <iostream>
using namespace std;

class SmartDevice{
    protected:


public:

virtual bool turnOn() =0;
virtual bool turnOff() = 0;
virtual void getStatus()=0;


};

class LightBulb: public SmartDevice{
    bool isOn;
    int brightness;

    public:
    LightBulb(bool on, int b){
        isOn=on;
        brightness=b;
    }
    bool turnOn(){
        isOn=true;
        return isOn;
    }
    bool turnOff(){
        isOn=false;
        return isOn;
    }
    void getStatus(){
        if(isOn==true){
            cout<<"The Bulb is on"<<endl;
        }else{
            cout<<"The Bulb is off"<<endl;
        }

        cout<<"Brightness: "<<brightness<<endl;
    }

};

class Thermostat: public SmartDevice{
    bool isOn;
    double temperature;

    public:
    Thermostat(bool on, double t){
        isOn=on;
        temperature=t;
    }
    bool turnOn(){
        isOn=true;
        return isOn;
    }
    bool turnOff(){
        isOn=false;
        return isOn;
    }
    void getStatus(){
        if(isOn==true){
            cout<<"The Thermostat is on"<<endl;
        }else{
            cout<<"The Thermostat is off"<<endl;
        }

        cout<<"Temperature: "<<temperature<<endl;
    }

};
int main(){
    LightBulb b(1, 50);
    Thermostat t(1, 28);

    b.turnOn();
    b.getStatus();


}