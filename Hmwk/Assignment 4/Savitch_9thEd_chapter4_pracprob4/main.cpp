/* 
 * File:   main.cpp
 * Author: rcc
 *
 * Created on January 21, 2015, 8:09 AM
 */

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

float inflation (float a,float b){
    float r;
    r= (b-a)/a*100;
    return r;
    
}

int main(int argc, char** argv) {
    
    cout<<"This program will calculate the rate of inflation.\n";
    cout<<"choose an item and compare its price points between a period of time\n";
    float start; //Initial price of item
    float end;   //End price of the item
    
    cout<<"What was the price of the item initially? $";
    cin>>start;
    cout<<"What is the end price of the item within the period? $";
    cin>>end;
    
    float inf= inflation(start,end);
    cout<<fixed<<showpoint<<setprecision(2);
    cout<<" the rate of inflation is "<<abs(inf)<<"%."<<endl;
    cout<<"Note:If the price change decreased, then it is the rate of deflation."<<endl;
           

    return 0;
}

