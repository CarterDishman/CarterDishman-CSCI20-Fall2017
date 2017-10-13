//Created By: Carter Dishman   
//Created On: 10/12/2017      
 
 #include <iostream> 
 #include <string>    //Allows us to use string
 #include <cmath>

//int x is maridal status

 using namespace std;
 
 double Tax_Deduction = 0;
 
 double Wages         = 0;
 double Maridal_Stat  = 0;
 double Withheld      = 0;
 
 double Stat (int x) {   //Function for defining the amout they will get from marital status
     (x == 0)?Tax_Deduction + 10400:Tax_Deduction + 16750;
 }
 
int main () {
    
    cout << "Are you maried? 0 = no; 1 = yes" << endl;
    cin >> Maridal_Stat;
    
    cout << "How much $ did you make last year?" << endl;
    cin >> Wages;
    
    Stat(x);
    
    cout << Tax_Deduction;

}