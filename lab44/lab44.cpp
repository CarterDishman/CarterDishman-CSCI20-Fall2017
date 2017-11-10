//Evan Drake
// 11-10-17
//This project was a colaboration between Evan Drake, Carter Dishman, and Richard Gutierrez.

#include<iostream>
#include<cmath>
#include<cstdlib>
#include<iomanip>
#include<cctype>
#include<cstring>

/*  PROBLEM STATEMENT
This program is responsible for creating user names for a new website you have created.
It should accept a first name of up to 10 characters and a last name of up to 20 characters.
It should tell the user if the name is larger than the max size. 
It should also determine if the names are the same and output a warning. 
After checking these things, it should create three different user name options 
(for example: apbrowne; aprilbrowne; abrowne).*/

using namespace std;

int main() {
    char FirstName[10];
    char LastName[20];
    bool Name = false;
    bool Name2 = false;
    
    while(Name == false){
        cout << "Please enter your fist name:" << endl;
        cin >> FirstName;
    if(strlen(FirstName) > 10) {
        cout << "Please stay under 10 char in first name." << endl;
        strcpy(FirstName,"");
        cin >> FirstName;
        if (strlen(FirstName) <= 10) {
            Name = true;
        }
    }
    else {
        Name = true;
        }
    }
 
     while(Name2 == false){
        cout << "Please enter your last name:" << endl;
        cin >> LastName;
    if(strlen(LastName) > 20) {
        cout << "Please stay under 20 char in last name." << endl;
        strcpy(LastName,"");
        cin >> LastName;
        if (strlen(LastName) <= 20) {
            Name2 = true;
        }
    }
    else {
        Name2 = true;
        }
    }
    
    if(strcmp(FirstName, LastName) == 0){
        cout << "Warning: Your last name and first name are the same.";
    }
    else{
        
    }
    
    
    
    
    
    
    cout << endl;
    cout << endl;
    cout << "Possible Username options:" << endl;
    cout << FirstName[0] << LastName << endl;
    cout << FirstName[0] << FirstName[1] << LastName << endl;
    cout << FirstName[0] << FirstName[1] << FirstName[2] << LastName << endl;

    
    
}


/*please enter your fist name:
evan
please enter your last name:
Drake
eDrake
evDrake
evaDrake*/













