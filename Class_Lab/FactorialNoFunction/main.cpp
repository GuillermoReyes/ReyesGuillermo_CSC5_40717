/* 
 * File:   main.cpp
 * Author: Guillermo R
 * Factorial
 * Created on January 21, 2015, 8:53 AM
 */

#include <iostream>

using namespace std;


int main(int argc, char** argv) {
    //Declare Variables
    int nFactrl=1,n;
    //Prompt user for factorial
    cout<<" What N would you like to use to "<<endl;
    cout<<"calculate N!"<<endl;
    cin>>n;
    //Do the calculation
    for(int i=1;i<=n;i++){
        nFactrl*=i;
 }
    //Output the result
    cout<<n<<"! = "<<nFactrl<<endl;
    //Exit stage right

    return 0;
}

