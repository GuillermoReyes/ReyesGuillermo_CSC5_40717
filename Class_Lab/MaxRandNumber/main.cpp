/* 
 * File:   main.cpp
 * Author: rcc
 *
 * Created on January 21, 2015, 8:19 AM
 */

#include <iostream>
#include <cmath>
#include <iomanip>
#include <cstdlib>
#include <ctime>


using namespace std;
const unsigned int = pow(2,31)

int main(int argc, char** argv) {
    //Set random number seed
    srand(static_cast<unsigned int>(time(0)));
    //Declare max variable
    int loop= 10000000;
    int max=rand();
    //Now loop to find maximum random number
    for (int i=2;i<=loop;i++){
        int r= rand();
        if(r>max)max=r;
        
        
    }
  //Output result
    cout<<"2^31 = "<<MAXRAND<<endl;
    cout<<"MAximum found = "<<max<<endl;
    return 0;
}

