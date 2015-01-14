/* 
 * File:   main.cpp
 * Author: rcc
 *
 * Created on January 14, 2015, 10:39 AM
 */

#include <iostream>
#include <cmath>

using namespace std;

float const GALFT = 7.84; //how many gallon per cubic ft
float const PI    = 3.1416; //Value of PI
float const INFT  = 12; //12 inches in a foot
int main(int argc, char** argv) {
    float radius,height;
    
    
    cout<<"What is the radius of the well in inches?: ";
    cin>>radius;
   
    float conv= radius/INFT;//converts inches to feet
    
    cout<<"How deep is the well in feet?: ";
    cin>>height;
    
    //Finds volume then gallons
    float volume = PI*conv*conv*height;
    float gallon = volume*GALFT;
    
    cout<<"Your well can hold "<<gallon<<endl;
    cout<<" gallons, congratulations."<<endl;
    return 0;
}

