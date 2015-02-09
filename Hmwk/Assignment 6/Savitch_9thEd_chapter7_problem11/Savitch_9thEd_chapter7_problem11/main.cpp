//
//  main.cpp
//  Savitch_9thEd_chapter7_problem11
//
//  Created by Guillermo  on 2/8/15.
//  Copyright (c) 2015 Guillermo . All rights reserved.
//

#include <iostream>
#include <string>

using namespace std;
int main()
{
    char Seat = ' ';
    string Seats[7] = {"1ABCD", "2ABCD", "3ABCD", "4ABCD", "5ABCD", "6ABCD", "7ABCD"};
    char choose = ' ';
    int Row = 0;
    
    choose = 'y';
    
    while(choose == 'y'||choose=='Y')
    {
        cout << "Enter a row: ";
        cin >> Row;
        cout << "Enter a seat: ";
        cin >> Seat;
        
        int idx = 1 + Seat - 'A';
        if(Seats[Row-1][idx] == 'X') { 
            cout << "Seat is taken." << endl;
            continue; }
        else
            Seats[Row - 1][idx] = 'X';
        cout << "Enter another seat? (y/n): ";
        cin >> choose;
        
        for(int i=0; i<7; ++i)
        {
            cout << Seats[i] << endl;
        }
        
    } //end while
    
    cout << "Bye!" << endl;
    
  
    return 0;
}


