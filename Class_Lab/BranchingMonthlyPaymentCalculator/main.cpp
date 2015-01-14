/* 
 * File:   main.cpp
 * Author: Guillermo Reyes
 *
 * Created on January 14, 2015, 11:19 AM
 */

#include <iostream>
using namespace std;
#include <cmath>
#include <iomanip>

//User lib
//Global Constants
//Function Prototypes
//Execution Prototypes


int main(int argc, char** argv) {
    //Declare variables
    float i;//Interest rate per cent per year
    float t;//temp variable
    float l;//loan amount
    unsigned short n;//number of months
    float mp;// monthly payment $'s
    //Input the variable srequired
    cout<<"What is the interest rate in percent per year!(format float)"<<endl;
    cin>>i;
    
    i/=(100*12); //convert to float
    cout<<"What is the loan amount $'s (foating format)"<<endl;
    cin>>l;
    cout<<"number of monthly payments (format integer)"<<endl;
    cin>>n;
    //Calculate the monthly payment
    if(i<=0){
        mp=l/n;
    }else{
        t=pow(1+i,n);
        mp=i*t*l/(t-1);
    }
    //Display results
    cout<<fixed<<setprecision(2);
    cout<<" Your monthly payment is = $"<<mp<<endl;
           
    
    return 0;

}

