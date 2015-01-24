//
//  main.cpp
//  Savitch_9thEd_chapter5_problem5
//
//  Created by Guillermo  on 1/24/15.
//  Copyright (c) 2015 Guillermo . All rights reserved.
//

#include <iostream>
#include <cmath>

using namespace std;
//Funtion that calulates wind chill factor
void windChill(float t,float v){    //t=temperature,v=wind velocity
    float W= 13.12+0.6215*t-11.37*pow(v,.16)+.3965*t*pow(v,.016);
    if(t>10) cout<<"Invalid temperature, has to be equal to or greater than 15 degrees celsius "<<endl;
    else cout<<"The wind chill index is "<<W<<" degrees celsius."<<endl;
}

int main(int argc, const char * argv[]) {
    float temp,vel;   //temperature, velocity
    cout<<"Temperature in degrees celsius: "<<endl;
    cin>>temp;
    cout<<"Wind velocity in meters per second: "<<endl;
    cin>>vel;
    
    windChill(temp,vel);
    

    return 0;
}
