//
//  main.cpp
//  Savitch_9thEd_chapter2_prob15
//
//  Created by Guillermo  on 1/13/15.
//  Copyright (c) 2015 Guillermo . All rights reserved.
//

#include <iostream>
#include <cmath>
using namespace std;




int main(int argc, const char * argv[]) {
    float alpha,length,temp; // ariables for constant, length , and temperature
    
    cout<<"What is the specific coefficient of the material for expansion or contraction?";
    cin>>alpha;
    
    cout<<"What is the length of the material in meters? ";
    cin>>length;
    
    cout<<"What is the change in temperature in celsius?";
    cin>>temp;
    
    float stretch =alpha*length*temp;
    
    // Conditional execution wether it is negative or positive
    if(stretch<=0) {
        cout<<" it contracts by "<<abs(stretch)<<" meters"<<endl;
        
    }
    if(stretch>=0) {
        cout<<"it expands by "<<stretch<<" meters"<<endl;
    }
    
    
    
    
    return 0;
}
