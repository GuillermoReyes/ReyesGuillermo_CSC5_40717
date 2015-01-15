//
//  main.cpp
//  savitch_9thEd_chapter2_prob14
//
//  Created by Guillermo  on 1/13/15.
//  Copyright (c) 2015 Guillermo . All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
int n = 0; // number of exercises
int score = 0;
int possible = 0;

cout << "How many exercises to input? ";
cin >> n;

for(int i =1; i <= n; i++)
{
    int input;
    
    cout << "Score recieved for exercise " << i << ": "<<endl;
    cin >> input;
    score += input;
    
    cout << "Total points possible for exercise " << i << ": "<<endl;
    cin >> input;
    possible += input;
    }
    
    float percent = (score/possible);
    cout << "Your total is " <<score<< " out of " <<possible<< ", or " <<score/possible<< "%." << endl;
    return true;
}