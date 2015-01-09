//
//  main.cpp
//  savitch_9thEd_chapter1_prob4
//
//  Created by Guillermo  on 1/8/15.
//  Copyright (c) 2015 Guillermo . All rights reserved.
//

#include <iostream>

using namespace std;
//acceleration due to gravity
float const GRAVTY=32.1522;//ft/s^2


int main(int argc, const char * argv[]) {
    float time;
    
    //Prompt user for time
    cout<<"What is the time of the freefall?";
    cin>>time;
    
    float dist;
    dist= 0.5*GRAVTY*time*time;
    
    // Execute calculation
    cout<<" the distance traveled in freefall during that time is "<<dist<<endl;
    
    
    return 0;
}
