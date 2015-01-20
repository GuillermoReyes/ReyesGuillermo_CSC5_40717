//
//  main.cpp
//  Savitch_9thEd_chapter3_problem5
//
//  Created by Guillermo  on 1/17/15.
//  Copyright (c) 2015 Guillermo . All rights reserved.
//

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    float intpay,ibalance,install,i,period; //interest payment,loan amount,installment amount,interest rate,mo. to pay loan
    
    cout<<"What is the interest rate? (%):";
    cin>>i;
    cout<<"What is the loan amount? :";
    cin>>ibalance;
    cout<<"what is the term of the loan (in months) :";
    cin>>period;
    int month=0;
    install=ibalance/period;
    float balance=ibalance;         //shows that initial balance is equal to loan amount
    float MonthInt= (i/100)/12;     //the monthly interest rate
    float TotalInt=0;               //The sum of the Interest paid (for while loop)
    float Princpay;                 //Amount paid towards principal
    
    
    
    
    
    
    while(balance>install){
        month++;                    //Counts the months
        intpay=MonthInt*balance;    //money paid towards interest
        TotalInt+=intpay;           //Sum of all Interest paid
        Princpay= install-intpay;
        balance-=Princpay;
        cout<<fixed<<showpoint<<setprecision(2);
        cout<<"at month "<<month<<" the interest paid is $"<<TotalInt<<endl;
        cout<<" and the remaining balance is $"<<balance<<endl;
    }
        cout<<"At month "<<month<<" the balance is "<<balance<<"\n";
        cout<<endl;
        cout<<"The total amount paid towards interest is $"<<TotalInt<<endl;
        float years=period/12;          //years to pay off loan
        cout<<"the anualized interest rate is "<<(TotalInt/years)/ibalance*100<<"%."<<endl;
    
    
    return 0;
}

        
    
    
    
    
    








    
    
    
    
    
    
    
