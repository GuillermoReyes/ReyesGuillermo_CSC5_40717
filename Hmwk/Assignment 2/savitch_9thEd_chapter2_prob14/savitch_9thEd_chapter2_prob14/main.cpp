//
//  main.cpp
//  savitch_9thEd_chapter2_prob14
//
//  Created by Guillermo  on 1/13/15.
//  Copyright (c) 2015 Guillermo . All rights reserved.
//

#include <iostream>
using namespace std;
#include <iomanip>

int main() {
    int n = 0; // number of exercises
    float score = 0;   //Student score
    float possible = 0; // amount possible
    
    cout << "How many exercises to input? ";
    cin >> n;
    
    for(int i =1; i <= n; i++)   //execution begins here
    {
        int input;
        
        cout << "Score recieved for exercise " << i << ": "<<endl;
        cin >> input;
        score += input;
        
        cout << "Total points possible for exercise " << i << ": "<<endl;
        cin >> input;
        possible += input;
    }
    
    cout<<fixed<<showpoint<<setprecision(2)<<endl;
    cout << "Your total is " <<score<< " out of " <<possible<< ", or " <<score/possible*100<< "%." << endl;
    
    return 0;
}