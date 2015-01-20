/* 
 * File:   main.cpp
 * Author: Mark lehr
 * 23 Game 
 * Created on January 20, 2015, 10:25 AM
 */
//System Libraries
#include <iostream>


using namespace std;
//User libs
//global constants
//Function prototypes
//Execution Begins here
int main(int argc, char** argv){
    //DEclare Variable
    int thPick= 23;
    bool computer;
    short nPckRmv;
    
    //Playing the gAME
    do{
               //Designate
        computer=false;
           //Ask PLayer how many toothpics
        do{
    
        cout<<"There are "<<thPick<<" left to remove"<<endl;
        cout<<"How many toothpicks would you like to draw?";
        cout<<"Choose 1,2, or 3"<<endl;
        cin>>nPckRmv;
        }while(nPckRmv<=0||nPckRmv>=4||nPckRmv>thPick);
        //Remove the number of toothpicks
        thPick-=nPckRmv;
        //Designate the computer
        computer=true;
        //Utilize logic from the book
        if(thPick>4){
            nPckRmv=4-nPckRmv;
            thPick-=nPckRmv;
            
        } else if(thPick>=2&&thPick<=4){
            thPick=1;
            }else if(thPick=1){
                thPick=0;
                computer=false;
            }
        
    }while(thPick>1);
        
    //Output the winner or loser
    if(computer){
        cout<<"computer wins. You Lose!"<<endl;
    }else{
        cout<<"You win!"<<endl;
    }
    //Exit the game
    return 0;
}


