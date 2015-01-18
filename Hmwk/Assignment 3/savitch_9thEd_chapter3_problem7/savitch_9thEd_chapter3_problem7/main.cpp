//
//  main.cpp
//  savitch_9thEd_chapter3_problem7
//
//  Created by Guillermo  on 1/17/15.
//  Copyright (c) 2015 Guillermo . All rights reserved.
//

#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, const char * argv[]) {
    cout<<"e^x an be approximated using a taylor polynimial.Let's test how close to the actual value it can approximate.\n";
    cout<<" a taylor polynomial is just a series expansion that an be iterated 'n' times\n ";
    
    int n; //The amount of iteration of the series
    float x; //The value of x that we are trying to find
    
    cout<<"Choose a valuer of x that you would like to imput:";
    cin>>x;
    
    cout<<"Choose the number of iterations that you would liekt o perform on this function:";
    cin>>n;
    
    for(int i=0;i<=n;i++){
        float up= pow(x,n);
        float down= fact(n-1);
        
    }
}