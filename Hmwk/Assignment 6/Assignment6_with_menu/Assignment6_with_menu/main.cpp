//
//  main.cpp
//  Assignment6_with_menu
//
//  Created by Guillermo  on 2/8/15.
//  Copyright (c) 2015 Guillermo . All rights reserved.
//

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>

using namespace std;
//function Prototypes
int firstLast2(int size){    //int a is the actual array and num is thw size of the array
   
    size-=1;
    int a[size];
    
    //loop to fill the aray
    int i=0;
    while(i<=size){
        int input;
        cout<<"Enter the value of integer # "<<i+1<<endl;
        cin>>input;
        a[i]=input;
        i++;
    }
    if(a[0]==2||a[size-2]==2) return 10;
    else return 5;
}
void countNum2s(int Size){
    int a[Size];
    int sum=0;
    int count;
    //fill array
    for(int i=0;i<=Size;i++){
        int input;
        cout<<"enter value for spot # "<<i+1<<endl;
        cin>>input;
        a[i]=input;
    }//ends for loop
    //part that searcheas for the twos
    for(int i=0;i<=Size;i++){
        if (a[i]==2) count=1;
        else count=0;
        sum+=count;
    }//closes for loop
    cout<<"THere are "<<sum<<" two's in the array "<<endl;
}//closes funtion protoype
//Function that will calculate standard deviation
void stDev(int size){
    
    float a[size];
    for(int i=0;i<size;i++){
        float input;
        
        cout<<"Enter value for spot # "<<i+1<<endl;
        cin>>input;
        a[i]=input;
        
    }//closes for loop
    
    float sum=0;
    for(int i=0;i<size;i++){
        sum+=a[i];
    }
    float avg=sum/size;
    cout<<"The average is "<<avg<<endl;
    float plus=0;
    //loop that will calulate deviation individually and fill it in a new array
    for(int i=0;i<size;i++){
        float value=a[i];
        
        
        float dev=pow(value-avg,2);
        plus+=dev;
        
    }//closes for loope
    
    float temp=plus/size;
    cout<<" The standard deviation is "<<sqrt(temp)<<endl;
    
}//closes function
//Function that swaps the numbers in the front and in the back
void swapFrontBack(int size){
    size-=1;
    int a[size];
    //Loop that will fill array
    for(int i=0;i<=size;i++){
        int input;
        cout<<"Enter the integer in spot # "<<i+1<<endl;
        cin>>input;
        a[i]=input;
        
    }//end for loop
    //will now swap the front and the bacl
    int p1,p2;
    p1=a[0];
    p2=a[size];
    a[0]=p2;
    a[size]=p1;
    //loop that will print the array
    for(int i=0;i<=size;i++){
        cout<<a[i]<<" ";
    }//closes for loop
    
}
//funtion that will do all required alculations

void count(int size){
    int a[size];
    //loop that fills the array
    for(int i=0;i<size;i++){
        a[i]=rand()%10;
        
    }//closes for loop
    //loop that displys the array
    for(int i=0;i<size;i++){
        cout<<a[i]<<" ";
        if(i%10==(10-1))cout<<endl;
    }//closes for loop
    //loop that will count occurence
    for(int j=0;j<=9;j++){
        int sum=0;
        int count;
        for(int i=0;i<=size;i++){
            if(a[i]==j) count =1;
            else count =0;
            sum+=count;
        }//closes nested for loop
        cout<<j<<"  "<<sum<<endl;
    }//closes for loop
}//closes function
char matrix[3][3] = { '1', '2', '3', '4', '5', '6', '7', '8', '9' };
char player = 'X';
void display()
{
    
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}
void Input()
{
    int a;
    cout << "Press the number that corrsponds to the spot to play ";
    cin >> a;
    
    if (a == 1)
        matrix[0][0] = player;
    else if (a == 2)
        matrix[0][1] = player;
    else if (a == 3)
        matrix[0][2] = player;
    else if (a == 4)
        matrix[1][0] = player;
    else if (a == 5)
        matrix[1][1] = player;
    else if (a == 6)
        matrix[1][2] = player;
    else if (a == 7)
        matrix[2][0] = player;
    else if (a == 8)
        matrix[2][1] = player;
    else if (a == 9)
        matrix[2][2] = player;
}
void switchPlayer()
{
    if (player == 'X')
        player = 'O';
    else
        player = 'X';
}
char Winner()
{
    //first player
    if (matrix[0][0] == 'X' && matrix[0][1] == 'X' && matrix[0][2] == 'X')
        return 'X';
    if (matrix[1][0] == 'X' && matrix[1][1] == 'X' && matrix[1][2] == 'X')
        return 'X';
    if (matrix[2][0] == 'X' && matrix[2][1] == 'X' && matrix[2][2] == 'X')
        return 'X';
    
    if (matrix[0][0] == 'X' && matrix[1][0] == 'X' && matrix[2][0] == 'X')
        return 'X';
    if (matrix[0][1] == 'X' && matrix[1][1] == 'X' && matrix[2][1] == 'X')
        return 'X';
    if (matrix[0][2] == 'X' && matrix[1][2] == 'X' && matrix[2][2] == 'X')
        return 'X';
    
    if (matrix[0][0] == 'X' && matrix[1][1] == 'X' && matrix[2][2] == 'X')
        return 'X';
    if (matrix[2][0] == 'X' && matrix[1][1] == 'X' && matrix[0][2] == 'X')
        return 'X';
    
    //second player
    if (matrix[0][0] == 'O' && matrix[0][1] == 'O' && matrix[0][2] == 'O')
        return 'O';
    if (matrix[1][0] == 'O' && matrix[1][1] == 'O' && matrix[1][2] == 'O')
        return 'O';
    if (matrix[2][0] == 'O' && matrix[2][1] == 'O' && matrix[2][2] == 'O')
        return 'O';
    
    if (matrix[0][0] == 'O' && matrix[1][0] == 'O' && matrix[2][0] == 'O')
        return 'O';
    if (matrix[0][1] == 'O' && matrix[1][1] == 'O' && matrix[2][1] == 'O')
        return 'O';
    if (matrix[0][2] == 'O' && matrix[1][2] == 'O' && matrix[2][2] == 'O')
        return 'O';
    
    if (matrix[0][0] == 'O' && matrix[1][1] == 'O' && matrix[2][2] == 'O')
        return 'O';
    if (matrix[2][0] == 'O' && matrix[1][1] == 'O' && matrix[0][2] == 'O')
        return 'O';
    
    return ' ';
}







int main(int argc, const char * argv[]) {
   
        //Assignment 2 menu
        cout<<"solution 1 Savitch 9th Ed chapter 7, problem 1"<<endl;
        cout<<"solution 2 Savitch 9th Ed chapter 7, problem 2"<<endl;
        cout<<"solution 3 Savitch 9th Ed chapter 7, projet problem 4"<<endl;
        cout<<"solution 4 Savitch 9th Ed chapter 7, problem 3"<<endl;
        cout<<"solution 5 Savitch 9th Ed chapter 7, problem 5"<<endl;
        cout<<"solution 6 Savitch 9th Ed chapter 7, problem 10"<<endl;
        cout<<"solution 7 Savitch 9th Ed chapter 7, problem 11"<<endl;
    
        
        cout<<" Input which solution you would like to see"<<endl;
        
        int choice;
        cin>>choice;
        //Based on the choice, display the results
        switch(choice) {
                //Global constants if any
            case 1:{
                int num;
                cout<<"Enter size of array"<<endl;
                cin>>num;
                firstLast2(num);

                break;
            }
                
            case 2:{
                
                int size;
                cout<<"enter size of array : "<<endl;
                cin>>size;
                size-=1;
                //funtion that counts how many twos are in the array
                countNum2s(size);
                //exit program
                
                break;
                
            }
                //Global constants if any
            case 3:{
                float choose;
                cout<<"Enter the size of array : ";
                cin>>choose;
                stDev(choose);
                break;
            }
                //Global constants if any
            case 4:{
                int num;
                cout<<"Size of array :"<<endl;
                cin>>num;
                
                swapFrontBack(num);

                break;
            }
                //Global constants if any
            case 5:{
                cout<<"This program finds the occurance of integers in an array "<<endl;
                cout<<"It is best that numbers be randomly generated, rather than user imput"<<endl;
                int size=50;
                count(size);
                break;
            }
                //Global constants if any
            case 6:{
                display();
                while (1)
                {
                    Input();
                    display();
                    if (Winner() == 'X')
                    {
                        cout << "X wins!" << endl;
                        break;
                    }
                    else if (Winner() == 'O')
                    {
                        cout << "O wins!" << endl;
                        break;
                    }
                    switchPlayer();
                }

                break;
            }
                //Global constants if any
            case 7:{
                char Seat = ' ';
                string Seats[7] = {"1ABCD", "2ABCD", "3ABCD", "4ABCD", "5ABCD", "6ABCD", "7ABCD"};
                char choose = ' ';
                int Row = 0;
                
                choose = 'y';
                
                while(choose == 'y'||choose=='Y')
                {
                    cout<<"Enter a row: ";
                    cin>>Row;
                    cout<<"Enter a seat: ";
                    cin>>Seat;
                    
                    int idx= 1 + Seat - 'A';
                    if(Seats[Row-1][idx] == 'X') {
                        cout<<"Seat is taken."<<endl;
                        continue; }
                    else
                        Seats[Row - 1][idx] = 'X';
                    cout<<"Enter another seat? (y/n): ";
                    cin>>choose;
                    
                    for(int i=0; i<7; ++i)
                    {
                        cout << Seats[i] << endl;
                    }
                    
                } //end while
                
                cout<<" End of program"<< endl;
                

                break;
            }
            
            default:{
                cout<<"Choose a correct solution. "<<endl;
                
                break;
            }
        
               
  
        }
    return 0;
}
