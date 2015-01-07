/* 
 * File:   main.cpp
 * Author: Reyes, Guillermo
 * Purpose: how easy computers can mistakes
 * Created on January 7, 2015, 11:17 AM
 */

#include <iostream>

using namespace std;

// System Libraries
// User libraries
// Function prototypes
int main(int argc, char** argv) {
// Declare 3 variables 
    short a,b,c;
    //Prompt for a and b
    
    cout<<"Input 2 short values";
    
    cin>>a,b;
    
    //Sum the values a + b
    c=a+b;
    
    //output the results
    cout<<c<<"="<<a<<"  "<<b<<endl;
    //Exit stage right!
    
    return 0;
    
    
}

