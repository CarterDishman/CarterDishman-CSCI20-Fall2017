#include <iostream>
#include <cstdlib>
#include <ctime>
#include "myclass.h"
using namespace std;


MyClass::MyClass() : num_(0) {}

void MyClass::Output() {
  cout << "My number is: " << num_ << endl;
}

void MyClass::SetNumber(int num){
   num_ = num;
}

int MyClass::GetNumber(){
   return num_;
}