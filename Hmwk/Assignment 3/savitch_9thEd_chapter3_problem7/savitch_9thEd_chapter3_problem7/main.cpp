//
//  main.cpp
//  savitch_9thEd_chapter3_problem7
//
//  Created by Guillermo  on 1/17/15.
//  Copyright (c) 2015 Guillermo . All rights reserved.
//

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;


int factorial(int n)
{
    if (n == 0) return 1;
    if (n < 3) return n;
    return n * factorial(n -1);
}
int main(int argc, const char * argv[]) {
    cout<<"e^x an be approximated using a taylor polynimial.Let's test how close to the actual value it can approximate.\n";
    cout<<" a taylor polynomial is just a series expansion that an be iterated 'n' times\n ";
    cout<<endl;
    
    int s; //The amount of iteration of the series
    int x; //The value of x that we are trying to find
    
    cout<<"Choose a value of x that you would like to input:";
    cin>>x;
    cout<<endl;
    cout<<"The anticipated value of e is :"<<exp(x)<<endl;
    cout<<"Choose the number of iterations that you would like to perform on this function:";
    cin>>s;
    float sum;
    

    
    
    for( int i=0;i<=s;i++){
        
        
        float ex= pow(x,i)/factorial(i);
        sum+=ex;
        cout<<fixed<<showpoint<<setprecision(3);
        cout<<"After "<<i<<" iterations the value is: "<<sum<<endl;
       
        
        
        
    }
    return 0;
 
    
    
    
}