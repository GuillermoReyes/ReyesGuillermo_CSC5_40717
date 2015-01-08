/* 
 * File:   main.cpp
 * Author: Guillermo Reyes
 *
 * Created on January 8, 2015, 10:41 AM
 */

#include <iostream>

using namespace std;

int main() {
    //Variables that will be assigned
    int a,b;
    
    cout<<"What is the first integer?";
    cin>>a;
    
    cout<<"what is the second integer?";
    cin>>b;
    
    int c = a+b;
    //Execution
    cout<<"The sum is "<<c<<endl;
    //Exit 
    return 0;
    
}