/* 
 * File:   main.cpp
 * Author: rcc
 *
 * Created on January 21, 2015, 9:20 AM
 */

#include <iostream>

using namespace std;
 float const G = 6.673e-8;

float GravForce(float a,float b,float c){
    //Gravitational constant in cm^3/(g*sec^2))
    float force =(G*a*b)/(c*c);
    return force;
}

int main(int argc, char** argv) {
    
    
    float m1,m2,d; //Mass 1, mass 2, distance
    
    cout<<"this program will calculate the force between two masses over"<<endl;
    cout<<"between two masses in a given distance. "<<endl;
    cout<<"What is the mass of the first body in grams? :"<<endl;
    cin>>m1;
    cout<<"What is the mass of the second body in grams ? :"<<endl;
    cin>>m2;
    cout<<"What is the distance between the two bodies of mass in cm? :"<<endl;
    cin>>d;
    float Gravity = GravForce(m1,m2,d);
    cout<<" the force due to gravity is "<<Gravity<<" dynes. "<<endl;
    
    
   
    
    return 0;
    

    
}

