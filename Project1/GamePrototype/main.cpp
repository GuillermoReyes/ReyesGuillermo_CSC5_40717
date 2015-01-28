/* 
 * File:   main.cpp
 * Author: rcc
 *
 * Created on January 28, 2015, 10:01 AM
 */

#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>

using namespace std;
//Global Variable
const float G= 9.8;  //acceleration due to gravity in m/sec^2

//Function Prototypes
//Calculates the assist of the boost packs
void assist(float &a){
    float mass  = 70.8;      //Weight of average adult in kilograms. source : google
    float force = (-mass*G);    //force of gravity on a mass
    float assist= force+a;
    cout<<assist<<endl;
}

int main(int argc, char** argv) {
    char choose;                          //User decides when to escape game 
    //the force that the boost pack apply 
    float pack1 = 1000.0;
    float pack2 = 10011.0;
    float pack3 = 66000.0;
    
    // Basic skeleton of the program
    do {
        cout<<" You are flying ";
        assist(pack1);
        cout<<"Hello "<<endl;
        cin>>choose;
        
    }while(!(choose=='E'||choose=='e'));
    return 0;
}

