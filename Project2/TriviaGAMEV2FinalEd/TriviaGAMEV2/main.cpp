//
//  main.cpp
//  TriviaGAMEV2
//  C++ Intro to program logic project 2
//  Created by Guillermo
//  Copyright (c) 2015 Guillermo . All rights reserved.
//

//System Libraries
#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
#include <fstream>
#include <iomanip>
//User Libraries
//Global constants


using namespace std;
//function prototypes
//function to sort


void bubSort(int a[],int num);
//sawap function for sort
void swap(int &a,int &b);
//function to display array
void dispAray(const int a[],int num);
//initializing a variable that is passed on
void levelOne(int sum);
void levelTwo(int &sum);
//funtion for level three questions
void levelThree(int &sum);
//funtion for level four
void levelFour(int &sum);
void levelFive(int &sum);
int main(){
    //Begin game
    //Add databases
    //delare variable for user to choose from switch case
    char pick;
    //output ase statements
    cout<<"Welcome to the Game. "<<endl;
    cout<<"a.Play the game\n";
    cout<<"b.view sources"<<endl;
    cout<<"c.view rules of the game"<<endl;
    cout<<"d.view leaderboard"<<endl;
    cout<<"e.search for player ans score"<<endl;
    //prompt user to choose from swith statement
    cin>>pick;
    switch(pick){
            
            
         //case that executest the game
        case 'a': {
            int sum=0;
            cout<<"Welcome to my Trivia Game!"<<endl;
            //implement all level funtions
            levelOne(sum);
            levelTwo(sum);
            levelThree(sum);
            levelFour(sum);
            levelFive(sum);
            
            //displays how much they have won
            cout<<"You have earned a total of $ "<<sum<<endl;
            //variable that asks for their initials
            char win;
            //prompt for input
            cout<<"Enter your initials so score can be written onto leaderboard."<<endl;
            cin>>win;
            //open two files
            ofstream output;
            output.open("Leaderboard.txt");
            output<<win;
            output.close();
            output.open("Scores.txt");
            output<<sum<<endl;
            //close a file
            output.close();
            break;
        }//end case a
        //display the sources
        case 'b':{
            cout<<"Sources were taken from various wikipedia elements ";
            cout<<" and common knowledge"<<endl;
            cout<<" wikipedia.com"<<endl;
            break;
        }//end case b
        //display rules of the game
        
        case 'c':{
            cout<<"Rules of the Game:"<<endl;
            cout<<"By default, you will be cycled through the entire game"<<endl;
            cout<<"The purpose is to obtain the highest score possible "<<endl;
            cout<<"For every correct answer you will win a certain amount if money"<<endl;
            cout<<"An incorrect answer will not result in a penalty."<<endl;
            cout<<"choose the corresponding number to select your answer."<<endl;
            break;
        }
        //show leaderboards
        case 'd':{
            // fill array with sores
            ifstream score("Scores.txt");
            
            // declare size of array
            const int SIZE=10;
            //declare array for sores
            int myArray2[SIZE];
            //fill array with loop
            for(int i=0;i<SIZE;i++){
                score>>myArray2[i];
            }//closes for loop
            //sorting routine goes here
            //sort the array
            bubSort(myArray2,SIZE);
            //display the asorted array
            dispAray(myArray2,SIZE);
            score.close();
            
            
            
            break;
        }//closes case
            //searches for players
        case 'e': {
            //declare variable for searching
            char target;
            //prompt for search term
            cout<<"Enter a search term (initials)"<<endl;
            cin>>target;
            //stream leaderboard and score file
            ifstream file("Leaderboard.txt");
            ifstream scores("Scores.txt");
            //declare size of array
            const int SIZE =10;
            //declare array used for searching
            char search[SIZE];
            //fill array with scores
            int score[SIZE];
            //loop to search array
            for(int i=0;i<SIZE;i++){
                file>>search[i];
                scores>>score[i];
                if(target==search[i]){
                    //assemble the arrays to output the person and sore searhed
                    cout<<setw(5)<<endl;
                    cout<<search[i]<<" "<<score[i]<<endl;
                }//closes if statement
                else {
                    //continue if person not found
                    continue;
                }
            }//close for loop
            break;
        }//closes case
        //default case
        default:{
            cout<<"Please choose a correct statement"<<endl;
            
        }//end default
    }//end switch statement
    return 0;
}

//bubble sort funtion
void bubSort(int a[],int num){
    //declare boolean
    bool swap2;
    // initialize do while swapping
    do{
        swap2=false;
        //dynamically swap
        for(int i=0;i<num-1;i++){
            if(a[i]<a[i+1]){
                swap(a[i],a[i+1]);
                swap2=true;
            }//close if statement
        }//closes for loop
        
    }while(swap2);
}//closes funtion
//swaps to variables in array
void swap(int &a,int &b){
    //logical exclusive pairs
    a=a^b;
    b=a^b;
    a=a^b;
}//closes funtion
//function that displays an array
void dispAray(const int a[],int num){
    //loop that display sorted function
    for(int i=0;i<num;i++){
        cout<<setw(5)<<endl;
        cout<<a[i]<<endl;
    }//closes for loop
    
}
//function for level one
void levelOne(int sum){
    //level one questions
    string leveloneQ[]={"What is the capital of California",
        "Which president approved the FHA Reverse Mortgage?",
        "Which Inventor discovered Alternating current ?",
        "Macintosh and Linux are ____ based",
        "Europe is a country.",
        "Which Korean leader was featured in the recent film 'The Interview'",
        "___ pioneered mass production vehicles and made billions. ",
        "Who helped write the code for apple when it was a start-up",
        "Canada is North of "};
    
    //options
    string oneResp[]={"1. Sacramento 2.Hawaii 3.Stanford 4.Topeka.",
        "1.Barrack Obama 2.JFK 3.Reagan 4.FDR ",
        "1.Thomas Edision 2.Tesla 3.Jeff 4.Fourier",
        "1.MS-DOS 2.FAT32 3.UNIX 4.Code ",
        "1.True 2.False",
        "1.Kim Jong Un 2.Kim il Un 3.Kim Young Sam 4.Roh Tae-Woo",
        "1.Warren Buffet 2.Henry Ford 3.Richard Branson 4.Al sharpton",
        "1.Steve jobs 2.Tim Cook 3.Steve Wozniak 4.Bill Gates",
        "1.United states 2.Russia 3. Japan 4. Australia"};
    
    //Answers
    int oneansw[] = {1,3,2,3,2,1,2,3,1};
    srand(static_cast<unsigned int>(time(0)));
    cout<<"Welcome to the trivia Game"<<endl;
    cout<<"You earn money by answering the questions correctly"<<endl;
    //Declare variable that will occur constantly
    
    int counter=0;
    int count=0;
    cout<<"In the first level, Questions are worth $1000 "<<endl;
    cout<<endl;
    //Loops that controls the number of questioon asked for level one
    do {
        //decalre variable for user to hoose and generate random number
        int choose;
        int a=rand()%8;
        //dipslay q's and a
        cout<<leveloneQ[a]<<endl;
        cout<<oneResp[a]<<endl;
        //prompt for answer
        cin>>choose;
        //verify if correct
        if(choose==oneansw[a]){
            cout<<"correct."<<endl;
            count=1000;
        }
        if(!(choose==oneansw[a])){
            cout<<"Incorret."<<endl;
            count =0;
            
        }
        sum+=count;
        counter++;
    }while(counter<=2);
    
}
//Function for level two
void levelTwo(int &sum){
    // declare level one questions
    string leveltwo[]= {"who took the road less traveled by ?",
        "Who discovered Radium, consequently receiving radiation ?",
        "Galileo invented the telescope",
        "Which comedian was criticized for his comments regarding 9/11",
        "Mothers day originates from ",
        "California has the highest sales tax rate in the U.S .",
        "When did The US adopt the declaration of Independence ",
        "Is anecdotal evidence considered reliable in the scientific community ? ",
        "Which president was facing near-impeachment, before resigning"};
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
    cout<<"You are now on level two questions"<<endl;
    //For loop for level two questions
    for(int counter=0;counter<=2;counter++){
        //variable for user to choose, money counter, random number generation
        int choose1;
        int count = 0;
        count+=sum;
        //randomly generate a number
        int b=rand()%8;
        //display the questions and responses
        cout<<leveltwo[b]<<endl;
        cout<<twoResp[b]<<endl;
        //prompt for response
        cin>>choose1;
        //erigy answer is corret
        if(choose1==twoansw[b]){
            cout<<"correct!!"<<endl;
            count=25000;
        }//ends if
        if(!(choose1==twoansw[b])){
            cout<<"Incorrect."<<endl;
            count=0;
        }//ends if statement
        sum+=count;
    }//ends for loop
    
    
}
//funtion for level three
void levelThree(int &sum){
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
        "1. Neil Degrasse Tyson 2.Bill Nye 3.Adam Savage 4.Tory Bellecci (MythBusters)",
        "1.conquer 2.perservere 3.laugh 4.cry"};
    //Level 3 answers
    int answ3[]        =  {1,2,3,2,4,1,2,3};
    cout<<"You are now on level 3"<<endl;
    cout<<"The questions are now worth $50,000."<<endl;
    //delare variable that counts money
    int counter;
    int count=0;
    count+=sum;
    while(counter<=3){
        //declare varibal for user to choose
        int choose2;
        //ariable to generate random number
        int c=rand()%8;
        //display question and possibl eresponses
        cout<<levelthree[c]<<endl;
        cout<<threeResp[c]<<endl;
        //prompt for input
        cin>>choose2;
        //erify if answer is correct
        if(choose2==answ3[c]){
            cout<<"Correct!"<<endl;
            count=50000;
        }//End if statement
        if(!(choose2==answ3[c])){
            cout<<"Incorrect!!"<<endl;
            count=0;
        }//ends if statement
        counter++;
        sum+=sum;
    }//Ends while loop
    
}
//function for level four
void levelFour(int &sum){
    //LEvel four questions
    string levelFour[]= {"What does Alt-J's (band) name stands for ",
        "Gibbs free energy is most losely related to ",
        "A _ Magentic field can induce an eletric field",
        "The three types of fores are Gravitational, electrostatic, and _",
        "An object traveling objet at constant velocity has forces that sum to ",
        "Which author made humpty dumpty famous? ",
        "This drug lord gained politial power in colombia",
        "The unites states technically illegalized __ ",
        "Which of the following is the state bird of Oregon ?",
        "U2 is known for being a pioneer in the __ movement. "};
    //LEvel 4 options
    string fourRes[]= {"1.Entropy 2.no signifiance 3.copy-paste 4.Triange ",
        "1.change in temperature 2.Energy available 3.Energy formation 4.Measure of perpetual motion",
        "1.constant 2.linear 3.variable 4.dynamic",
        "1.Nulear 2.Exo-molecular 3.Crystal Lattie forces 4.Fictional Forced ",
        "1.the Velocity 2.Force of object pushing 3.Force due to acceleration of gravity 4.0",
        "1.Lewis Carroll 2. Walt whitman 3.Ralph Reed 4.Jean Babtiste",
        "1.Fidel Castro 2.Pablo Escobar 3.Amado Carillo Fuentes 4.Frank Lucas",
        "1.Slavery 2.filming police offiers 3.The Draft 4.Kinder Eggs ",
        "1.Blue Jay 2.Yellow Tit 3.Crow 4.Western Meadowlark",
        "1.Post-Punk 2.Progressive Rock 3.Easy Listening 4.Punk"};
    //Level 4 answers
    int answ4[] =    {1,2,3,1,4,1,2,4,4,1};
    cout<<"You are now on level 4 questions"<<endl;
    cout<<"These questions are worth $100,000"<<endl;
    int count=0;
    count+=sum;
    for(int counter=0;counter<=2;counter++){
        //declare ariable for user to
        int choose3;
        //generate a random number
        int d=rand()%8;
        //display question and responses
        cout<<levelFour[d]<<endl;
        cout<<fourRes[d]<<endl;
        cin>>choose3;
        //verify answer is correct
        if(choose3==answ4[d]){
            cout<<"Correct"<<endl;
            count=100000;
        }//end if statement
        if(!(choose3==answ4[d])){
            cout<<"Incorrect"<<endl;
            count=0;
        }
        
        sum+=count;
    }
    
    
}
//funciton for level five
void levelFive(int &sum){
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
    cout<<"You are now on Level Five questions."<<endl;
    cout<<"These questions are now worth $250,000"<<endl;
    int count=0;
    //Dynamicallu changing sum of money
    count+=sum;
    for(int counter=0;counter<=2;counter++){
        //variable for user to choose
        int choose4;
        //generate a random number
        int e =rand()%8;
        //display questions and responses
        cout<<levelfive[e]<<endl;
        cout<<fiveRes[e]<<endl;
        //prompt for input
        cin>>choose4;
        //verify user entered the correct response
        if(choose4==answ5[e]){
            cout<<"Correct"<<endl;
            count=250000;
        }//end if statement
        if(!(choose4==answ5[e])){
            cout<<"Incorrect."<<endl;
            count=0;
        }//end if statement
        sum+=count;
    }//end for loop
    
    
}








