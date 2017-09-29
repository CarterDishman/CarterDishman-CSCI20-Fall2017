//Created By: Carter Dishman   
//Created On: 9/21/2017      
 
 #include <iostream> 
 #include <cmath>
 #include <ctime>    //Use this so we can see randomness with time
 using namespace std;
 
 
 
 void swap(int &min_num, int &max_num){     //If the numbers are inputted in the wrong order, this swaps them
    int s = 0;
    
    if (min_num > max_num){
        s = min_num;
        min_num = max_num;
        max_num = s;
        return;
    }
    
    return;
}


void randNum(int min_num, int max_num)                    //Gens a random number and calls our swap function
{
    swap( min_num, max_num);
    srand(time(0));                                      
    int randNum = rand()%(max_num-min_num) + min_num + 1;                          
    cout << "Your random number is: " << randNum;        
    

}
 
 

 

int main()
 {
    int low   = 0;
    int high  = 0;
    
    
    cout << "Enter your lowest number: ";                   //Asks user for higest number
    cin >> low;                                             //Stores num as var
    cout << "Enter your highest number: ";                  //Asks user for higest number
    cin >> high;                                            //Stores num as var
    
    
    randNum(low,high);                                           //Calls the random number function from above

 
     return 0;
 }