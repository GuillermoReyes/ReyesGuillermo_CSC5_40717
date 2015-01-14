/* 
 * File:   main.cpp
 * Author: Guillermo Reyes
 *
 * Created on January 14, 2015, 8:58 AM
 */

#include <iostream>

using namespace std;


int main(int argc, char** argv) {
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
    return 0;
}

