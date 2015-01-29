/* 
 * File:   main.cpp
 * Author: rcc
 *
 * Created on January 29, 2015, 8:11 AM
 */

#include <cstdlib>
#include <iostream>
#include <ctime>
//Counts the  money gained from playing who wants to be a millionaire
void moneyCount(int a ){
    
}
void leveltwo(float a){
    string leveltwo[]={"who took the road less traveled by ?",
                       "Who discovered Radium, consequently receiving radiation ?",
                       "Which po artist was iconic in the 60's",
                       ""
            
}

using namespace std;

int main(int argc, char** argv) {
    cout<<"Welcome to 'Who wants to become a millionaire'\n";
    cout<<"simply input the number that corresponds to the correct answer\n";
    cout<<"Rules of the game: \n";
    
    
   int response;
    string leveloneQ[]={"What is the capital of California",
                        "Which president approved the FHA Reverse Mortgage?",
                        "Which Inventor discovered Alternating current ?",
                        "Macintosh and Linux are ____ based",
                        "Europe is a country.",
                        "Which Korean leader was featured in the recent film 'The Interview'",
                        "___ pioneered mass production vehicles and made billions. ",
                        "Who wrote the code for apple when it was a start-up",
                        "Canada is North of ",
                        "Harry Potter has a scar on his ___"};
    string oneResp[]={"1. Sacramento 2.Hawaii 3.Stanford 4.Topeka.",
                         "1.Barrack Obama 2.JFK 3.Reagan 4.FDR ",
                         "1.Thomas Edision 2.Tesla 3.Jeff 4.Fourier",
                         "1.MS-DOS 2.FAT32 3.UNIX 4.Code ",
                         "1.True 2.False",                         
                         "1.Kim Jong Un 2.Kim il Un 3.Kim Young Sam 4.Roh Tae-Woo",
                         "1.Warren Buffet 2.Henry Ford 3.Richard Branson 4.Al sharpton",
                         "1.Steve jobs 2.Tim Cook 3.Steve Wozniak 4.Bill Gates",
                         "1.United states 2.Russia 3. Japan 4. Australia",
                         "1. Arm  2.Leg 3.Toe 4.Forehead "};
    char oneansw[] = {1,3,2,3,2,1,2,3,1,4};
    cout<<leveloneQ[0]<<" "<<oneResp[0]<<endl;
    cin>>response;
    if(response==oneansw[0]){
        cout<<"correct"<<endl;
    }
    else cout<<"You are wrong .."<<endl;
    return 0;
}

