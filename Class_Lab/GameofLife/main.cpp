/* 
 * File:   main.cpp
 * Author: rcc
 *
 * Created on February 4, 2015, 10:57 AM
 */
//system Libraries
#include <iostream>
#include <ctime>


using namespace std;

//User Libraries

//Global constants

const int COL =30;

//Function prototypes
void filAray(char [][COL],int,char);
void prntAry(char [][COL],int);
void inject(char [][COL],int,int,char);
void pause(int);
void gnrashn(char [][COL],int,char);
int cntNbor(char [][COL],int,char,int,int);

//Execution begins here
int main(int argc, char** argv) {
    //Declare 2 dimensional character
    const int ROW=10;
    char array[ROW][COL];
    int nGen=10;
    //Fill the array
    filAray(array,ROW,'^');
    //Print the array without the glider
    prntAry(array,ROW);
    //Inject the glider
    inject(array,4,13,'*');
    //Print with the glider
    prntAry(array,ROW);
    return 0;
}
void gnrashn(char a[][COL],int ROW,char d){
    for(int r=0;r<ROW;r++){
        for(int c=1;c<COL;c++){
            int nBr=cntNbor(a,ROW,d,r,c);
            if(a[r][c]!=d&&nBr<=1)a[r][c]=d;
            if(a[r][c]!=d&&nBr>=4)a[r][c]=d;
        }
    }
}
int cntNbor(char a[][COL],int ROW,char d,int r,int c){
    //Counts your neighbors
    int count=0;
    // 3 Top
    if(a[r-1][c-1]!=d) count++;
    if(a[r-1][c]!=d) count++;
    if(a[r-1][c+1]!=d) count++;
    //2 middle
    if(a[r][c-1]!=d) count++;
    if(a[r][c+1]!=d) count++;
    //# bottome
    if(a[r+1][c-1]!=d) count++;
    if(a[r+1][c]!=d) count++;
    if(a[r+1][c+1]!=d) count++;
    //return the count
    return count;
   
}

void inject(char a[][COL],int pRow,int pCol, char c){
    a[pRow+0][pCol+1]=c;
    a[pRow+0][pCol+1]=c;
    a[pRow+0][pCol+1]=c;
    a[pRow+0][pCol+1]=c;
     a[pRow+0][pCol+1]=c;

    
}

void pause(int secs){
    //Start the timer 
    int strt=static_cast<unsigned int>(time(0));
    int end;
    do{
         end=static_cast<unsigned int>(time(secs));
    
    }while(secs>(end));
}
void filAray(char a[][COL],int ROW,char d){
    for(int r=0;r<=ROW;r++){
        for(int c=0;c<COL;c++){
            a[r][c]=d;
        }
    }
    
}
void prntAry(char a[][COL],int ROW){
    for(int r=0;r<ROW;r++){
        for(int c=0;c<COL;c++){
            cout<<a[r][c];
        }
        cout<<endl;
    }
}
