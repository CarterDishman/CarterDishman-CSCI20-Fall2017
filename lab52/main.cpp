#include <iostream>
#include <cstdlib>
#include <ctime>
#include "myclass.h"
#include "main.h"
using namespace std;


// Program starts here

int randomNumber(){
   srand(time(0));
   return (rand()% 10 + 1);
}


int main() {
  // Create a MyClass Object
  MyClass object;

  //Send a number to the Object
  object.SetNumber(randomNumber());

  // Call the output member function
  object.Output();

  // This ends our program
  return 0;
}