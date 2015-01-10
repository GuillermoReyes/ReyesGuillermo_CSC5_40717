//
//  main.cpp
//  Savitch9thEd_practprob5_chapter1
//
//  Created by Guillermo  on 1/10/15.
//  Copyright (c) 2015 Guillermo . All rights reserved.
//

#include <iostream>
using namespace std;
//This program is a modifiation so that we may calculate the area of a rectangular space
int main( )
{
    // Introduce the variables
    float width, length, area;
    
    //Prompt user for width
    cout << "Enter the width:\n";
    cin >> width;
    
    //Prompt for length
    cout << "Enter the length:\n";
    cin >> length;
    
    area = (2*width)+(2*length);
    
    cout << "If you have a length of  ";
    cout << length;
    
    cout << " and a width of ";
    cout << width;
    
    //Execute alculation
    cout << " you have an area of: ";
    cout << area;
    cout<<"  \n";
    
    return 0;
}