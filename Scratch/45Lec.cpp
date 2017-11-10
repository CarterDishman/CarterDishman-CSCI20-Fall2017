#include <iostream>
using namespace std;

int main(){

string mystring = "my test string";
string mystring2 = mystring;
 
string myString3 = "my test string";
if (myString3 == "my test string")
{
   cout<<"The same"<<endl;
}

string myString4 = "my test string";
int i = 0, spaceCount = 0;
while (i < 20)
{
   if (myString4[i] == ' ')
   {
        spaceCount++;
   }
   i++;
}

string myString5 = "my test string";
i = 0;
while (myString5[i] != '\0')
{
   cout<<myString5[i];
   i++;
}

string myString6 = "my test string";
myString6[14] = '!';
cout<<myString6<<endl;
}

//run the code
//what should each of these do?  Do they do them?
