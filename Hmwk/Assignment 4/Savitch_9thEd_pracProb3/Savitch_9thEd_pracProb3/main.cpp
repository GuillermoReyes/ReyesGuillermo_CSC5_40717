//
//  main.cpp
//  Savitch_9thEd_pracProb3
//  Stok price problem
//  Created by Guillermo  on 1/20/15.
//  Copyright (c) 2015 Guillermo . All rights reserved.
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    int amount; //amount of stoks owned
    int whole; //Whole number amount of the stocks
    int num;   //numerator of rational part
    int den;   //denominator of fractional part
    
    cout<<"What is the amount of a specific stock that you own?";
    cin>>amount;
    cout<<"Whole dollar value of stock : "<<endl;
    cin>>whole;
    cout<<"Numerator of frational part : ";
    cin>>num;
    cout<<"Denominator of fractional part : "<<endl;
    cin>>den;
    
    
       //Convert integer values to floats
    cout<<"The complete value is : $"<<amount*(whole+static_cast<float>(num)/den)<<endl;
    
    

    return 0;
}
