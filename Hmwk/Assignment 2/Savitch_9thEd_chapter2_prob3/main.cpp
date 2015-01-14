/* 
 * File:   main.cpp
 * Author: rcc
 *
 * Created on January 14, 2015, 7:43 AM
 */

#include <iostream>

using namespace std;
const float HRTOMIN = 60; // 60 min per hour 
const float MINTOSE = 60;// 60 sec per min 


int main(int argc, char** argv) {
    float pace;
    cout<<"what is your pace in miles per hour?";
    cin>>pace;
    
    float newpace = 1/pace; //PAce in hours per mile
    float minpmile= newpace*HRTOMIN; //pace in minutes per mile
    int   mpm     = minpmile*1;
    float secpmile= (minpmile-mpm)*MINTOSE;// remainder in seconds per mile
    // output the results
    cout<<"your pace is "<<mpm<<" minutes and "<<secpmile<<" seconds ";
    cout<<"per mile"<<endl;
    
    return 0;
}

