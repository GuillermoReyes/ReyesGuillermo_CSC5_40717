//
//  main.cpp
//  Savitch_9thEd_chapter7_problem4
//
//  Created by Guillermo  on 2/7/15.
//  Copyright (c) 2015 Guillermo . All rights reserved.
//

#include <iostream>
#include <string>

using namespace std;

//funtion prototypes

//Execution begins here
int main(int argc, const char * argv[]) {
    string names[] = {"Michael Myers"
                        "Ash Williams",
                        "Jack Torrance",
        "Freddy Kreuger"};
    string phoneNumbers[]= {"333-8000",
                                "333-2323",
                                "333-6150",
        "339-7970"};
    string targetName,targetPhone;
    char c;
    
        cout<<"Enter a name to find "
        <<"corresponding phone number>"
        <<endl;
    cin>>c;
    for(int i=0;i<=4;i++){
        if (c==names[]) cout<<"the number is "<<phoneNumbers[i];
    }//closes for loop
    
        
 
    return 0;
}
