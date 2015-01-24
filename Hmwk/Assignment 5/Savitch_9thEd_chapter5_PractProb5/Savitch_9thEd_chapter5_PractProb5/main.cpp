//
//  main.cpp
//  Savitch_9thEd_chapter5_PractProb5
//
//  Created by Guillermo  on 1/24/15.
//  Copyright (c) 2015 Guillermo . All rights reserved.
//

#include <iostream>

using namespace std;


//Funtion that performs calulation
void ImperToMetric(float &lb,float &oz){
    lb/=2.2046;
    float temp= (oz/16)/2.2046;
    oz=temp/1000;
}
//Funtion that outputs the
void output(float kg,float g){
    cout<<"it is "<<kg<<" kilograms and "<<g<<" grams."<<endl;
}
//Exeution begins here
int main(int argc, const char * argv[]) {
    //Introduce ariable to determine when to stop application
    char choose;
    
    float lb,oz;
    
    do
    {
        cout<<"Weight in pounds :"<<endl;
        cin>>lb;
        cout<<"Weight in ounces: "<<endl;
        cin>>oz;
        ImperToMetric(lb, oz);
        output(lb,oz);
        cout<<"Try again? [Y/N]"<<endl;
        cin>>choose;
        
      //Consition of execution
    }while(choose=='Y'||choose=='y');
    //Exit Program
    return false;
}
