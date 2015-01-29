/* Partially Filled arrays
 * File:   main.cpp
 * Author: Guillermno
 * Created on January 29, 2015, 9:16 AM
 */

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
//User Libraries

//Global Constants
const int COL=200;

//Function Prototypes
void filAray(int [],int);
void filAray(int [][COL],int,int);
void filAray(int [][COL],int,int);
void prntary(int [],int,int);
void prntAry(int [][COL],int,int);

using namespace std;
//Execution 
int main(int argc, char** argv) {
    
    return 0;
}
void prntAry(int a[],int n,int perLine){
    for(int i=0;i<n;i++){
        if(i%perLine==(perLine-1))cout<<endl;
    }
}             
    

//andomly fill the Array with two digit numbers
void filAray(int a[],int n){
  for(int i=0;i<n;i++){
      a[i]=rand()%90+10;
      

  }  
}
//Reference variables pass on values to other function, it connects them together
//Declari