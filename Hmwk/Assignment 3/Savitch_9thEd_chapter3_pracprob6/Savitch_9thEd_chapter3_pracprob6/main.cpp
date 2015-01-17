//
//  main.cpp
//  Savitch_9thEd_chapter3_pracprob6
//
//  Created by Guillermo  on 1/17/15.
//  Copyright (c) 2015 Guillermo . All rights reserved.
//

#include <iostream>

using namespace std;
float PI = 3.14;      //value of pi
float Y = 62.4;      // the specific weight of water is 62.4lb/ft^3

int main(int argc, const char * argv[]) {
    float radius;
    float weight;
    
    cout<<"What is the radius of the sphere (in feet)?:";
    cin>>radius;
    cout<<"What is the weight of sphere (in pounds)?:";
    cin>>weight;
    
    float v =.75*PI*radius*radius*radius;
    float Fb= v*Y;   //The formula for buoyancy
    
    if(weight>Fb){
        cout<<"The object will sink.\n";
    }
    if(weight<=Fb){
        cout<<"the object will float.\n";
    }
    
    return 0;
}
