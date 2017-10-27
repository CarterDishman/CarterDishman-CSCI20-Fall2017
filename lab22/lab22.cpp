//Created By: Carter Dishman   
//Created On: 9/21/2017      
 
 #include <iostream> 
 #include <cmath>
 #include <ctime>
 using namespace std;
 
void randNum()
{
    srand(time(0));                                      //This part of the code seeds the random numner in time
    int randNum = (rand()%6)+1;                          //This line sets the cap number to 100
    cout << "Your random number is: " << randNum;        //Thi line outputs the random number
    
}
 
int main()
 {
    randNum();                                           //Calls the function from above
 
 
     return 0;
 }