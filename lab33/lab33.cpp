//Created By: Carter Dishman   
//Created On: 10/17/2017      

 
 #include <iostream> 
 #include <cmath>
 #include <ctime>
 using namespace std;
 
 
int randNum()
{
    srand(time(0));                                        //This part of the code seeds the random numner in time
    int rand_num = (rand()%50)+1;                          //This line sets the cap number to 50
    
    return rand_num;
}
 
 
 
int main()
 {
     
     
     randNum();                                                //Calls the function from above
     
     
    //list of declared vars
    double user_guess = 0;
    double rand_num   = randNum();  

    cout << "Guess a number!" << endl;
    cin >> user_guess;
    
while (user_guess != rand_num){
    
    if (user_guess >= 1 && user_guess <= 50) {                //makes sure the number is valid
        
        
        if (user_guess < rand_num) {
            cout << "Guess again! Higher this time." << endl;
            cin >> user_guess;
        }
        
         if (user_guess > rand_num) {
            cout << "Guess again! lower this time." << endl;
            cin >> user_guess;
        }
        
      
        
    }

}
        
        
        
         if (user_guess == rand_num){
            
            for (int i = 0; i < 2; i++){
                cout << "Good job! You got it! "; 
             
            }
        }
    
    
    if (user_guess < 1 && user_guess > 50) {
        cout << "Invald number! Please try again!" << endl;
    }
    
    
 
    
 
 }