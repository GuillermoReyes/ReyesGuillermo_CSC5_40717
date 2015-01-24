//
//  main.cpp
//  Savitch_9thEd_chapter5_problem4
//  calculates change
//  Created by Guillermo  on 1/24/15.
//  Copyright (c) 2015 Guillermo . All rights reserved.
//

#include <iostream>

using namespace std;

//CALCULATES CHANGE
//prcondition: must be between 0 and 99 cents
void change(int change){
    int quart = change/25;
    int last= change-(25*quart);
    int dime=last/10;
    int last2 = last-(10*dime);
    int nick  = last2/5;
    int last3 = last2-(5*nick);
    int penny = last3/1;
    cout<<"The change is "<<quart<<" quarter(s), "<<dime<<" dime(s),"<<nick<<" nickel(s),"<<penny<<" penny(ies)"<<endl;
}

int main(int argc, const char * argv[]) {
    //Introduce variables
    int ch;        //Amount in cents
    char choose;   //User decides to repeat function.
    do {
    cout<<"Enter the amount of hange in cents."<<endl;
    cout<<"Ranging from 1 to 99 cents. "<<endl;
    cin>>ch;
    change(ch);
    cout<<"Try again? [Y/N]"<<endl;
    cin>>choose;
}while(choose=='y'||choose=='Y');
    return 0;
}
