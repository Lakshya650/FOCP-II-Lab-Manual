#include<iostream>
using namespace std;

class SmartLight{
    string brand;
    int brightness;
    bool isOn;
    public:
    SmartLight();      //constructor
    SmartLight(string,int,bool);    //parameterised constructor
    void turnOn();
    void turnOff();
    void increaseBrightness();
    void decreaseBrightness();
    void displaystatus();
~SmartLight(){cout<<"\n Object destroyed";};
};

SmartLight::SmartLight(){
    brand="A";
    brightness=50;
    isOn=false;
}
SmartLight::SmartLight(string b,int br,bool s){
    brand=b;
    brightness=br;
    isOn= s;
}

void SmartLight::turnOn(){
    isOn = true;
}

void SmartLight::turnOff(){
    isOn = false;
}

void SmartLight::increaseBrightness(){
    if(brightness+10>100){
         brightness=100;
    }
    else{
        brightness+=10;
    }
}

void SmartLight::decreaseBrightness(){
    if(brightness-10<0){
         brightness=0;
    }
    else{
        brightness-=10;
    } 
}
void SmartLight::displaystatus(){
    cout<<"Brand: "<<brand<<endl;
    cout<<"Brightness: "<<brightness<<endl;
    cout<<"isOn: "<<(isOn? "On":"Off")<<endl;
}

int main(){
    SmartLight s1("XYZ",68,true);
    s1.increaseBrightness();
    s1.turnOff();
    s1.displaystatus();
    return 0;
}