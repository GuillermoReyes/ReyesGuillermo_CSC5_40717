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
    cout<<"Consider a polynomial if the fromat ax^2+bx+c=0\n";
    cout<<" Where a,b,c are the coeffiients of the variables constanst\n";
    
    float a;
    float b;
    float c;
    float quad1= (-b+sqrt(b*b-4ac))/(2*a);
    float quad2= (-b-sqrt(b*b-4ac))/(2*a);
    float imag1= (-b+sqrt(4ac-b*b))/(2*a);
    float imag2= (-b-sqrt(4ac-b*b))/(2*a);
    
    
    
    
    return 0;
}
