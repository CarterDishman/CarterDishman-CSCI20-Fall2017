#include <iostream>
using namespace std;

int main()
{
    
char mystring[20] = "my test string";
char mystring2[20] = mystring; //Needs "" around the word mystring

char myString3[20] = "my test string";  // Testing to see if myString2 is "my test string"
if (myString3 == "my test string")
{
   cout<<"The same"<<endl;
}

 
char myString4[20] = "my test string";  
int i = 0; 
int spaceCount = 0;
while (i < 20)
{
   if (myString4[i] == ' ')
   {
        spaceCount++;
   }
   i++;
}

/*char myString5[2] = "my test string"; //This array is too small for this string.
i = 0;
while (myString5[i] != '\0')
{
   cout<<myString5[i];
   i++;
} */

char myString6[20] = "my test string";
myString6[14] = '!';
cout<<myString6<<endl;
}

//run the code
//what should each of these do?  Do they do them?