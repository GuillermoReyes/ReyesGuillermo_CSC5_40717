//
//  main.cpp
//  Savitch_9thEd_chapter2_problem11
//
//  Created by Guillermo  on 1/14/15.
//  Copyright (c) 2015 Guillermo . All rights reserved.
//

#include <iostream>
using namespace std;



int main()
{
    int v1 = 0, v2 = 0;
    cout << "Enter a range of degrees using two integers: "<<endl;
    cin >> v1 >> v2;
    int t =  std::min(v1, v2);
    int max = std::max(v1, v2);
    while (t <= max)
    {
        float velocity= 331.3+(.61*t);
        cout<<"The velocity at "<< t <<" degrees celsius is "<<velocity<<"m/s"<<endl;
        ++ t;
    }
    return 0;
}