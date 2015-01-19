//
//  main.cpp
//  Savitchg_9thEd_practprob7_chapter3
//
//  Created by Guillermo  on 1/18/15.
//  Copyright (c) 2015 Guillermo . All rights reserved.
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    
    cout<<"From this list you will be able to see when Celsius=Fahrenheit"<<endl;
    
    int Ce; //Celsius
    Ce=100;
    int far;

    
    while(Ce>=-60){
        far= (((9*Ce)/5)+32);
        cout<<far<<" degrees Fahrenheit is "<<Ce<<" degrees Celsius"<<endl;
        Ce--;
        
        
    }
   
    cout<<"Scan the output to see when C=F\n";
    
    
    return 0;
    
}

