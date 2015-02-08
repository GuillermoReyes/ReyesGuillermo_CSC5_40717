//
//  main.cpp
//  Saitch_9thEd_chapter7_projectprob4
//
//  Created by Guillermo  on 2/7/15.
//  Copyright (c) 2015 Guillermo . All rights reserved.
//

#include <iostream>

using namespace std;
//Funtion prototype that fills an array and calulates standard deviation.
void fillArray(int size){
    size-=1;
    float a[size];
    for(int i=0;i<=size;i++){
        int input;
        cout<<"Enter the number in positon "<<i+1<<endl;
        cin>>input;
        input=a[i];
        
        
    }//loses for loop
    for(int i=0;i<=size;i++){
        a[i]+=0;
    }
    
}

int main(int argc, const char * argv[]) {
      //Exection begins here
    int choose;
    cout<<"THis program will alculate the standard deviation of series of numbers"<<endl;
    cout<<"Enter the size of array"<<endl;
    cin>>choose;
    fillArray(choose);
    
    return 0;
}
