//
//  main.cpp
//  Savitch_9thEd_chap2_prob1
//
//  Created by Guillermo  on 1/12/15.
//  Copyright (c) 2015 Guillermo . All rights reserved.
//

#include <iostream>

using namespace std;

float const SIS    =      350*.01; //How many grams per soda can that are the sweetener
float const DTHRAT =     .1429;    // The death rati0; percentage to find lethal dose of sweetener

int main(int argc, const char * argv[]) {
    
    float Weight; //weight of the user
    
    cout<<" what is the ideal weight you would like to have, in grams?\n";
    cout<<"at what weight will you stop dieting?)\n";
    cin>>Weight;
    
    // This is the specific "death capacity" calculated for the specific user
    float specdos = DTHRAT*Weight;
    // How many can will kill the user
    int death     = specdos/SIS;
    
    cout<<"You will die if you drink "<<death<<" cans of soda";
    
    
    
    
    
    return 0;
}
