//
//  main.cpp
//  Saitch_9thEd_hapter7_problem2
//
//  Created by Guillermo  on 2/6/15.
//  Copyright (c) 2015 Guillermo . All rights reserved.
//

#include <iostream>

using namespace std;
//Funtion prptotypes
void countNum2s(int Size){
    int a[Size];
    int sum=0;
    int count;
    //fill array
    for(int i=0;i<=Size;i++){
        int input;
        cout<<"enter value for spot # "<<i+1<<endl;
        cin>>input;
        a[i]=input;
    }//ends for loop and all that shit
    //part that searcheas for the twos
    for(int i=0;i<=Size;i++){
        if (a[i]==2) count=1;
        else count=0;
        sum+=count;
    }//closes for loop
    cout<<"THere are "<<sum<<" two's in the array "<<endl;
}//closes funtion protoype
//begin exectution here
int main(){
    //delare ariable that ssngs size of the array
    
    int size;
    cout<<"enter size of array : "<<endl;
    cin>>size;
    size-=1;
    //funtion that counts how many twos are in the array
    countNum2s(size);
    //exit program
   
    return 0;
    
    
}
