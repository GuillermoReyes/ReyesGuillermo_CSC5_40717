//
//  main.cpp
// Trivia Game Projet
//
//  Created by Guillermo  on 1/30/15.
//  Copyright (c) 2015 Guillermo . All rights reserved.
//

#include <cstdlib>
#include <iostream>
#include <ctime>

using namespace std;
//function that stops the game
void pause(int s){
    cout<<"Sorry, you have lost the game. Please restart the prpgram."<<endl;
}

//funtion that generates a number
int numberGenerator(int s) {
    //Dummy Variable
    s=2;
    //Random Number seed
    srand(static_cast<unsigned int>(time(0)));
    int a=rand()%10;
    return a;
}
//Level oone questions
int levelone(int s){
   //Dummy variable
    
    int choice;
    //Initialize random seed
    srand(static_cast<unsigned int>(time(0)));
     int x=rand()%10;
    //questions
    //LEvel one questions
    string leveloneQ[]={"What is the capital of California",
        "Which president approved the FHA Reverse Mortgage?",
        "Which Inventor discovered Alternating current ?",
        "Macintosh and Linux are ____ based",
        "Europe is a country.",
        "Which Korean leader was featured in the recent film 'The Interview'",
        "___ pioneered mass production vehicles and made billions. ",
        "Who wrote the code for apple when it was a start-up",
        "Canada is North of ",};
       
    //options
    string oneResp[]={"1. Sacramento 2.Hawaii 3.Stanford 4.Topeka.",
        "1.Barrack Obama 2.JFK 3.Reagan 4.FDR ",
        "1.Thomas Edision 2.Tesla 3.Jeff 4.Fourier",
        "1.MS-DOS 2.FAT32 3.UNIX 4.Code ",
        "1.True 2.False",
        "1.Kim Jong Un 2.Kim il Un 3.Kim Young Sam 4.Roh Tae-Woo",
        "1.Warren Buffet 2.Henry Ford 3.Richard Branson 4.Al sharpton",
        "1.Steve jobs 2.Tim Cook 3.Steve Wozniak 4.Bill Gates",
        "1.United states 2.Russia 3. Japan 4. Australia",};
       
    //Answers
    int oneansw[] = {1,3,2,3,2,1,2,3,1,4};
    
    cout<<leveloneQ[x]<<endl;
    cout<<oneResp[x]<<endl;
    cin>>choice;
    if(choice==oneansw[x]) cout<<"Congratuilations .";
    else cout<<"Sorry that is incorrect";
    if(choice==oneansw[x]) return 0;
    else return 1;

}



//level two questions
int leveltwo(int s){
    //variable for user to respond
    int choice;
    srand(static_cast<unsigned int>(time(0)));
    int x=rand()%10;
    //Level two questions
    string leveltwo[]= {"who took the road less traveled by ?",
        "Who discovered Radium, consequently receiving radiation ?",
        "Galileo invented the telescope",
        "Which comedian was criticized for his comments regarding 9/11",
        "Mothers day originates from (ancien greeks)",
       
        "California has the highest sales tax rate in the U.S .",
        "When did The US adopt the declaration of Independence ",
        "Is anecdotal evidence considered reliable in the scientific community ? ",
        "Which president was facing near-impeachment, before resigning",};
    //Level two responses
    string twoResp[]= {"1.Robert Kennedy 2.Walt Whitman 3.Ernest Hemingway 4.Robert Frost ",
                        "1.Marie curie 2.George Sherman 3. Deepak Chopra 4.Lise Meitner ",
                        "1.true 2.false",
                        "1.Bill Maher 2.George Carlin 3.Sarah Silverman 4.Michael Richards",
                        "1.brazil 2.Italy 3.Babylonians 4.Ancient Greeks",
                        "1.True 2.False",
                        "1.July 4 1774, 2.July 4 1775 3. July 4 1886 4. July 4 1776",
                        "1.Yes 2.No",
                        "1.George Bush 2.Andrew Johnson 3.Richard Nixon 4.JFK"};
    //Level two answers
        int (twoansw[])= {4,1,2,1,4,1,4,2,4};
    cout<<leveltwo[x]<<endl;
    cout<<twoResp[x]<<endl;
    cin>>choice;
    if(choice==twoansw[x]) cout<<"Congratuilations .";
    else cout<<"Sorry that is incorrect";
    if(choice==twoansw[x]) return 0;
    else return 1;
        }
    
//Level three questions
void levelthree(int x) {
    int choice;
    //Leel three questions
    string levelthree[]={"Pointillism was pioneered by which impressionist artist",
                             "what is the average student loan debt ?",
                             "What phrase does Wi-Fi represent ?",
                             "California is an affirmative action state. ",
                             "The Size of state representaties per state is determined by : ",
                             "Which south Park character was known to ressurect frm death after each episode?",
                             "Which of the following is a famous engineer :",
                            "Finish the phrase. ONe with the courage to _, is the master of the world. "};
    //level three options
    string threeResp[]={ "1.George Seurat 2.Van Gogh 3.Piasso 4.Charled de Moine",
                             "1.$0 2.$29,400 3.$50,000 4.$66,300 ",
                             "1.Wireless Finder 2.wireless fidelity 3.nothing at all 4.Wireless information",
                             "1.True 2.False",
                             "1.GDP 2.a Fixed number 3.State size 4.State population",
                             "1.Kenny 2.Stan 3.kyle 4.Eric Cartman",
                             "1. Neil Degrasse Tyson 2.Warren Buffet 3.Adam Savage 4.Tory Bellecci (MythBusters)",
                             "1.conquer 2.perservere 3.laugh 4.cry",};
    //Level 3 answers
    int answ3[]        =  {1,2,3,2,4,1,2,3};
        cout<<levelthree[x]<<endl;
        cout<<threeResp[x]<<endl;
        cin>>choice;
        if(choice==answ3[x]) cout<<"Congratuilations .";
        else cout<<"Sorry that is incorrect";

        
        
    }
//Level four questions
void levelFour(int x){
    int choice;
    //LEvel four questions
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
    //LEvel 4 options
    string fourRes[]= {"1.Entropy 2.no signifiance 3.copy-paste 4.Triange ",
                            "1.change in temperature 2.Energy available 3.Energy formation 4.Measure of perpetual motion",
                            "1.constant 2.linear 3.variable 4.dynamic",
                            "1.the velocity 2.the force causing velocity. 3.the gravitational force 4.0 ",
                            "1.Lewis Carroll 2. Walt whitman 3.Ralph Reed 4.Jean Babtiste",
                            "1.Fidel Castro 2.Pablo Escobar 3.Amado Carillo Fuentes 4.Frank Lucas",
                            "1.Slavery 2.women's voting restritons 3.The Draft 4.Kinder Eggs ",
                            "1.Blue Jay 2.Yellow Tit 3.Crow 4.Western Meadowlark",
                            "1.Post-Punk 2.Progressive Rock 3.Easy Listening 4.Punk"};
    //Level 4 answers
    int answ4[] =    {1,2,3,4,1,2,3,4,1};
        cout<<levelFour[x]<<endl;
        cout<<fourRes[x]<<endl;
        cin>>choice;
        if(choice==answ4[x]) cout<<"Congratuilations .";
        else cout<<"Sorry that is incorrect";
   
    
    
    }
//Level five questions
int levelFive(int x){
    //User chooses what option
    int choice;
    //Level 5 questions
    string levelfive[] = {"Which head of state recently claimed “white, blue-eyed bankers have brought the world economy to its knees”? ",
                         "Daylight savings was developed to ",
                         "in the 90's The ATF and FBI were involved in a stand-off with ",
                         "Which state legally allows underage drinking ",
                         "what is the minimum age to serve in congress ?",
                         "Which is the only U.S. state to produce coffee?",
                         "What two cities were linked by the Orient Express?",
                        "What are the only two letters that are not on a telphone dial?",
                        "What is philematology?"};
    //Level 5 OPTIONS
    string fiveRes[] = {"1.Luiz Inácio Lula da Silva 2.Diane Feinstein 3.Vladimir Putin 4.Enriqur Pena Nieto ",
                        "1.make farming efficient 2.Save energy 3.honor the gods 4.Adjust to the seasons",
                        "1.Civilians in south central Los Angeles 2.The Crips 3.Waco religous cult 4.Boston bombers",
                        "1.Alaska 2.California 3.Florida 4.Rhode Island",
                        "1.35 2.18 3.30 4.25 ",
                        "1.Hawaii 2.Kansas. 3.Washington 4.Nebraska",
                        "1.Ankara and Athens 2.Paris and Instanbul 3.Maine and Iowa 4.Beijing and Tokyo",
                        "1.D andQ 2.S and T 3.Q and Z 4.H and R",
                        "1.Science of shopping 2.Science of prehistoric fish 3.Scinece of Kissing 4.Statistial coincidences"};
    //Level 5 answers
    int answ5[]     =  {1,2,3,1,4,1,2,3,3};
    
    cout<<levelfive[x]<<endl;
    cout<<fiveRes[x]<<endl;
    cin>>choice;
    if(choice==answ5[x]) cout<<"Correct.";
    else cout<<"Sorry that is incorrect";
    if(choice==answ5[x]) return 0;
    else return 1;
    

 
}
    

int main(int argc, char** argv) {
    //Begin game
    //Add databases
    //LEvel one questions
    string leveloneQ[]={"What is the capital of California",
        "Which president approved the FHA Reverse Mortgage?",
        "Which Inventor discovered Alternating current ?",
        "Macintosh and Linux are ____ based",
        "Europe is a country.",
        "Which Korean leader was featured in the recent film 'The Interview'",
        "___ pioneered mass production vehicles and made billions. ",
        "Who wrote the code for apple when it was a start-up",
        "Canada is North of ",};
    
    //options
    string oneResp[]={"1. Sacramento 2.Hawaii 3.Stanford 4.Topeka.",
        "1.Barrack Obama 2.JFK 3.Reagan 4.FDR ",
        "1.Thomas Edision 2.Tesla 3.Jeff 4.Fourier",
        "1.MS-DOS 2.FAT32 3.UNIX 4.Code ",
        "1.True 2.False",
        "1.Kim Jong Un 2.Kim il Un 3.Kim Young Sam 4.Roh Tae-Woo",
        "1.Warren Buffet 2.Henry Ford 3.Richard Branson 4.Al sharpton",
        "1.Steve jobs 2.Tim Cook 3.Steve Wozniak 4.Bill Gates",
        "1.United states 2.Russia 3. Japan 4. Australia",};
    
    //Answers
    int oneansw[] = {1,3,2,3,2,1,2,3,1};
    //Level two questions
    string leveltwo[]= {"who took the road less traveled by ?",
        "Who discovered Radium, consequently receiving radiation ?",
        "Galileo invented the telescope",
        "Which comedian was criticized for his comments regarding 9/11",
        "Mothers day originates from (ancien greeks)",
        "California has the highest sales tax rate in the U.S .",
        "When did The US adopt the declaration of Independence ",
        "Is anecdotal evidence considered reliable in the scientific community ? ",
        "Which president was facing near-impeachment, before resigning",};
    //Level two responses
    string twoResp[]= {"1.Robert Kennedy 2.Walt Whitman 3.Ernest Hemingway 4.Robert Frost ",
        "1.Marie curie 2.George Sherman 3. Deepak Chopra 4.Lise Meitner ",
        "1.true 2.false",
        "1.Bill Maher 2.George Carlin 3.Sarah Silverman 4.Michael Richards",
        "1.brazil 2.Italy 3.Babylonians 4.Ancient Greeks",
        "1.True 2.False",
        "1.July 4 1774, 2.July 4 1775 3. July 4 1886 4. July 4 1776",
        "1.Yes 2.No",
        "1.George Bush 2.Andrew Johnson 3.Richard Nixon 4.JFK"};
    //Level two answers
    int (twoansw[])= {4,1,2,1,4,2,4,2,3};
    string levelthree[]={"Pointillism was pioneered by which impressionist artist",
        "what is the average student loan debt ?",
        "What phrase does Wi-Fi represent ?",
        "California is an affirmative action state. ",
        "The Size of state representaties per state is determined by : ",
        "Which south Park character was known to ressurect frm death after each episode?",
        "Which of the following is a famous engineer :",
        "Finish the phrase. ONe with the courage to _, is the master of the world. "};
    //level three options
    string threeResp[]={ "1.George Seurat 2.Van Gogh 3.Piasso 4.Charled de Moine",
        "1.$0 2.$29,400 3.$50,000 4.$66,300 ",
        "1.Wireless Finder 2.wireless fidelity 3.nothing at all 4.Wireless information",
        "1.True 2.False",
        "1.GDP 2.a Fixed number 3.State size 4.State population",
        "1.Kenny 2.Stan 3.kyle 4.Eric Cartman",
        "1. Neil Degrasse Tyson 2.Warren Buffet 3.Adam Savage 4.Tory Bellecci (MythBusters)",
        "1.conquer 2.perservere 3.laugh 4.cry",};
    //Level 3 answers
    int answ3[]        =  {1,2,3,2,4,1,2,3};
    //LEvel four questions
    string levelFour[]= {"What does Alt-J's (band) name stands for ",
        "Gibbs free energy is most losely related to ",
        "A _ Magentic field can induce an eletric field",
        "The three types of fores are Gravitational, electrostatic, and _",
        "An object traveling objet at constant velocity has forces that sum to ",
        "Which author made humpty dumpty famous? ",
        "This drug lord gained politial power in colombia",
        "The unites states illegalized __ ",
        "Which of the following is the state bird of Oregon ?",
        "U2 is known for being a pioneer in the __ movement. ",};
    //LEvel 4 options
    string fourRes[]= {"1.Entropy 2.no signifiance 3.copy-paste 4.Triange ",
        "1.change in temperature 2.Energy available 3.Energy formation 4.Measure of perpetual motion",
        "1.constant 2.linear 3.variable 4.dynamic",
        "1.Nulear 2.Exo-molecular 3.Crystal Lattie forces 4.Fictional Forced ",
        "1.the Velocity 2.Force of object pushing 3.Force due to acceleration of gravity 4.0",
        "1.Lewis Carroll 2. Walt whitman 3.Ralph Reed 4.Jean Babtiste",
        "1.Fidel Castro 2.Pablo Escobar 3.Amado Carillo Fuentes 4.Frank Lucas",
        "1.Slavery 2.women's voting restritons 3.The Draft 4.Kinder Eggs ",
        "1.Blue Jay 2.Yellow Tit 3.Crow 4.Western Meadowlark",
        "1.Post-Punk 2.Progressive Rock 3.Easy Listening 4.Punk"};
    //Level 4 answers
    int answ4[] =    {1,2,3,1,4,1,2,4,4,1};
    //Level 5 questions
    string levelfive[] = {"Which head of state recently claimed “white, blue-eyed bankers have brought the world economy to its knees”? ",
        "Daylight savings was developed to ",
        "in the 90's The ATF and FBI were involved in a stand-off with ",
        "Which state legally allows underage drinking ",
        "what is the minimum age to serve in congress ?",
        "Which is the only U.S. state to produce coffee?",
        "What two cities were linked by the Orient Express?",
        "What are the only two letters that are not on a telphone dial?",
        "What is philematology?"};
    //Level 5 OPTIONS
    string fiveRes[] = {"1.Luiz Inácio Lula da Silva 2.Diane Feinstein 3.Vladimir Putin 4.Enriqur Pena Nieto ",
        "1.make farming efficient 2.Save energy 3.honor the gods 4.Adjust to the seasons",
        "1.Civilians in south central Los Angeles 2.The Crips 3.Waco religous cult 4.Boston bombers",
        "1.Alaska 2.California 3.Florida 4.Rhode Island",
        "1.35 2.18 3.30 4.25 ",
        "1.Hawaii 2.Kansas. 3.Washington 4.Nebraska",
        "1.Ankara and Athens 2.Paris and Instanbul 3.Maine and Iowa 4.Beijing and Tokyo",
        "1.D andQ 2.S and T 3.Q and Z 4.H and R",
        "1.Science of shopping 2.Science of prehistoric fish 3.Scinece of Kissing 4.Statistial coincidences"};
    //Level 5 answers
    int answ5[]     =  {1,2,3,1,4,1,2,3,3};
 //Set rand generator seed
    srand(static_cast<unsigned int>(time(0)));
    //sum of fails
    int sum;
    //Introdue game.
    cout<<"For the first round, Questions answered corretly are awarded $500."<<endl;
    //loop count
    int i=0;
    while(i<=2){
        //user chooses the orret answer
        int choice;
        i++;
        int count;
        //Random number
        int x=rand()%10;
        cout<<leveloneQ[x]<<endl;
        cout<<oneResp[x]<<endl;
        cin>>choice;
        if(choice==oneansw[x]) {
            cout<<"Congratuilations .";
            count=500;
        }
        else {
            cout<<"Sorry that is incorrect";
            count=0;
        }
        sum+=count;
      
    
    if(sum<2){
        cout<<endl;
       
    }
        }
    
    cout<<endl;
    cout<<"You Have made it to level two, questions answered corretly are worth $1000."<<endl;
    //loop count
    int j=0;
    //keep track of losses
    int sum1;
    do{
        //user chooses the orret answer
        int choice;
        j++;
        int count;
        //Random number
        int x=rand()%10;
        cout<<leveltwo[x]<<endl;
        cout<<twoResp[x]<<endl;
        cin>>choice;
        if(choice==twoansw[x]) {
            cout<<"Congratuilations .";
            count=1000;
        }
        else {
            cout<<"Sorry that is incorrect";
            count=0;
        }
        sum+=count;
    }while(j<=2);
    if(sum1<2){
        cout<<endl;
        
    }
   
    cout<<"You  have made it to level three!!"<<endl;
    cout<<"Questios are now worth $5,000."<<endl;
    cout<<"Questions will also rise in difficulty"<<endl;
    cout<<endl;
    //keep track of losses
    int sum2;
    for(int k=0;k<=2;k++){
        //fails
        int count;
        //keep track of fails
        int choice;
        //random number
        int x=rand()%10;
        //begin trivia
        cout<<levelthree[x]<<endl;
        cout<<threeResp[x]<<endl;
        cin>>choice;
        if(choice==answ3[x]) {
            cout<<"Congratuilations .";
            count=5000;
        }
        else {
            
        cout<<"Sorry that is incorrect";
            count=1;
        }

        sum+=count;
    }
    
    if(sum2<1){
        cout<<endl;
    }
    if(sum2>1) {
        cout<<"You Have lost. Restart the game"<<endl;
       
        
    }
    cout<<"YOu have made it to level four !!!"<<endl;
    cout<<"Questions answered corretly will be awarded $50,000";
    int sum3;
    //loop count
    int l=0;
    while(l<=1){
        //user chooses the orret answer
        int choice;
        l++;
        int count;
        //Random number
        int x=rand()%10;
        cout<<levelFour[x]<<endl;
        cout<<fourRes[x]<<endl;
        cin>>choice;
        if(choice==answ4[x]) {
            cout<<"Congratuilations .";
            count=0;
        }
        else {
            cout<<"Sorry that is incorrect";
            count=50,000;
        }
        sum+=count;
        if(sum<2) continue;
    }
    if(sum<=2){
        cout<<endl;
        
    }
   
    cout<<"YOu have made it to the final level. According to the internet, these questions are difficult."<<endl;
    cout<<"questions are worth $250,000"<<endl;
    int sum4;
    //loop count
    int m=0;
    while(m<=2){
        //user chooses the orret answer
        int choice;
        m++;
        int count;
        //Random number
        int x=rand()%10;
        cout<<levelfive[x]<<endl;
        cout<<fiveRes[x]<<endl;
        cin>>choice;
        if(choice==answ5[x]) {
            cout<<"Congratuilations .";
            count=250000;
        }
        else {
            cout<<"Sorry that is incorrect";
            count=0;
        }
        sum+=count;
    }
    if(sum4<1){
        cout<<endl;
        
    }
    //Game reahes end
    cout<<"You Have Reached end of Game"<<endl;
    cout<<"You Have won a total of $"<<sum<< " dollars "<<endl;
    cout<<"You get to write your Initials on the leaderboard"<<endl;

    return 0;
    
    
    
}




