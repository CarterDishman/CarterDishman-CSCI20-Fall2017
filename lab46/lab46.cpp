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
ofstream outFS;  

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
int grades3[6];

char LetterGrade1[5];
char LetterGrade2[5];
char LetterGrade3[5];

int NumClass1 = 0;
int NumClass2 = 0;
int NumClass3 = 0;

double GPA1 = 0;
double GPA2 = 0;
double GPA3 = 0;

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

inFS >> ClassHours1[0];    //Takes the class hours/credits

for(int i = 1; i < 5; ++i){
    inFS >> ClassHours1[i];
    inFS >> LetterGrade1[i];
}


//Filling the grades array fror name2

inFS >> First_Name2;
inFS >> Last_Name2;



inFS >> ClassHours2[0];

for(int i = 1; i < 5; ++i){
    inFS >> ClassHours2[i];
    inFS >> LetterGrade2[i];
}



//Filling the grades array fror name3
inFS >> First_Name3;
inFS >> Last_Name3;



inFS >> ClassHours3[0];

for(int i = 1; i < 6; ++i){
    inFS >> ClassHours3[i];
    inFS >> LetterGrade3[i];
}
inFS.close();


grades1[0] = 0; //I don't understand why this has to be here but without it, her GPA changes to  -3.95783e+08 

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
    
    else if(LetterGrade1[i] == 'D') {
        grades1[i] = 1;
        ClassHours1[i] = 0;
    }
    else if(LetterGrade1[i] == 'F') {
        grades1[i] = 0;
        ClassHours1[i] = 0;
    }
}


grades2[0] = 0;  

for(int i = 0; i < 5; ++i){        //This fills the grades array with the number value of each grade.
    if(LetterGrade2[i] == 'A'){    //This will be used for calcuating the GPA.
        grades2[i] = 4;
    }
    
    else if(LetterGrade2[i] == 'B'){
        grades2[i] = 3;
    }
    
    else if(LetterGrade2[i] == 'C'){
        grades2[i] = 2;
    }
    
    else if(LetterGrade2[i] == 'D'){
        grades2[i] = 1;
        ClassHours2[i] = 0;
    }
    
    else if(LetterGrade2[i] == 'F'){
        grades2[i] = 0;
        ClassHours2[i] = 0;
    }
}

grades3[0] = 0;

for(int i = 0; i < 5; ++i){        //This fills the grades array with the number value of each grade.
    if(LetterGrade3[i] == 'A'){    //This will be used for calcuating the GPA.
        grades3[i] = 4;
    }
    
    else if(LetterGrade3[i] == 'B'){
        grades3[i] = 3;
    }
    
    else if(LetterGrade3[i] == 'C'){
        grades3[i] = 2;
    }
    
    else if(LetterGrade3[i] == 'D'){
        grades3[i] = 1;
        ClassHours3[i] = 0;      //if the student get's a D, no credits are recived for the class
    }
    
    else if(LetterGrade3[i] == 'F'){
        grades3[i] = 0;
        ClassHours3[i] = 0;      //if the student get's an F, no credits are recived for the class
    }
}

cout << GPA3;

for(int i = 0; i < 5; ++i) {            //adding up the GPA numbers 
    GPA1 += grades1[i];
}

for(int i = 0; i < 5; ++i) {            //adding up the GPA numbers 
    GPA2 += grades2[i];
}

for(int i = 0; i < 6; ++i) {            //adding up the GPA numbers 
    GPA3 += grades3[i];
}




GPA1 = GPA1/ClassHours1[0];  //calcuates the GPA by dividing GPA from above by credit hours
GPA2 = GPA2/ClassHours2[0];
GPA3 = GPA3/ClassHours3[0];




ClassHours1[0] = ClassHours1[1] + ClassHours1[2] + ClassHours1[3] + ClassHours1[4]; //Adding the amout of credits recived
ClassHours2[0] = ClassHours2[1] + ClassHours2[2] + ClassHours2[3] + ClassHours2[4]; 
ClassHours3[0] = ClassHours3[1] + ClassHours3[2] + ClassHours3[3] + ClassHours3[4]; 


outFS.open("lab46HTML.html");           //oping the html file in order output.

//These lines output the Names
outFS << First_Name1 << " " << Last_Name1 << ". Amount of credits earned: " << ClassHours1[0] <<endl;       //outputing the names and credits to html file.
outFS <<"GPA: " <<  GPA1 << endl;   

outFS << First_Name2 << " " << Last_Name2 << ". Amount of credits earned: " << ClassHours2[0] <<endl;       //outputing the names and credits to html file.
outFS <<"GPA: " <<  GPA2 << endl;   

outFS << First_Name3 << " " << Last_Name3 << ". Amount of credits earned: " << ClassHours3[0] <<endl;       //outputing the names and credits to html file.
outFS <<"GPA: " <<  GPA3 << endl;   

outFS.close();      
}