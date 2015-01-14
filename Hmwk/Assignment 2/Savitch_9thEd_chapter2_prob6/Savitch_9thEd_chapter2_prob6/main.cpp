//
//  main.cpp
//  Savitch_9thEd_chapter2_prob6
//
//  Created by Guillermo  on 1/13/15.
//  Copyright (c) 2015 Guillermo . All rights reserved.
//

#include <iostream>
using namespace std;

float const SSTAX = .062; //(social security tax)
float const STTAX = .0930;  //(state taxes)
//float const FDTAX = .28;     //(federal tax on income oer 89,350)
float const  MIN   = 89350;
                                   //There is also a minimum of 18193.75
float const SUM   = SSTAX+STTAX;
int main(int argc, const char * argv[]) {
    cout<<"The following program calculates the taxes,based on the tax bracket from $89,350 to $186,350";
    
    float gross;
    
    cout<<"What is your gross income?";
    cin>>gross;
    
    unsigned int extra = gross-MIN;
    float addtax = .28*extra;
    
    cout<<"Your net pay is"<<endl;
    cout<<gross-(gross*SUM)-addtax-18193.75;
    
    
    

    
    return true;
}

