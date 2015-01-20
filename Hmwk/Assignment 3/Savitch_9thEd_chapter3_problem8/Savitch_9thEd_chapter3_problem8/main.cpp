//
//  main.cpp
//  Savitch_9thEd_chapter3_problem8
//
//  Created by Guillermo  on 1/19/15.
//  Copyright (c) 2015 Guillermo . All rights reserved.
//
//Program approximates PI using a series expansion
#include <iostream>
#include <cmath>

using namespace std;

int main() {
    cout<<"Pi can be approximated using a series expansion. \n";
    int n;   //Amount of iterations
    cout<<"How many iterations would you like to perform?\n";
    cin>>n;
    
    float sum;       // Sums the iterations
    
    for(int i=0;i<=n;i++){
        float series= pow(-1,i)/(2*i+1);
        sum+=series;
        
        cout<<"after "<<i<<" iterations the approximation is "<<4*sum<<endl;
      
        }
   
    return 0;
}