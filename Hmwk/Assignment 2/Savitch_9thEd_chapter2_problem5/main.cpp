/* 
 * File:   main.cpp
 * Author: rcc
 *
 * Created on January 14, 2015, 8:58 AM
 */

#include <iostream>

using namespace std;


int main(int argc, char** argv) {
    cout<<"This program will determine if your meeting is in accordance ";
    cout<<"with Fire Marshall regulations"<<endl;
    
    int  people, maxcap;// VAribale for amount of people and max capacity
    
    cout<<"What is the maximum capacity of the room";
    cin>>maxcap;
    
    cout<<"How many people will be attending the meeting";
    cin>>people;
    
    int okay = maxcap-people;
    int bad  = people-maxcap;
    
        if(people<maxcap){
            cout<<"your meeting adheres to safety guidelines";
            cout<<" you can include"<<okay<<" more people in your meeting"<<endl;
            
        
        }
    
        if(people>maxcap){
            cout<<"The meeting exceeds the capacity";
            cout<"Reduce your meeting by "<<bad<<"people"<<endl;
        
        }
    return 0;
}

