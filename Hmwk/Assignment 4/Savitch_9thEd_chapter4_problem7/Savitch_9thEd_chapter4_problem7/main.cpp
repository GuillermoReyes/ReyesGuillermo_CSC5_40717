//
//  main.cpp
//  Savitch_9thEd_chapter4_problem7
//
//  Created by Guillermo  on 1/22/15.
//  Copyright (c) 2015 Guillermo . All rights reserved.
//

#include <iostream>

using namespace std;

//Function prototypes
int computeDifference(int hr,int HR,int min,int MIN,char isAM){  //hr=initilal hour,HR= final time in minutes
    float Hours = HR-hr;
    float Mins  =MIN-min;                                        //min=initial min,MIN= end time in  minutes
    if(isAM=='y'||isAM=='Y') return Hours*60+Mins;               //isAM=determine if they are in AM or PM
    if(isAM=='n'||isAM=='N') return Hours*60+12*60+Mins;
    return Hours*60 +Mins;
}

int main() {
    int hr1,hr2,min1,min2;  //initial hour,final hour,initial minute,  final minute
    char Equal;             //Determines if it is AM or PM
    char choose;            //ariable to prompt uder if they would like to continue
    //Exeution Begins here
    do {
    cout<<"Welcome to my time Machine!"<<endl;
    cout<<"You may only go forward up to 25 hours."<<endl;
    cout<<"Start time in hours : "<<endl;
    cin>>hr1;
    cout<<"End time in hours: "<<endl;
    cin>>hr2;
    cout<<"Start time in minutes : "<<endl;
    cin>>min1;
    cout<<"End time in minutes : "<<endl;
    cin>>min2;
    cout<<"Are they both of equal time periods?"<<endl;
    cout<<"Example: are they both AM or are they both PM [Y/N] ?"<<endl;
    cout<<"If incorrect input chosen, program will assume they are of same time period. "<<endl;
    cin>>Equal;
    cout<<"The amount travelled in minutes is : "<<computeDifference(hr1,hr2,min1,min2,Equal)<<endl;
        cout<<"Would you like to try again? "<<endl;
        cin>>choose;
    } while(choose=='Y'||choose=='y');
    //Exit Program. 
    
    return 0;
}