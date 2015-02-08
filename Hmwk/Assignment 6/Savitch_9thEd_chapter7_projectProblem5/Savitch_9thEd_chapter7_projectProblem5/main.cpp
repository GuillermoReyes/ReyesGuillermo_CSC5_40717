//
//  main.cpp
//  Savitch_9thEd_chapter7_projectProblem5
//  programming project 5
//  Created by Guillermo  on 2/8/15.
//  Copyright (c) 2015 Guillermo . All rights reserved.
//

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

//funtion that will do all required alculations

void count(int size){
    int a[size];
    //loop that fills the array
    for(int i=0;i<size;i++){
        a[i]=rand()%10;
        
    }//closes for loop
    //loop that displys the array
    for(int i=0;i<size;i++){
        cout<<a[i]<<" ";
        if(i%10==(10-1))cout<<endl;
    }//closes for loop
    //loop that will count occurence
    for(int j=0;j<=9;j++){
        int sum=0;
        int count;
        for(int i=0;i<=size;i++){
            if(a[i]==j) count =1;
            else count =0;
            sum+=count;
        }//closes nested for loop
        cout<<j<<"  "<<sum<<endl;
    }//closes for loop
}//closes function
int main(){
    cout<<"This program finds the occurance of integers in an array "<<endl;
    cout<<"It is best that numbers be randomly generated, rather than user imput"<<endl;
    int size=50;
    count(size);
    return false;
}