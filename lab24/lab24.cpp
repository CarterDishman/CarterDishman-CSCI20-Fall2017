//Created By: Carter Dishman   
//Created On: 9/21/2017      
 
 #include <iostream> 
 #include <cmath>
 #include <ctime>                                           //Use this so we can see randomness with time
 using namespace std;
 
 
 
double swap(int &min_num, int &max_num){                     //If the numbers are inputted in the wrong order, this swaps them
    int s = 0;
    
    if (min_num > max_num){
        s = min_num;
        min_num = max_num;
        max_num = s;
        return 0;
    }
    
    return 0;
}


double RandNum(int min_num, int max_num)                      //Gens a random number and calls our swap function
{
    swap(min_num, max_num);
    srand(time(0));                                      
    int RandNum = rand()%(max_num-min_num) + min_num + 1;                          
    cout << "Your random number is: " << RandNum << endl;        
    
    return RandNum;
}
 
 

 
double FindKilo(double ran_save) {                          //A function to convert the RandNum to kg
    double kilo  = ran_save * 0.453592;   
    
    return kilo;
}
 
 
double FindPound(double ran_save) {                         //A function to convert the RandNum to lb
    double pound  = ran_save * 2.20462;
    
    return pound;
}

int main()
 {
    

    int ran_save = 0; 
    int low      = 0;
    int high     = 0;
    
    
    cout << "Enter your lowest number: ";                   //Asks user for higest number
    cin >> low;                                             //Stores num as var
    cout << "Enter your highest number: ";                  //Asks user for higest number
    cin >> high;                                            //Stores num as var
    
    
     ran_save = RandNum(low,high);                          //Calls the random number function from above and saves it as ran_save
     


    
    

    cout << ran_save << "lbs in kilograms is " << FindKilo(ran_save) << "kg." << endl;//couts the RandNum in lbs and converts it to kg with a function
    cout << ran_save << "kg in pounds is " << FindPound(ran_save) << "lbs." << endl;  //couts the RandNum in kgs and converts it to lb with a function

 
     return 0;
 }