//Carter Dishman
// 11-16-17

/*  PROBLEM STATEMENT
Write a program that will read a student’s grades and output an HTML page (Links to an external site.)
Links to an external site. to output a student’s transcript including semester GPA and overall GPA. 
The program should ask for an input file which includes the student’s name, number of classes,
and list of grades (A, B, C, D, F) and class hours.  It reads the data and calculates the semester GPA and overall GPA.*/

#include<iostream>
#include<cmath>
#include<string>
#include<cstdlib>
#include<iomanip>   
#include<fstream>     //for file input/output

using namespace std;

int main (){
    
ifstream inFS;    

string First_Name1;
string Last_Name1;

string First_Name2;
string Last_Name2;

string First_Name3;
string Last_Name3;
    
    
int ClassHours1[5];
int ClassHours2[5];
int ClassHours3[5];

int grades1[5];
int grades2[5];
int grades3[5];

char LetterGrade1[5];
char LetterGrade2[5];
char LetterGrade3[5];

int NumClass1 = 0;
int NumClass2 = 0;
int NumClass3 = 0;

inFS.open("input.txt");


if(!inFS.is_open()){
    cout << "Could not open file myfile.txt." << endl;
}

if(inFS.is_open()){
    cout << "File 'myfile.txt' is open." << endl;
}

//Filling the grades array fror name1
inFS >> First_Name1;          //Takes the frist string on the page
inFS >> Last_Name1;           //Takes the second string on the page



inFS >> ClassHours1[0];    //Takes the 3rd 

for(int i = 1; i < 5; ++i){
    inFS >> ClassHours1[i];
    inFS >> LetterGrade1[i];
}

for(int i = 1; i < 5; ++i){
    cout << ClassHours1[i];
    cout << LetterGrade1[i] << endl;
}


//Filling the grades array fror name2

inFS >> First_Name2;
inFS >> Last_Name2;



inFS >> ClassHours2[0];

for(int i = 1; i < 5; ++i){
    inFS >> ClassHours2[i];
    inFS >> LetterGrade2[i];
}

for(int i = 1; i <5; ++i){
    cout << ClassHours2[i];
    cout << LetterGrade2[i] << endl;
}



//Filling the grades array fror name3
inFS >> First_Name3;
inFS >> Last_Name3;



inFS >> ClassHours3[0];

for(int i = 1; i < 6; ++i){
    inFS >> ClassHours3[i];
    inFS >> LetterGrade3[i];
}

for(int i = 1; i < 6; ++i){
    cout << ClassHours3[i];
    cout << LetterGrade3[i] << endl;
}



grades1[0] = 0;

for(int i = 0; i < 5; ++i){        //This fills the grades array with the number value of each grade.
    if(LetterGrade1[i] == 'A'){    //This will be used for calcuating the GPA.
        grades1[i] = 4;
    }
    
    else if(LetterGrade1[i] == 'B'){
        grades1[i] = 3;
    }
    
    else if(LetterGrade1[i] == 'C'){
        grades1[i] = 2;
    }
    
    else if(LetterGrade1[i] == 'D'){
        grades1[i] = 1;
    }
    
    else if(LetterGrade1[i] == 'F'){
        grades1[i] = 0;
    }
}



}