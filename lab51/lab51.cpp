#include <iostream> 
#include <iostream> //mistake? This only needs to be here once
#include <cstring> 
using namespace std;   

int main() {
    int nameLength = 0;
    char * name = new char[]; //I think this should be writte as 'char* name = new char[]'. 

    cout << "Please enter a 10 letter word or less" << endl;
    cin >> name; //derefernce 'name'

    char * head  = name;
    char * tail = name;                              
    nameLength = strlen(*name); //no need to have '*' (should be an '&'?)

    cout << "Your word is " << firststr << endl;  //firststr is not declared anywhere

    if (nameLength<10)//This should be '<=' because above says 10 words or less, not less than 10 words
    {
         while (*head != '\0')
         {
                cout << *head;
                head++;
         }
     }
     else
     {
          cout << "WARNING WORD TOO BIG TO DISPLAY!!" << endl;
     }

     cout << endl;

     tail = &name[strlen(name) - 1];//

     if (nameLength < 10)
     {
          while (tail != name)
          {
                 cout << *tail;
                 tail--;
          }
     }
     cout << endl;

     head = name;
     tail = &name[strlen(name) - 1];

     head++;
     tail--;

     if (*head == *tail)
     {
         cout << "It is an palindrome!" << endl;
     }
     else
     {
         cout << "It is not an palindrome" << endl;
     }

     return 0; 
}