//
//  main.cpp
//  Savitch_9thEd_chapter2_prob6
//
//  Created by Guillermo  on 1/13/15.
//  Copyright (c) 2015 Guillermo . All rights reserved.
//

// I reformatted the solution to make it more useful and relevant, this could be don for all the tax brackets
#include <iostream>

using namespace std;

int main() {
    float TAX = .155; //total taxes colleted on gross income
    float MIN =18193.75; //minimum you have to gie to feds based on tax bracket
    float FDTAX = .28; //tax rate on amount over $89,350
    float GROSS;  // this is the input gross inome

    cout<<"Enter your Income within the range of $89,350 to $186,350 :";
    cin>>GROSS;
    
    float add= (GROSS-89350)*FDTAX;//Additional inome taxed
    
    float net = GROSS-add-GROSS*TAX-MIN;
    cout<<"Your total net income (take-home pay) is :$"<<net<<endl;
    
    cout<<"Your monthly net income is $"<<net/12<<endl;
    return 0;
}


