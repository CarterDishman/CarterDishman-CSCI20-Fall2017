//Created By: Carter Dishman   
//Created On: 9/5/2017      
 
 #include <iostream> 
 #include <iomanip>
 using namespace std;
 
 int main()                         
 {       
  
  cout.setf(ios::fixed);
    
    
    int numPen = 0;
    int numNic = 0;
    int numDime = 0;
    int numQuar = 0;
    
    int numCents =0;
    
    
    double total = 0;
    double feeAmt = 0;
    
    int afterQuar = 0;
    int afterDime = 0;
    int afterNic = 0;
    int afterPen =0;
    
    
    cout << "How much money, in cents, was put into the machine?";
    cin >> numCents;
    
    numQuar = numCents/25;
    afterQuar = numCents%25;
    
    numDime = afterQuar/10;
    afterDime = numCents%10;
    
    numNic = afterDime/10;
    afterNic = numCents%5;
    
    numPen = afterNic/1;
    
    
    cout << " " << endl;
    cout << " " << endl;
    
    cout << "Thats " << numQuar << " quarter(s) , " << numDime << " dime(s), " << numNic << " nickel(s), and " << numPen << " pennie(s)" << endl;
    
    cout << " " << endl;
    cout << " " << endl;
    total = numCents*.0085;
    
   
    cout << setprecision(2) << "That is a total of " << "$" << total << endl;
   
    return 0;
 }                                  