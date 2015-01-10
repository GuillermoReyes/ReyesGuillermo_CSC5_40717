//
//  main.cpp
//  Savitch_9thEd_practProb6
//
//  Created by Savitch and modified byGuillermo  on 1/8/15.
//  Copyright (c) 2015 Guillermo . All rights reserved.
//

//The purpose of this program is to intentionally introduce errors and catalog them
// the program will not run

#include < iostream> // Extra space will cause the program to read it incorectly, as well as ommiting the >
using namespace std;
//This program has been copied from text as instructed
 maain( // The program requires a type specifier, also mispelling it causes the program to not recognize the command
       // Removing a ) will not allow the program to be compiled
{
    int number_of_pods, peas_per_pod, total_peas;
    cout << "Enter the number of pods:\n";
    cin >> number_of_pods;
    cout << "Enter the number of peas in a pod:\n";
    cinta >> peas_per_pod; //Incorrectly spelled
    total_peas = number_of_pods * peas_per_pod;
    cout << "If you have ";
    cutt << number_of_pods;// when mispelling commands, the program will not recognize the command
    cout << " pea pods\n";
    cout << "and ";
    cout << peas_per_pod;
    cout << " peas in each pod, then\n";
    cout << "you have ";
    cout << total_peas;
    cout << " peas in all the pods.\n";
    return 0;
    // It is important to follow the formats of C++, after all it is a language, the computer only recognizes correct syntax
}