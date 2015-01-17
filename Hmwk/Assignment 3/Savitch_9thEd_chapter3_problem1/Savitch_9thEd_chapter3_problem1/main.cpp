//
//  main.cpp
//  Savitch_9thEd_chapter3_problem1
//
//  Created by Guillermo  on 1/16/15.
//  Copyright (c) 2015 Guillermo . All rights reserved.
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    cout<<"This program wil calculate the cost of your long-distance phone call.\n";
    
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
    cout<<" This program is ase-sensitive, so please use the specified symbols\n";
    cin>>day;
    
    cout<<"In put the time of the call in 24 hour notation/military time. "<<endl;
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
    return 0;
}

