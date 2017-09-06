#include <iostream>
using namespace std;

int main()
{
  
    int curPop = 326625791; // current population on the US
    int popGrowth = .0075; //The percent growth of the population
    int netGain = 2451558; // The ammount of people added to the population every year
    int yrsFromnow = 0;
    
    
   
    cout << "Enter years from now: " ; // This will take
    cin >> yrsFromnow;                 // how may years from now
                                       // the user wants to see the population.

   int totPop = curPop + (netGain * yrsFromnow);

    cout << "in " << yrsFromnow << " years the population of the US will be " << totPop;
    
    
    
    
    return 0;
}

