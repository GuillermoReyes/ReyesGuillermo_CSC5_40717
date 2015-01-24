//
//  main.cpp
//  Savitch_9thEd_pracProb9_chapter5
//
//  Created by Guillermo  on 1/24/15.
//  Copyright (c) 2015 Guillermo . All rights reserved.
//

#include <iostream>
#include <cmath>

using namespace std;

//Function that calculates area of a triange
void area(float a,float b,float c){
    float s = (a+b+c)/2;
    if(a>s||b>s||c>s) cout<<"Invalid Parameters";
    float area = sqrt(s*(s-a)*(s-b)*(s-c));
    cout<<"Area is "<<area<<endl;
}
//Execute and test function

int main(int argc, const char * argv[]) {
    float a,b,c;                //3 sides of a triangle
    cout<<"Side 1: "<<endl;
    cin>>a;
    cout<<"Side 2: "<<endl;
    cin>>b;
    cout<<"Side 3: "<<endl;
    cin>>c;
    area(a,b,c);
    

    return 0;
}
