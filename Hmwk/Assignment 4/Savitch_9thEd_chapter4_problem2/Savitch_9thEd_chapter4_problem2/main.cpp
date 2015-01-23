//
//  main.cpp
//  Savitch_9thEd_chapter4_problem2
//
//  Created by Guillermo  on 1/21/15.
//  Copyright (c) 2015 Guillermo . All rights reserved.
//

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

//Funtion Prototypes

float Hsize(float w,float h){
    return w/h*2.9;
}
float Jsize(float we, float he,float a) { //weight,height,age
    if (a>=50) return (he*we/288)+.125*floor((a-40)/10);
    return he*we/288;
    
}


int main() {
    float weight,height,age;
    char choose;
    float Wsize = weight/5.7;
    do {
    
    cout<<"Weight in pounds :"<<endl;
    cin>>weight;
    cout<<"height in inches : "<<endl;
    cin>>height;
    cout<<"Age in years : "<<endl;
    cin>>age;
    cout<<endl;
    cout<<fixed<<showpoint<<setprecision(0);
    cout<<"Your Hsize is "<<Hsize(weight,height)<<endl;
    cout<<"Your jacket size (chest in inches) is "<<Jsize(weight,height,age)<<endl;
   
    if(age>=30){
        Wsize=(weight/5.7)+.1*floor((age-28)/2);
    }
    cout<<"Your waist size is: "<<Wsize<<endl;
        
        
    
   
    cout<<"Would you like to try again? [Y/N]"<<endl;
    cin>>choose;
    } while(choose=='y'||choose=='Y');
    
    return 0;
    
}

