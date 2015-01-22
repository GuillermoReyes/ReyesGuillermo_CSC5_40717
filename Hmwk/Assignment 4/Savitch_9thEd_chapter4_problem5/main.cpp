/* 
 * File:   main.cpp
 * Author: rcc
 * Calculate metabolic rate of a human
 * Created on January 22, 2015, 11:13 AM
 */

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

//Function Prototypes
float MetRate(float p){
    return 70*pow(p/2.2,.756);
}
float PhysicalActivity(float Intens,float p,float min){
    return .0385*Intens*p*min;
}
float Digest(float consume){
    return consume*.1;
}

int main(int argc, char** argv) {
    float weight,cal,min,intensity;//weight,calories, minutes of exercise,intensityy constant
    cout<<"What is your weight (in pounds)? :"<<endl;
    cin>>weight;
    cout<<"how many minutes do you spend exercising? :"<<endl;
    cin>>min;
    cout<<"What is the caloric amount of a specific food? "<<endl;
    cin>>cal;
    cout<<"Here are some examples of intensity constants for exercises:"<<endl;
    cout<<"a. Running 10 mph = 17"<<endl;
    cout<<"b. Runnning 6 mph = 10"<<endl;
    cout<<"c. Basketball = 9"<<endl;
    cout<<"d. Walking 1 mph = 1"<<endl;
    cout<<"You may also gather more online ."<<endl;
    cout<<"Enter the value of the Intensity "<<endl;
    cin>>intensity;

    //Calories needed to consume to maint
    float need= MetRate(weight)+PhysicalActivity(intensity,weight,min)+Digest(cal);
    //Output results 
    cout<<fixed<<showpoint<<setprecision(0);
    cout<<"In order to maintain your weight you need to eat about " <<need/cal<<endl;
    cout<<" of the food item that you entered."<<endl;
     

    return 0;
}

