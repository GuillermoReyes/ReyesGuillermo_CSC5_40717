/* 
 * File:   main.cpp
 * Author: Guillermo Reyes
 *
 * Created on January 8, 2015, 8:16 AM
 */

#include <iostream>

using namespace std;

//User Libraries

//Global consyants

const char CONVPCT=100;//percent conversion



int main(int argc, char** argv) {
    //Declare Variables
    
    short custSrv=12467;// customers surveyed
    char perEdrk=14; //Percentage Energy Drinkers
    char perCDrk=64; //Percentage Citrus drinkers
    
    //calculate customer numbers requested
    short custE= custSrv*perEdrk/CONVPCT;// Energy drinkers
    short custC=custE*perCDrk/CONVPCT;//Citrus Drinkers
    //Output the results
    cout<<"Custumer survey that are Energy Drinkers = ";
    cout<<custE<<endl;
    cout<<"customers surveyed that are citrus drinkers = ";
    cout<<custC<<endl;
    //Exit stage right!
    return 0;
    

}

