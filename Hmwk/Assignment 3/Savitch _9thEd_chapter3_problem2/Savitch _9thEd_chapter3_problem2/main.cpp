//
//  main.cpp
//  Savitch _9thEd_chapter3_problem2
//
//  Created by Guillermo  on 1/16/15.
//  Copyright (c) 2015 Guillermo . All rights reserved.
//

#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, const char * argv[]) {
    cout<<"Consider a polynomial of the format ax^2+bx+c=0\n";
    cout<<" Where a,b,c are the coeffiients of the variables constanst\n";
    char prompt;       //User decides wether to proceed with action
    cout<<"would you like to perform a calculation?\n";
    cout<<"type 'Y' for yes or 'N' for no."<<endl;
    cin>>prompt;
    
    while(prompt=='Y'||prompt=='y'){
    float a;
    float b;
    float c;
    cout<<"What is the value of a ?: ";
    cin>>a;
    cout<<"What is the value of b ?: ";
    cin>>b;
    cout<<"What is the value of c ?: ";
    cin>>c;
    
    if(((4*a*c)<(b*b))) {
        float quad1= (-b+sqrt(b*b-4*a*c))/(2*a); //First variant of the quadrati formula
        float quad2= (-b-sqrt(b*b-4*a*c))/(2*a);//Second variant of the quadratic formula

        cout<<"the values of terms are "<<quad1<<" and "<<quad2<<endl;
        
    }
    if(((4*a*c)>(b*b))){
        float imag1a= -b/(2*a);             // First variant of quadratic formula
        float imag1b= sqrt(4*a*c-b*b)/(2*a);//first variant of quadratic if imaginary number
        float imag2a= -b/(2*a);             //Second variant of quadratic formula
        float imag2b=-sqrt(4*a*c-b*b)/(2*a);//Second variant of the quadratic if imaginary number
        
        cout<<"the values of variable are: "<<imag1a<<"+"<<imag1b<<"i "<<endl;
        cout<<"                       and: "<<imag2a<<"-"<<imag2b<<"i "<<endl;
    }
    if(((4*a*c)==(b*b))) {
        float quad1= (-b+sqrt(b*b-4*a*c))/(2*a);
        cout<<"The only value of the variable is "<<quad1<<endl;
    }
        cout<<"would you like to perform another calculation?\n";
        cout<<"type 'Y' for yes or 'N' for no."<<endl;
        cin>>prompt;
    
    
    
    }
    
    return 0;
}
