/* 
 * File:   main.cpp
 * Author: rcc
 *
 * Created on January 21, 2015, 10:31 AM
 */

#include <iostream>
#include <iostream>
#include <cmath>

using namespace std;

//Function Prototypes
//FV= future Value
//PV= present value
//i = interest rate per year
//n= number of compounding periods in years
//FV          PV   i     n
float save1(float p,float i,int n){
      return p*pow(1+i,n);
}
float save2(float p,float i,int n){
    return p*exp(n*log(1+i));
}
float save3(float p,float i,int n){
    for(int year=1;year<=n;year++){
        p*=(1+i);
    }
    return p;
}
float save4(float p,float i,int n){
    if(n<=0) return p;
    return save4(p,i,n-1)*(1+i);
}

int main(int argc, char** argv) {
    //Declare and initialize values
    float prsVal= 100.0f; //$100
    float intRate= 6;// Interest rate per year
    int   nCompnd= 72/intRate;//By the rule of 72
    //Convert interest to a fraction
    intRate/=100;
    //output the results
    cout<<"Present Value = $"<<prsVal<<endl;
    cout<<"Interest Rate = "<<intRate*100<<"%"<<endl;
    cout<<"Number of compounding periods = "<<nCompnd<<"(years)"<<endl;
    //Output the Future Value
    cout<<"Our savings = $"<<save1(prsVal,intRate,nCompnd)<<endl;
    cout<<"Our savings = $"<<save2(prsVal,intRate,nCompnd)<<endl;
     cout<<"Our savings = $"<<save3(prsVal,intRate,nCompnd)<<endl;
        cout<<"Our savings = $"<<save4(prsVal,intRate,nCompnd)<<endl;
    //Exit stage right!
    
    return false;
}



