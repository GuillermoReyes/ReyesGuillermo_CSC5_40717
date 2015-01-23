//
//  main.cpp
//  Savitch_9thEd_chapter4_problem6
//
//  Created by Guillermo  on 1/22/15.
//  Copyright (c) 2015 Guillermo . All rights reserved.
//

#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, const char * argv[]) {
    float money;     //Money inputed by the usera
    float sum=0;
    cout<<"Hello"<<endl;
    cout<<"A fried twinkie will cost you $3.50"<<endl;
    cout<<"To enter 5 cents type'.05' "<<endl;
    cout<<"To enter 10 cents type'.10' "<<endl;
    cout<<"To enter 25 cents type'.25' "<<endl;
    cout<<"To enter 1 dollar type'1.00' "<<endl;
    cout<<endl;

    
    while(sum<3.50){
        cout<<endl;
        cin>>money;
        sum+=money;
        cout<<fixed<<showpoint<<setprecision(2);
        cout<<"there are $"<<sum<<" inserted in the machine. "<<endl;
}
    cout<<fixed<<showpoint<<setprecision(2);
    cout<<"there are $"<<sum<<" in the machine. "<<endl;
    if(sum>3.50){
        cout<<"Your change is $"<<sum-3.50<<endl;
        cout<<"Enjoy your deep fried twinkie ."<<endl;
    }
    else {
        cout<<"I hope you enjoy your fried Twinkie ."<<endl;
    }
    return 0;
}
