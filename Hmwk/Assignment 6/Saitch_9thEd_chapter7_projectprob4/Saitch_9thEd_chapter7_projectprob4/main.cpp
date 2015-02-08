//
//  main.cpp
//  Saitch_9thEd_chapter7_projectprob4
//
//  Created by Guillermo  on 2/7/15.
//  Copyright (c) 2015 Guillermo . All rights reserved.
//

#include <iostream>
#include <cmath>

using namespace std;

//Function that will calculate standard deviation
void stDev(int size){
    
    float a[size];
    for(int i=0;i<size;i++){
        float input;
     
        cout<<"Enter value for spot # "<<i+1<<endl;
        cin>>input;
        a[i]=input;
        
    }//closes for loop
   
    float sum=0;
    for(int i=0;i<size;i++){
        sum+=a[i];
    }
   float avg=sum/size;
    cout<<"The average is "<<avg<<endl;
    float plus=0;
    //loop that will calulate deviation individually and fill it in a new array
    for(int i=0;i<size;i++){
        float value=a[i];
       
    
        float dev=pow(value-avg,2);
        plus+=dev;
        
    }//closes for loope
 
    float temp=plus/size;
    cout<<" The standard deviation is "<<sqrt(temp)<<endl;
    
}//closes function

//main execution begins here
int main(){
    float choose;
    cout<<"Enter the size of array : ";
    cin>>choose;
    stDev(choose);
    return true;
}