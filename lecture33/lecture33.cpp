#include <iostream>
using namespace std;

int main()
{
    int number = 1;                //define var
    while (number<=10)             //Start the loop, giving it a condition
    {
        cout<<number;              //The "do something" of the loop; couts the number then adds 1 to the number
        number = number + 1;
    }
    
    int userNumber = 0, x = 1;
    cout<<"Enter a number: ";
    cin>>userNumber;
    
    while(x <= number)
    {
        if (x%10 == 0)
        {
            cout<<x<<endl;;
        }
        else
        {
            cout<<x<<" ";
        }
        x++;
    }
}

//The first loop doesn't work.  It should print the nubers from 1 to 10 but it doesn't.
//Identify and correct the problem. number sould = 0 at first

//Comment the code as the pseudocode

//Identify the different parts of the loop.
