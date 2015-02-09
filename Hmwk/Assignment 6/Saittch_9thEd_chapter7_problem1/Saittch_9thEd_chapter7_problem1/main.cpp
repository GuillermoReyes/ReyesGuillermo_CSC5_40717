//
//  main.cpp
//  Saittch_9thEd_chapter7_problem1
//
//  Created by Guillermo  on 2/6/15.
//  Copyright (c) 2015 Guillermo . All rights reserved.
//

//System libraries
#include <iostream>

using namespace std;
//global constants

//

//function that fills an array with size declared by the user.
//this function will return a value

int firstLast2(int size){    //int a is the actual array and num is thw size of the array
    size= size-1;
    int a[size];
    
    //loop to fill the aray
    int i=0;
    while(i<=size){
        int input;
        cout<<"Enter the value of integer # "<<i+1<<endl;
        cin>>input;
        a[i]=input;
        i++;
    }
    if(a[0]==2||a[size-2]==2) return true;
    else return false;
}
//begin execution here
int main(){
    int num;
    cout<<"how many values would you like to store inside the array?"<<endl;
    cin>>num;
    firstLast2(num);
    return 0;
    
    
}
