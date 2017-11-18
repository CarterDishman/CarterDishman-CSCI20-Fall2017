//Carter Dishman
//This project was a colaboration between Evan Drake, Richard Gutierrez, and Carter Dishman.
// 11-17-17

#include<iostream>
#include<cmath>
#include<string>
#include<cstdlib>
#include<iomanip>
#include<fstream>

/*  PROBLEM STATEMENT
This program will read in student answersPreview the documentView in a new window for a test and compare the answers to
the corresponding answer keyPreview the documentView in a new window for the test.
1 point is awarded for each correct answer,
omitted answers get 0 points, and incorrect answers deduct ¼ point.  
The program should output to the screen and a file the student’s name, 
list of missed questions, and overall grade on the exam. */

using namespace std;

class Grades {
  private: 
    
    char Key[36];
    string KeyVar;
    string KeyRandom;
    string KeyCond;
    
    double points;

  public: 
    void KeySet(char k[],string var,string cond,string random){
        for(int i = 0;i < 36;i+=2) {
            Key[i] = k[i];
        }
        KeyVar = var;
        KeyRandom = random;
        KeyCond = cond;
    }
    
    void SetCheckAns(char Answer[],string v, string c, string r);
    
     
    
    
  int GetCheckAns(){
    return points;
  }
      
  };


//////////////////////////VISUAL BARRIAR BETWEEN CLASS AND INT MAIN()//////////////////////////






int main() { 
    
    Grades Student[6];
    

  
    ifstream inKey;
  
    ifstream inAnswers;
  
    ofstream outPoints;
  
    char Key[36];
    string KeyVar;
    string KeyRandom;
    string KeyCond;
    
    string FName1;      //First Name of the 1st student
    string LName1;      //Last Name of the 1st student
    char Answers1[36];  //The answers to the multiple choice part of the test
    string Var1;        //The answer to the 'variable' question
    string Random1;     //The answer to the 'random' question
    string Cond1;       //The answer to the 'condition' question
    double Points1; //The total amount of points scored on the test
    
    string FName2;
    string LName2;
    char Answers2[36];
    string Var2;
    string Random2;
    string Cond2;
    double Points2;
    
    string FName3;
    string LName3;
    char Answers3[36];
    string Var3;
    string Random3;
    string Cond3;
    double Points3;
    
    string FName4;
    string LName4;
    char Answers4[36];
    string Var4;
    string Random4;
    string Cond4;
    double Points4;
    
    string FName5;
    string LName5;
    char Answers5[36];
    string Var5;
    string Random5;
    string Cond5;
    double Points5;
    
    string FName6;
    string LName6;
    char Answers6[36];
    string Var6;
    string Random6;
    string Cond6;
    double Points6;
    
    inAnswers.open("answers.txt");  //Open's the answer document
    //pulling student answers from answers.txt
    
    //Student1
    inAnswers >> FName1;             //pulls the first name  
    inAnswers >> LName1;             //pulls the last name
    for(int i = 0;i < 36;i+=2) {      //pulls the answers to the multiple choice part of the test
        inAnswers >> Answers1[36];
    }
    
    inAnswers >> Var1;//pulls the students answer for the 'variable' question
    
    inAnswers >> Random1;           //pulls the students answer for the 'candom' question
    
    inAnswers >> Cond1;             //pulls the students answer for the 'condition' question
    
    //Student2
    inAnswers >> FName2;
    inAnswers >> LName2;
    for(int i = 0;i < 36;i+=2) {
        inAnswers >> Answers2[36];
    }
    inAnswers >> Var2;
    inAnswers >> Random2;
    inAnswers >> Cond2;
   
   //Student3
    inAnswers >> FName3;
    inAnswers >> LName3;
    for(int i = 0;i < 36;i+=2) {
        inAnswers;
        inAnswers >> Answers3[36];
    }
    inAnswers >>  Var3;
    inAnswers >>   Random3;
    inAnswers >>   Cond3;
   
   //Student4
    inAnswers >> FName4;
    inAnswers >> LName4;
    for(int i = 0;i < 36;i+=2) {
        inAnswers;
        inAnswers >> Answers4[36];
    }
    inAnswers >>   Var4;
    inAnswers >>   Random4;
    inAnswers >>   Cond4;
   
   //Student5
    inAnswers >> FName5;
    inAnswers >> LName5;
    for(int i = 0;i < 36;i+=2) {
        inAnswers;
        inAnswers >> Answers5[36];
    }
    inAnswers >>   Var5;
    inAnswers >>   Random5;
    inAnswers >>   Cond5;
    
    //Student6
    inAnswers >> FName6;
    inAnswers >> LName6;
    for(int i = 0;i < 36;i+=2) {
        inAnswers;
        inAnswers >> Answers6[36];
    }
    inAnswers >>   Var6;
    inAnswers >>   Random6;
    inAnswers >>   Cond6;
    
    inAnswers.close();     //closes answer.txt
    
    inKey.open("key.txt");     //opens the answer documents
    
    for(int i = 0;i < 36;i+=2){
        inKey >> Key[i];
        inKey;
    }
    inKey >> KeyVar;
    inKey;
    inKey >> KeyRandom;
    inKey;
    inKey >> KeyCond;
    
    inKey.close();
    
    for(int i = 0;i < 6;i+=2) {
        Student[i].KeySet(Key,KeyVar,KeyCond,KeyRandom);
    }
  
    Student[0].SetCheckAns(Answers1,Var1, Cond1, Random1);
    Student[1].SetCheckAns(Answers2,Var2, Cond2, Random2);
    Student[2].SetCheckAns(Answers3,Var3, Cond3, Random3);
    Student[3].SetCheckAns(Answers4,Var4, Cond4, Random4);
    Student[4].SetCheckAns(Answers5,Var5, Cond5, Random5);
    Student[5].SetCheckAns(Answers6,Var6, Cond6, Random6);
    
    Points1 = Student[0].GetCheckAns();
    Points2 = Student[1].GetCheckAns();
    Points3 = Student[2].GetCheckAns();
    Points4 = Student[3].GetCheckAns();
    Points5 = Student[4].GetCheckAns();
    Points6 = Student[5].GetCheckAns();
    
    outPoints.open("output.txt");
    
    outPoints << FName1 << " " << LName1 << " test Score: " << Points1 <<"%" << endl;
    outPoints << FName2 << " " << LName2 << " test Score: " << Points2 <<"%" << endl;
    outPoints << FName3 << " " << LName3 << " test Score: " << Points3 <<"%" << endl;
    outPoints << FName4 << " " << LName4 << " test Score: " << Points4 <<"%" << endl;
    outPoints << FName5 << " " << LName5 << " test Score: " << Points5 <<"%" << endl;
    outPoints << FName6 << " " << LName6 << " test Score: " << Points6 <<"%" << endl;
    
    outPoints.close();
    cout << FName1 << " " << LName1;
    
}//Bottom of int main(), DO NOT ERASE
    
void Grades::SetCheckAns(char Answer[],string v, string c, string r){
  for(int i = 0; i <36; i+=2){
        if(Answer[i] == Key[i]){
          points += 1;
        }
        
        else if(Answer[i] != Key[i]){
          points += 0.25;
        }
        
        else if(Answer[i] == '?'){
          points += 0;
        } 
      }
      
      //Checking to see how the 'variable' question is answered
      if(KeyVar.find("var") <= 1){ //if correct, add 1 to the students points
        points += 1;
      }
      
      else if(KeyVar.find('?') <= 1){   //if omitted, add 0 to the students points
        points += 0;
      }
      
      else if(KeyVar.find("var", '?')!= 1){  //if incorrect(not the correct answer or omitted), add .25(1/4) points.
        points += 0.25;
      }
      
      ///Checking to see how the 'condition' question is answered
      if(KeyCond.find("con") <= 1){
        points += 1;
      }
      
      else if(KeyCond.find('?') <= 1){
        points += 0;
      }
      
      else if(KeyCond.find("var", '?')!= 1){
        points += 0.25;
      }
      
      //Checking to see how the 'random' question is answered
      if(KeyRandom.find("rand") <= 1){
        points += 1;
      }
      
      else if(KeyRandom.find('?') <= 1){
        points += 0;
      }
      
      else if(KeyRandom.find("var", '?')!= 1){
        points += 0.25;
      }
      
      
      points = ((points/21)) * 100;
      
}