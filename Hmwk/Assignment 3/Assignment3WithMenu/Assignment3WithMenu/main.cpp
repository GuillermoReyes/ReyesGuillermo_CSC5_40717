//
//  main.cpp
//  Assignment3WithMenu
//
//  Created by Guillermo  on 1/19/15.
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


int main(int argc, char** argv) {
    //Assignment 2 menu
    cout<<"solution 1 Savitch 9th Ed chapter 3, problem 2"<<endl;
    cout<<"solution 2 Savitch 9th Ed chapter 3, problem 1"<<endl;
    cout<<"solution 3 Savitch 9th Ed chapter 3, practice problem 5"<<endl;
    cout<<"solution 4 Savitch 9th Ed chapter 3, practice problem 6"<<endl;
    cout<<"solution 5 Savitch 9th Ed chapter 3, problem 5"<<endl;
    cout<<"solution 6 Savitch 9th Ed chapter 3, problem 7"<<endl;
    cout<<"solution 7 Savitch 9th Ed chapter 3, practice problem 7"<<endl;
    cout<<"solution 8 Savitch 9th Ed chapter 3, problem 8"<<endl;
    cout<<"solution 9 Savitch 9th Ed chapter 3, problem 10"<<endl;
    
    cout<<" Input which solution you would like to see"<<endl;
    
    int choice;
    cin>>choice;
    //Based on the choice, display the results
    switch(choice) {
            //Global constants if any
        case 1:{
            cout<<"You have chosen solution 1"<<endl;
            cout<<"Consider a polynomial of the format ax^2+bx+c=0\n";
            cout<<" Where a,b,c are the coeffiients of the variables constanst\n";
            char prompt;       //User decides wether to proceed with action
            cout<<"would you like to perform a calculation?\n";
            cout<<"type 'Y' for yes or 'N' for no."<<endl;
            cin>>prompt;
            
            while(prompt=='Y'||prompt=='y'){
                float a;
                float b;
                float c;
                cout<<"What is the value of a ?: ";
                cin>>a;
                cout<<"What is the value of b ?: ";
                cin>>b;
                cout<<"What is the value of c ?: ";
                cin>>c;
                
                if(((4*a*c)<(b*b))) {
                    float quad1= (-b+sqrt(b*b-4*a*c))/(2*a); //First variant of the quadrati formula
                    float quad2= (-b-sqrt(b*b-4*a*c))/(2*a);//Second variant of the quadratic formula
                    
                    cout<<"the values of terms are "<<quad1<<" and "<<quad2<<endl;
                    
                }
                if(((4*a*c)>(b*b))){
                    float imag1a= -b/(2*a);             // First variant of quadratic formula
                    float imag1b= sqrt(4*a*c-b*b)/(2*a);//first variant of quadratic if imaginary number
                    float imag2a= -b/(2*a);             //Second variant of quadratic formula
                    float imag2b=-sqrt(4*a*c-b*b)/(2*a);//Second variant of the quadratic if imaginary number
                    
                    cout<<"the values of variable are: "<<imag1a<<"+"<<imag1b<<"i "<<endl;
                    cout<<"                       and: "<<imag2a<<"-"<<imag2b<<"i "<<endl;
                }
                if(((4*a*c)==(b*b))) {
                    float quad1= (-b+sqrt(b*b-4*a*c))/(2*a);
                    cout<<"The only value of the variable is "<<quad1<<endl;
                }
                cout<<"would you like to perform another calculation?\n";
                cout<<"type 'Y' for yes or 'N' for no."<<endl;
                cin>>prompt;
                
                
                
            }

            break;
        }
            
        case 2:{
            cout<<"You have chosen solution 1"<<endl;
            cout<<"This program wil calculate the cost of your long-distance phone call.\n";
            char choose;
            cout<<"Would you like to proceed?. Type Y for yes or N for no.\n";
            cin>>choose;
            while(choose=='Y'||choose=='y'){
                char day; //Variabll for the day
                int time; //Variable for the time of the day
                int duration;// Duration of call in minutes
                
                cout<<"Input the day of the call in the following format :\n";
                cout<<"For Monday type 'M'"<<endl;
                cout<<"For Tuesday type 'T'"<<endl;
                cout<<"For Wednesday type 'W' "<<endl;
                cout<<"For Thursday type 'P'"<<endl;
                cout<<"For Friday type 'F' "<<endl;
                cout<<"For Saturday type S"<<endl;
                cout<<"For Sunday type 'A'"<<endl;
                cout<<" This program is case-sensitive, so please use the specified symbols\n";
                cin>>day;
                
                cout<<"Input the time of the call in 24 hour notation/military time. "<<endl;
                cout<<" Example. 1330 or 745. etc.  "<<endl;
                cin>>time;
                
                cout<<"What is the duration of the call in minutes?"<<endl;
                cin>>duration;
                
                
                switch(day) {
                    case 'M':
                    case 'T':
                    case 'W':
                    case 'P':
                    case 'F':
                        if(time>=800&&time<=1800){
                            float rate = .40*duration; //Calulates the cost of the phone call
                            cout<<"the phone call cost $"<<rate<<endl;
                            
                        }
                        else{
                            float rate =.25*duration;
                            cout<<"the phone call cost $"<<rate<<endl;
                        }
                        break;
                    case 'S':
                    case 'A':
                        float rate =duration*.15;
                        cout<<"the phone call cost $"<<rate<<endl;
                        break;
                        
                        
                        
                        
                        
                }
                cout<<"Would you like to repeat this program? Y/N.\n";
                cin>>choose;
            }

            break;
        }
            
        case 3:{
            cout<<"You have chosen solution 1"<<endl;
            cout<<"this program reads odd numbers from 3 to 100. That is all.\n";
            int x= 3;
            
            while(x<=100){
                
                cout<<x<<endl;
                x+=2;
            }
            cout<<"Goodbye\n";

            break;
        }
        case 4:{
            cout<<"You have chosen solution 1"<<endl;
            float PI = 3.14;      //value of pi
            float Y = 62.4;      // the specific weight of water is 62.4lb/ft^3
            
            float radius;
            float weight;
            
            cout<<"What is the radius of the sphere (in feet)?:";
            cin>>radius;
            cout<<"What is the weight of sphere (in pounds)?:";
            cin>>weight;
            
            float v =.75*PI*radius*radius*radius;
            float Fb= v*Y;   //The formula for buoyancy
            
            if(weight>Fb){
                cout<<"The object will sink.\n";
            }
            if(weight<=Fb){
                cout<<"the object will float.\n";
            }
            break;
        }
        case 5:{
            cout<<"You have chosen solution 1"<<endl;
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

            break;
        }
        case 6:{
            cout<<"You have chosen solution 1"<<endl;
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

            break;
        }
        case 7:{
            cout<<"You have chosen solution 1"<<endl;
            cout<<"From this list you will be able to see when Celsius=Fahrenheit"<<endl;
            
            int Ce; //Celsius
            Ce=100;
            int far;
            
            
            while(Ce>=-60){
                far= (((9*Ce)/5)+32);
                cout<<far<<" degrees Fahrenheit is "<<Ce<<" degrees Celsius"<<endl;
                Ce--;
                
                
            }
            
            cout<<"Scan the output to see when C=F\n";

            break;
        }
        case 8:{
            cout<<"You have chosen solution 1"<<endl;
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

            break;
        }
        case 9:{
            cout<<"You have chosen solution 1"<<endl;
            float const chocbar = 230; //calories
            
            cout<<"This program will calculate how many chocolate bars you should eat to maintain your body weight"<<endl;
            float height, weight, age;
            
            cout<<"What is your height(in inches)? ";
            cin>>height;
            
            cout<<"What is your weight in pounds? ";
            cin>>weight;
            
            cout<<"What is your age(in years, of course)? ";
            cin>>age;
            
            float men =  (655+ (4.3*weight)+(4.7*height)-(4.7*age));//formual for men
            float women =(66+(6.3*weight)+(12.9*height)-(6.8*age)); //formula for women
            
            char sex; // The sex of the human, wether male or female
            
            cout<<"what is your sex?"<<endl;
            cout<<"if male type m, if feale type f."<<endl; //to limit user error
            cin>>sex;
            char choose;
            cout<<"Choose either a,b,c, or d based on the following selection.\n";
            cout<<" Are you:"<<endl;
            cout<<"a. Sedentary"<<endl;
            cout<<"b. Somewhat active (exercise occasionally)"<<endl;
            cout<<"c. Active(exercise 3-4 days a week)"<<endl;
            cout<<"d. Highly Active(Exercise everyday)"<<endl;
            cin>>choose;
            
            cout<<fixed<<showpoint<<setprecision(0);
            if(sex=='m'&&choose=='a'){
                cout<<"eat about "<<(men+men*.20)/chocbar<<" chocolate bars to maintain your body weight"<<endl;
            }
            
            if(sex=='f'&&choose=='a') {
                cout<<"eat about "<<(women+women*.20)/chocbar<<" chocolate bars to maintain your body weight"<<endl;
            }
            if(sex=='m'&&choose=='b'){
                cout<<"eat about "<<(men+men*.3)/chocbar<<" chocolate bars to maintain your body weight"<<endl;
            }
            
            if(sex=='f'&&choose=='b') {
                cout<<"eat about "<<(women+women*.3)/chocbar<<" chocolate bars to maintain your body weight"<<endl;
            }
            if(sex=='m'&&choose=='c'){
                cout<<"eat about "<<(men+men*.4)/chocbar<<" chocolate bars to maintain your body weight"<<endl;
            }
            
            if(sex=='f'&&choose=='c') {
                cout<<"eat about "<<(women+women*.4)/chocbar<<" chocolate bars to maintain your body weight"<<endl;
            }
            if(sex=='m'&&choose=='d'){
                cout<<"eat about "<<(men+men*.5)/chocbar<<" chocolate bars to maintain your body weight"<<endl;
            }
            
            if(sex=='f'&&choose=='d') {
                cout<<"eat about "<<(women+women*.5)/chocbar<<" chocolate bars to maintain your body weight"<<endl;
            }
            break;
        }
    }
    return 0;
}
        