//
//  main.cpp
//  Assignment2WithMenu
//
//  Created by Guillermo  on 1/14/15.
//  Copyright (c) 2015 Guillermo . All rights reserved.
//

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;


int main(int argc, char** argv) {
    //Assignment 2 menu
    cout<<"solution 1 Savitch 9th Ed chapter 2, problem 1"<<endl;
    cout<<"solution 2 Savitch 9th Ed chapter 2, problem 3"<<endl;
    cout<<"solution 3 Savitch 9th Ed chapter 2, problem 5"<<endl;
    cout<<"solution 4 Savitch 9th Ed chapter 2, problem 6"<<endl;
    cout<<"solution 5 Savitch 9th Ed chapter 2, problem 11"<<endl;
    cout<<"solution 6 Savitch 9th Ed chapter 2, problem 12"<<endl;
    cout<<"solution 7 Savitch 9th Ed chapter 2, problem 13"<<endl;
    cout<<"solution 8 Savitch 9th Ed chapter 2, problem 14"<<endl;
    cout<<"solution 9 Savitch 9th Ed chapter 2, problem 15"<<endl;
    
    cout<<" Input which solution you would like to see"<<endl;
    
    int choice;
    cin>>choice;
    //Based on the choice, display the results
    switch(choice) {
            //Global constants if any
        case 1:{
            cout<<"You have chosen solution 1"<<endl;
            float const SIS    =      350*.001; //How many grams per soda can that are the sweetener
            float const DTHRAT =     .1429;    // The death rati0; percentage to find lethal dose of sweetener
            float Weight; //weight of the user
            
            cout<<" What is the ideal weight you would like to have, in grams?\n";
            cout<<"at what weight will you stop dieting?\n";
            cin>>Weight;
            
            // This is the specific "death capacity" calculated for the specific user
            float specdos = DTHRAT*Weight;
            // How many can will kill the user
            int death     = specdos/SIS;
            
            cout<<"You will die if you drink "<<death<<" cans of soda"<<endl;
            break;
        }
           
        case 2:{
            
            cout<<"You have chose solution 2"<<endl;
            const float HRTOMIN = 60; // 60 min per hour
            const float MINTOSE = 60;// 60 sec per min
            
            float pace;
            cout<<"what is your pace in miles per hour?";
            cin>>pace;
            
            float newpace = 1/pace; //PAce in hours per mile
            float minpmile= newpace*HRTOMIN; //pace in minutes per mile
            int   mpm     = minpmile*1;
            float secpmile= (minpmile-mpm)*MINTOSE;// remainder in seconds per mile
            // output the results
            cout<<"your pace is "<<mpm<<" minutes and "<<secpmile<<" seconds ";
            cout<<"per mile"<<endl;

            
            break;
            
        }
            //Global constants if any
        case 3:{
            cout<<"You have chosen solution 1"<<endl;
            cout<<"This program will determine if your meeting is in accordance ";
            cout<<"with regulations"<<endl;
            
            int  people, maxcap;// VAribale for amount of people and max capacity
            
            cout<<"What is the maximum capacity of the room: ";
            cin>>maxcap;
            
            cout<<"How many people will be attending the meeting: ";
            cin>>people;
            
            
            if(people<maxcap){
                int okay = maxcap-people; //How many more people can attend meeting
                cout<<"your meeting adheres to safety guidelines,";
                cout<<" you can include "<<okay<<" more people in your meeting"<<endl;
                
                
            }
            
            if(people>maxcap){
                int bad  = people-maxcap;//People that need to leave the meeting
                cout<<"The meeting exceeds the capacity. ";
                cout<<"Reduce your meeting by "<<bad<<" people"<<endl;
                
            }

            break;
        }
            //Global constants if any
        case 4:{
            cout<<"You have chosen solution 1"<<endl;
            cout<<"I did this problem differently than in the book. This version is slightly more useful.";
            cout<<" It uses California and Federal tax rates to calculate net income within a tax bracket\n";
            float TAX = .155; //total taxes colleted on gross income
            float MIN =18193.75; //minimum you have to gie to feds based on tax bracket
            float FDTAX = .28; //tax rate on amount over $89,350
            float GROSS;  // this is the input gross inome
            
            cout<<"Enter an Income within the range of $89,350 to $186,350 :";
            cin>>GROSS;
            
            float add= (GROSS-89350)*FDTAX;//Additional inome taxed
            
            float net = GROSS-add-GROSS*TAX-MIN;
            cout<<"Your total net income (take-home pay) is :$"<<net<<endl;
            
            cout<<"Your monthly net income is $"<<net/12<<endl;
            return 0;
            break;
        }
            //Global constants if any
        case 5:{
            cout<<"You have chosen solution 5"<<endl;
            int v1 = 0, v2 = 0;
            cout << "Enter a range of degrees using two integers: "<<endl;
            cin >> v1 >> v2;
            int t =  std::min(v1, v2);
            int max = std::max(v1, v2);
            while (t <= max)
            {
                float velocity= 331.3+(.61*t);
                cout<<"The velocity at "<< t <<" degrees celsius is "<<velocity<<"m/s"<<endl;
                ++ t;
            }
            break;
        }
            //Global constants if any
        case 6:{
            cout<<"You have chosen solution 1"<<endl;
            float const GALFT = 7.84; //how many gallon per cubic ft
            float const PI    = 3.1416; //Value of PI
            float const INFT  = 12; //12 inches in a foot
            float radius,height;
            
            
            cout<<"What is the radius of the well in inches?: ";
            cin>>radius;
            
            float conv= radius/INFT;//converts inches to feet
            
            cout<<"How deep is the well in feet?: ";
            cin>>height;
            
            //Finds volume then gallons
            float volume = PI*conv*conv*height;
            float gallon = volume*GALFT;
            
            cout<<"Your well can hold "<<gallon<<endl;
            cout<<" gallons, congratulations."<<endl;
            break;
        }
            //Global constants if any
        case 7:{
            cout<<"You have chosen solution 1"<<endl;
            float const chocbar = 230; //calories
            cout<<"this program will calculate how many chocolate bars you should eat to maintain your body weight.";
            float height, weight, age;
            
            cout<<" What is your height(in inches)? ";
            cin>>height;
            
            cout<<"What is your weight in pounds? ";
            cin>>weight;
            
            cout<<"What is your age(in years, of course)? ";
            cin>>age;
            
            float men =  (655+ (4.3*weight)+(4.7*height)-(4.7*age))/chocbar;//formual for men
            float women =(66+(6.3*weight)+(12.9*height)-(6.8*age))/chocbar; //formula for women
            
            char sex; // The sex of the human, wether male or female
            
            cout<<"what is your sex?"<<endl;
            cout<<"if male type lowercase m, if female type lowercase f."<<endl; //to limit user error
            cin>>sex;
            
            
            
            if(sex=='m'){
                cout<<"eat "<<men<<" chocolate bars to maintain your body weight"<<endl;
            }
            
            if(sex=='f') {
                cout<<"eat "<<women<<" chocolate bars to maintain your body weight"<<endl;
            }
            
            break;
        }
            //Global constants if any
        case 8:{
            cout<<"You have chosen solution 1"<<endl;
            int n = 0; // number of exercises
            float score = 0;   //Student score
            float possible = 0; // amount possible
            
            cout << "How many exercises to input? ";
            cin >> n;
            
            for(int i =1; i <= n; i++)   //execution begins here
            {
                int input;
                
                cout << "Score recieved for exercise " << i << ": "<<endl;
                cin >> input;
                score += input;
                
                cout << "Total points possible for exercise " << i << ": "<<endl;
                cin >> input;
                possible += input;
            }
            
            cout<<fixed<<showpoint<<setprecision(2)<<endl;
            cout << "Your total is " <<score<< " out of " <<possible<< ", or " <<score/possible*100<< "%." << endl;
            break;
        }
            //Global constants if any
        case 9:{
            cout<<"You have chosen solution 1"<<endl;
            float alpha,length,temp; // ariables for constant, length , and temperature
            
            cout<<"What is the specific constant of the material for elasticity?";
            cin>>alpha;
            
            cout<<"What is the length of the material in meters? ";
            cin>>length;
            
            cout<<"What is the change in temperature in celsius?";
            cin>>temp;
            
            float stretch =alpha*length*temp;
            
            // Conditional execution wether it is negative or positive
            if(stretch<=0) {
                cout<<" it contracts by "<<abs(stretch)<<" meters"<<endl;
                
            }
            if(stretch>=0) {
                cout<<"it expands by "<<stretch<<" meters"<<endl;
            }
            
            
            break;
        }
            
    return 0;
    }}
