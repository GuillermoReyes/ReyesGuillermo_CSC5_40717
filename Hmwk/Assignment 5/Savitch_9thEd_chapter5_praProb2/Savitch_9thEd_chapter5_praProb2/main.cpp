//
//  main.cpp
//  Savitch_9thEd_chapter5_praProb2
//
//  Created by Guillermo  on 1/24/15.
//  Copyright (c) 2015 Guillermo . All rights reserved.
//

#include <iostream>

using namespace std;

//Global nstants
float ftToMt = .3048;  //.3048 meter in one foot
float inToCe = 2.54; //2.54 centimeters in one inch

//Funntion prototype to perform alculation
void convert(float &ft,float &inch){
    ft*=ftToMt;
    inch*=inToCe;
    
}
void output(float meter,float cm){
    cout<<"It is "<<meter<<" meters and "<<cm<<" entimeters "<<endl;
}
int main(){
    float ft,inch;
    
    cout<<"measurement in feet: "<<endl;
    cin>>ft;
    cout<<"Measurement in inches: "<<endl;
    cin>>inch;
    convert(ft,inch);
    output(ft,inch);
    
    return true;
}