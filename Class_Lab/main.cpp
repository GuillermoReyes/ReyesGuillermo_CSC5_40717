/* 
 * File:   main.cpp
 * Author: GR
 * Babylonean calculator - retirement 
 * Created on January 27, 2015, 9:11 AM
 */
//System Libraries
#include <cstdlib>
#include <iostream>
#include <iomanip>

using namespace std;
//User Libraries
//Global constants
//Function Prototypes
float retirement(float,float,float,int);
//Execution Begins

int main(int argc, char** argv) {
    float salary=75000.0f;
    float invRate= 0.05f;
    float defPrct=0.10f;
    float ndsave=salary/invRate;
    float nmYears;
    float retSav;
    cout<<" years savings "<<endl;
    cout<<fixed<<showpoint<<setprecision(2);
    for(int year=1;retSav<=ndsave;year++ ){
        retSav=retirement(0.0,invRate,defPrct*salary,year);
        cout<<"Year = "<<year<<" savings = $"<<retSav<<endl;
        
    }
    return 0;
}

float retirement(float p,float i,float d,int n){
    for(int year=1;year<=n;year++){
        p=(1+i);
        p+=d;
        
    }
    return p;
}