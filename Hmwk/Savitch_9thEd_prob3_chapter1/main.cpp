/* 
 * File:   main.cpp
 * Author: Guillermo Reyes
 *
 * Created on January 8, 2015, 10:30 AM
 */

#include <iostream>

using namespace std;



int main() {
        int q, d, n;
        
        
    cout<<"How many quarters are there?";
    cin>>q;
    
    cout<<"How many dimes are there?";
    cin>>d;
    
    cout<<"How many nickels are there";
    cin>>n;
    int total;
    total=  (25*q)+(10*d)+(5*n);
    
    cout<<" the amount total in cents is "<<total<<endl;
    
    
    
    return 0;
}