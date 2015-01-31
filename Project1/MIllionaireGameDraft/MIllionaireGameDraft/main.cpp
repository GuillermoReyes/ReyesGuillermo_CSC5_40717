//
//  main.cpp
//  MIllionaireGameDraft
//
//  Created by Guillermo  on 1/30/15.
//  Copyright (c) 2015 Guillermo . All rights reserved.
//

#include <cstdlib>
#include <iostream>
#include <ctime>
#include <stdlib.h>
#include <stdio.h>

using namespace std;
//Counts the  money gained from playing who wants to be a millionaire
void moneyCount(int a ){
    
}
//Level oone questions
void levelone(){
 
    

    
    //questions
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
    //options
    string oneResp[]={"1. Sacramento 2.Hawaii 3.Stanford 4.Topeka.",
        "1.Barrack Obama 2.JFK 3.Reagan 4.FDR ",
        "1.Thomas Edision 2.Tesla 3.Jeff 4.Fourier",
        "1.MS-DOS 2.FAT32 3.UNIX 4.Code ",
        "1.True 2.False",
        "1.Kim Jong Un 2.Kim il Un 3.Kim Young Sam 4.Roh Tae-Woo",
        "1.Warren Buffet 2.Henry Ford 3.Richard Branson 4.Al sharpton",
        "1.Steve jobs 2.Tim Cook 3.Steve Wozniak 4.Bill Gates",
        "1.United states 2.Russia 3. Japan 4. Australia",
        "1. Arm  2.Leg 3.Temple 4.Forehead "};
    //Answers
    int oneansw[] = {1,3,2,3,2,1,2,3,1,4};
}



//level two questions
void leveltwo(char a){
    string leveltwo[]= {"who took the road less traveled by ?",
        "Who discovered Radium, consequently receiving radiation ?",
        "Galileo invented the telescope",
        "Which comedian was criticized for his comments regarding 9/11",
        "Mothers day originates from (ancien greeks)",
        "Which Amendment states that the senate shall  be comprised of two senators from each state",
        "California has the highest sales tax rate in the U.S .",
        "When did The US adopt the declaration of Independence ",
        "Is anecdotal evidence considered reliable in the scientific community ? ",
        "Which president was facing near-impeachment, before resigning",};
        string twoResp[]= {"1.Robert Kennedy 2.Walt Whitman 3.Ernest Hemingway 4.Robert Frost ",
                        "1.Marie curie 2.George Sherman 3. Deepak Chopra 4.Lise Meitner ",
                        "1.true 2.false",
                        "1.Bill Maher 2.George Carlin 3.Sarah Silverman 4.Michael Richards",
                        "a.brazil b.Italy c.Babylonians d.Ancient Greeks",
                        "1.True 2.False",
                        "1.July 4 1774, 2.July 4 1775 3. July 4 1886 4. July 4 1776",
                        "1.Yes 2.No",
                        "1.George Bush 2.Andrew Johnson 3.Richard Nixon 4.JFK"};
            int (twoansw[])= {4,1,2,1,4,1,4,2,4};
        }
    
//Level three questions
void levelthree(char a) {
        string levelthree[]={"Pointillism was pioneered by which impressionist artist",
                             "what is the average student loan debt ?",
                             "What phrase does Wi-Fi represent ?",
                             "California is an affirmative action state. ",
                             "The Size of state representaties per state is determined by : ",
                             "Which south Park character was known to ressurect frm death after each episode?",
                             "Which of the following is a famous engineer :",
                            "Finish the phrase. ONe with the courage to _, is the master of the world. "};
        string threeResp[]={ "1.George Seurat 2.Van Gogh 3.Piasso 4.Charled de Moine",
                             "1.$0 2.$29,400 3.$50,000 4.$66,300 ",
                             "1.Wireless Finder 2.wireless fidelity 3.nothing at all 4.Wireless information",
                             "1.True 2.False",
                             "1.GDP 2.a Fixed number 3.State size 4.State population",
                             "1.Kenny 2.Stan 3.kyle 4.Eric Cartman",
                             "1. Neil Degrasse Tyson 2.Warren Buffet 3.Adam Savage 4.Tory Bellecci (MythBusters)",
                             "1.conquer 2.perservere 3.laugh 4.cry",};
        int answ[]        =  {1,2,3,2,4,1,2,3};
            
        
        
    }
//Level four questions
void levelFour(){
        string levelFour[]= {"What does Alt-J's (band) name stands for ",
                                "Gibbs free energy is ",
                                "A _ Magentif field can induce an eletric field",
                                "The three types of fores are Gravitational, electrostatic, and _",
                                "An object traveling objet at constant velocity has forces that sum to ",
                                "Which author made humpty dumpty famous? ",
                                "This drug lord gained politial power in colombia",
                                "The unites states illegalized __ ",
                                "Which of the following is the state bird of Oregon ?",
                                "U2 is known for being a pioneer in the __ movement. ",};
        string fourRes[]= {"1.Entropy 2.no signifiance 3.copy-paste 4.Triange ",
                            "1.change in temperature 2.Energy available 3.Energy formation 4.Measure of perpetual motion",
                            "1.constant 2.linear 3.variable 4.dynamic",
                            "1.the velocity 2.the force causing velocity. 3.the gravitational force 4.0 ",
                            "1.Lewis Carroll 2. Walt whitman 3.Ralph Reed 4.Jean Babtiste",
                            "1.Fidel Castro 2.Pablo Escobar 3.Amado Carillo Fuentes 4.Frank Lucas",
                            "1.Slavery 2.women's voting restritons 3.The Draft 4.Kinder Eggs ",
                            "1.Blue Jay 2.Yellow Tit 3.Crow 4.Western Meadowlark",
                            "1.Post-Punk 2.Progressive Rock 3.Easy Listening 4.Punk"};
        int answ[] =    {1,2,3,4,1,2,3,4,1};
            
        
            
    }
//Level five questions
void leelFive(){
    string levelfive[] = {"Which head of state recently claimed “white, blue-eyed bankers have brought the world economy to its knees”? ",
                         "Daylight savings was developed to ",
                         "in the 90's The ATF and FBI were involved in a stand-off with ",
                         "Which state legally allows underage drinking ",
                         "what is the minimum age to serve in congress ?",
                         "Which is the only U.S. state to produce coffee?",
                         "What two cities were linked by the Orient Express?",
                        "What are the only two letters that are not on a telphone dial?",
                        "What is philematology?"};
    string fiveRes[] = {"1.Luiz Inácio Lula da Silva 2.Diane Feinstein 3.Vladimir Putin 4.Enriqur Pena Nieto ",
                        "1.make farming efficient 2.Save energy 3.honor the gods 4.Adjust to the seasons",
                        "1.Civilians in south central Los Angeles 2.The Crips 3.Waco religous cult 4.Boston bombers",
                        "1.Alaska 2.California 3.Florida 4.Rhode Island",
                        "1.35 2.18 3.30 4.25 ",
                        "1.Hawaii 2.Kansas. 3.Washington 4.Nebraska",
                        "1.Ankara and Athens 2.Paris and Instanbul 3.Maine and Iowa 4.Beijing and Tokyo",
                        "1.D andQ 2.S and T 3.Q and Z 4.H and R",
                        "1.Science of shopping 2.Science of prehistoric fish 3.Scinece of Kissing 4.Statistial coincidences"};
    char answ[]     =  {1,2,3,1,4,1,2,3,3};
    
        

 
}
    

    

        
        int main(int argc, char** argv) {
            cout<<"Welcome to 'Who wants to become a millionaire'\n";
            cout<<"simply input the number that corresponds to the correct answer\n";
            cout<<"Rules of the game: \n";
            srand(static_cast<unsigned int>(time(0)));
            int x  =rand()%10;
            cout<<x<<endl;
            
            
        
            return 0;
        }




