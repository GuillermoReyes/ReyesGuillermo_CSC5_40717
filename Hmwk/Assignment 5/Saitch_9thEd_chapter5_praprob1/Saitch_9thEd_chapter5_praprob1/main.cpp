//
//  main.cpp
//  Saitch_9thEd_chapter5_praprob1
//
//  Created by Guillermo  on 1/23/15.
//  Copyright (c) 2015 Guillermo . All rights reserved.
//

#include <iostream>
#include <cmath>

using namespace std;
//Funtion Prototype to alulate the average of 4 numbers
float fourAverage(float a,float b, float c,  float d){
    return (a+b+c+d)/4;
}
//Function that will evalulate deviation
float Dev(float s1, float s2, float, float s3, float s4){
    float a= fourAverage( s1, s2,  s3,  s4);
    return (pow(s1-a,2)+pow(s2-a,2)+pow(s3-a,2)+pow(s4-a,2))/4;
}

   


int main(int argc, const char * argv[]) {
    float a,b,c,d; //Four sores to be used in calculation.
    
    char choose; //chooses wether to proceed with alculations or not
    cout<<"This program will calculate the aerage, and average deviation. "<<endl;
    do{
    cout<<"first sore: "<<endl;
    cin>>a;
    cout<<"Second sore : "<<endl;
    cin>>b;
    cout<<"Third score : "<<endl;
    cin>>c;
    cout<<"Fourth score :"<<endl;
    cin>>c;
    float ave = fourAverage(a,b,c,d);
    float temp = (pow(a-ave,2)+pow(b-ave,2)+pow(c-ave,2)+pow(d-ave,2))/4;
    cout<<"The average is "<<fourAverage(a,b,c,d)<<endl;
    cout<<"Average deviation is"<<sqrt(temp)<<endl;
    cout<<"Would you like to try again? [Y/N]"<<endl;
    cin>>choose;
}while(choose=='y'||choose=='Y');
    return 0;
}
