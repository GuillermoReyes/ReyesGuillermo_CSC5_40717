//
//  main.cpp
//  Savith_9thEd_chapter7_problem3
//
//  Created by Guillermo  on 2/7/15.
//  Copyright (c) 2015 Guillermo . All rights reserved.
//

#include <iostream>

using namespace std;
//Function that swaps the numbers in the front and in the back
void swapFrontBack(int size){
    size-=1;
    int a[size];
    //Loop that will fill array
    for(int i=0;i<=size;i++){
        int input;
        cout<<"Enter the integer in spot # "<<i+1<<endl;
        cin>>input;
        a[i]=input;
        
    }//end for loop
    //will now swap the front and the bacl
    int s,b;
    s=a[0];
    b=a[size];
    a[0]=b;
    a[size]=s;
    //loop that will print the array
    for(int i=0;i<=size;i++){
        cout<<a[i]<<" ";
    }//closes for loop
    
}
//Exution starts here . driver program
int main(int argc, const char * argv[]) {
    int num;
    cout<<"Size of array :"<<endl;
    cin>>num;
    
    swapFrontBack(num);
    

    return 0;
}
