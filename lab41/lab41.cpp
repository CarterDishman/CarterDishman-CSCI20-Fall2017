//Created By: Carter Dishman   
//Created On: 10/31/2017      


/*
Problem Statment:
Create a class called ArrayTools which will store a single integer array and each of the following functions.  Use my main function to run your class.

Print – print the array values on the screen in order
Find_min – search the array between two sizes to return the location of the minimum value in that part of the array
Find_max –
Find_sum – return the sum of all values in the array
Num_even/odd – count the number of even and odd numbers in the array
Search – search the array for a specified value and return the location if the value is found and -1 otherwise
Is_sorted – check to see of the array is sorted in ascending order.
*/
 
 #include <iostream> 
 #include <cmath>
 #include <ctime>
 using namespace std;
 
 
 class ArrayTools {
     private:
     int myArray[];

     
     
     public:
     ArrayTools(int array[], int size)
    {
        
    }
     
     void Print(int SIZE);
     int Find_min();
     int Find_max();
     int Find_sum();
     int Num_Even();
     int Num_Odd();
     int Search();
     int Is_Sorted();
 };
 

 
void ArrayTools::Print(int SIZE){
     
     for(int i = 1; i < SIZE; ++i){
        cout << myArray[i] << " " << endl;
        }
}
 
 
 
 
int main()
{
    
    const int SIZE = 5;
    int myArray[SIZE];
    
    for(int i = 0; i < SIZE;i++){
        cin >> myArray[i];
    }
    ArrayTools a(myArray,SIZE);
    
    
    a.Print(SIZE);
    //cout<<"Min: "<<a.Find_min(0, 4)<<endl;
    //cout<<"Max: "<<a.Find_max(5, 10)<<endl;
    //cout<<"Sum = "<<a.Find_sum()<<endl;
    //cout<<"Search 10"<<a.Search(10)<<endl;
    //cout<<"Sorted? "<<a.Is_sorted()<<endl;
    
    return 0;
}