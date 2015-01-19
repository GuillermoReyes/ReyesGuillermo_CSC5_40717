//
//  main.cpp
//  Savitch_9thEd_hapter2_problem13
//
//  Created by Guillermo  on 1/19/15.
//  Copyright (c) 2015 Guillermo . All rights reserved.
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    int add;
    
    for(add=1;add<=9999;add++){   // initializes range of address
        
        int thousands = (add / 1000) % 10;
        int hundreds = (add / 100) % 10;
        int tens = (add / 10) % 10;
        int ones = add % 10;
        
        if(thousands==3*tens){
            
            cout<<"Scanning...\n";
            
            if(!(thousands=hundreds=tens=ones)){
                cout<<"Scanning...\n";
                
                if(thousands+hundreds+tens+ones==27){
                    
                    cout<<add<<endl;
                    
                    
                }
            }
        }
            
    }
    
   
    
    return 0;
    
}