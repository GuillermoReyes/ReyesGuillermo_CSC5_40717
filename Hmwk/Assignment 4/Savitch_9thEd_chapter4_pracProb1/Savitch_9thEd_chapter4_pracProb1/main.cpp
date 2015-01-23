//
//  main.cpp
//  Savitch_9thEd_chapter4_pracProb1
//
//  Created by Guillermo  on 1/23/15.
//  Copyright (c) 2015 Guillermo . All rights reserved.
//

#include <iostream>


using namespace std;

float const liter = .264179; //How many gallons in 1 liter
//Funtion Prototypes
float computeConsumption(float lit, float m){ //Liters, miles. Funtion to calculate mpg
    return m/(lit*liter);
}
//Exeution begins here
int main(int argc, const char * argv[]) {
    cout<<"Program will calculate Miles per gallon given fue consumption and miles travelled."<<endl;
    float Liters,Miles;  //Liters of gas used,miles travelled
    char choose;          //Choose wether to perform calculation agian
    do{
    cout<<"Liters used in fuel consumption: "<<endl;
    cin>>Liters;
    cout<<"Miles traveled : "<<endl;
    cin>>Miles;
    cout<<"Your fuel consumption is "<<computeConsumption(Liters,Miles)<<" mpg. "<<endl;
        cout<<"Would you like to try again? [Y/N] "<<endl;
        cin>>choose;
    }while(choose=='Y'||choose=='y');
    return 0;
}
