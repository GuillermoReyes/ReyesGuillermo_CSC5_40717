/* 
 * File:   main.cpp
 * Author: rcc
 *
 * Created on January 28, 2015, 10:01 AM
 */

#include <iostream>
#include <cmath>
#include <cstdlib>

using namespace std;

int main(int argc, char** argv) {
    char choose;                          //User decides when to escape game 
    do {
        cout<<"Hello"<<endl;
        cin>>choose;
        
    }while(!(choose=='E'||choose=='e'));
    return 0;
}

