//
//  main.cpp
//  Savith_9thEd_chapter2_prob13
//
//  Created by Guillermo  on 1/12/15.
//  Copyright (c) 2015 Guillermo . All rights reserved.
//

#include <iostream>

using namespace std;
float const chocbar = 230; //calories

int main(int argc, const char * argv[]) {
    
    cout<<"this program will calculate how many chocolate bars you shoul deat to maintain your body weight";
    float height, weight, age;
    
    cout<<"What is your height(in inches)? ";
    cin>>height;
    
    cout<<"What is your weight in pounds? ";
    cin>>weight;
    
    cout<<"What is your age(in years, of course)? ";
    cin>>age;
    
    float men =  (655+ (4.3*weight)+(4.7*height)-(4.7*age))/chocbar;//formual for men
    float women =(66+(6.3*weight)+(12.9*height)-(6.8*age))/chocbar; //formula for women
    
    char sex; // The sex of the human, wether male or female
    
    cout<<"what is your sex?"<<endl;
    cout<<"if male type m, if feale type f."<<endl; //to limit user error
    cin>>sex;
    
    
    
    if(sex=='m'){
        cout<<"eat "<<men<<" chocolate bars to maintain your body weight"<<endl;
    }
        
    if(sex=='f') {
        cout<<"eat "<<women<<" chocolate bars to maintain your body weight"<<endl;
    }
    
    
    
    
    return 0;
}
