/* 
 * File:   main.cpp
 * Author: rcc
 *
 * Created on February 5, 2015, 10:09 AM
 */
//This program ALlocates memory to make the program dynamic 
//and reduce runtime errors
#include <iostream>
#include <ctime>
#include <cstdlib>
#include <iomanip>

using namespace std;
int *filAray(int);
void prntAry(int*,int,int);
void swap(int *,int *);
void markSrt(int*,int);
void destroy(int *);

int main(int argc, char** argv) {
    //Initialixe random number seed
    srand(static_cast<unsigned int>(time(0)));
//Declare and initialize array 
    int size = 100;
    int *array=filAray(size);
    
    prntAry(array,size,10);
    
    //Destroy Array
    destroy(array);
    return 0;
}
void swap(int *x,int *y){
    int temp=*x;
    *x=*y;
    *y=temp;
}

void prntAry(int* a,int n,int perLine){
    cout<<endl;
    for(int i=0;i,n;i++){
        cout<<*(a+i)<<" ";
        if(i%perLine==(perLine-1))cout<<endl;
    }
}
int *filAray(int ){
    //Allocate memory
    if(n<=1) return 0;
    int *a= new int[n];
    //Fill with random num bers
    for(int i=0;i<=n;i++){
        *(a+i)=rand()%90=10;
        
    }
    return a;
}
void destroy(int *a){
    
}