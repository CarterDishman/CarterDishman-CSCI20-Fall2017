//Created By: Carter Dishman   
//Created On: 9/21/2017      
 
 #include <iostream> 
 #include <cmath>
 #include <ctime>
 using namespace std;
 
 
 
 void swap(int &min_num, int &max_num){
    int s = 0;
    
    if (min_num > max_num){
        s = min_num;
        min_num = max_num;
        max_num = s;
        return;
    }
    
    return;
}


void randNum(int min_num, int max_num)
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
    
    
    cout << "Enter your lowest number: ";
    cin >> low;
    cout << "Enter your highest number: ";
    cin >> high;
    
    
    randNum(low,high);                                           //Calls the function from above

 
     return 0;
 }