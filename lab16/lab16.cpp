//Created By: Carter Dishman   
//Created On: 9/12/2017    

 
 #include <iostream> 
 #include <string>
 using namespace std;
 
 struct Portfolio {
    string stockName;
    char sector;
    double currPrice;
    int numShares;
 };
 
 int main()                         
{   
    
  double tot = 0;
  
  
    Portfolio stock1, stock2, stock3, stock4;
    //stock1 below
    cout << "Please enter the name of your stock: ";
    cin >> stock1.stockName;
    
    cout << "Please enter the sector you stock belongs to(A, C, F, I, or T): ";
    cin >> stock1.sector;
    
    cout << "Please enter the current price of your stock: ";
    cin >> stock1.currPrice;
    
    cout << "Please enter the number of shares that you own: ";
    cin >> stock1.numShares;
 
 //-------------------------------------------------------   
   
    
    //stock2 below
    cout << "Please enter the name of your stock: ";
    cin >> stock2.stockName;
    
    cout << "Please enter the sector you stock belongs to(A, C, F, I, or T): ";
    cin >> stock2.sector;
    
    cout << "Please enter the current price of your stock: ";
    cin >> stock2.currPrice;
    
    cout << "Please enter the number of shares that you own: ";
    cin >> stock2.numShares;

//-------------------------------------------------------  
  
    // stock3 below
    cout << "Please enter the name of your stock: ";
    cin >> stock3.stockName;
    
    cout << "Please enter the sector you stock belongs to(A, C, F, I, or T): ";
    cin >> stock3.sector;
    
    cout << "Please enter the current price of your stock: ";
    cin >> stock3.currPrice;
    
    cout << "Please enter the number of shares that you own: ";
    cin >> stock3.numShares;
   
 //-------------------------------------------------------
   
    //stock4 below
    cout << "Please enter the name of your stock: ";
    cin >> stock4.stockName;
    
    cout << "Please enter the sector you stock belongs to(A, C, F, I, or T): ";
    cin >> stock4.sector;
    
    cout << "Please enter the current price of your stock: ";
    cin >> stock4.currPrice;
    
    cout << "Please enter the number of shares that you own: ";
    cin >> stock4.numShares;    

//-------------------------------------------------------

    
   //finding total value of stock
   
    int stock1Tot = stock1.numShares * stock1.currPrice;
    int stock2Tot = stock2.numShares * stock2.currPrice;
    int stock3Tot = stock3.numShares * stock3.currPrice;
    int stock4Tot = stock4.numShares * stock4.currPrice;
    
    
    
//-------------------------------------------------------
    
    
    
    cout << "Stock Name      No of Shares     Current Value    Total Value" << endl;
    cout << stock1.stockName << "           " << stock1.numShares << "                   " << stock1.currPrice << "                " << stock1Tot << endl;
     
    
  
    cout << "Stock Name      No of Shares     Current Value    Total Value" << endl;
    cout << stock2.stockName << "           " << stock2.numShares << "                   " << stock2.currPrice << "                " << stock2Tot << endl;
     
     
    
    cout << "Stock Name      No of Shares     Current Value    Total Value" << endl;
    cout << stock3.stockName << "           " << stock3.numShares << "                   " << stock3.currPrice << "                " << stock3Tot << endl;
     
     
    
    cout << "Stock Name      No of Shares     Current Value    Total Value" << endl;
    cout << stock4.stockName << "           " << stock4.numShares << "                   " << stock4.currPrice << "                " << stock4Tot << endl;
     
     
     
    tot = (stock1Tot + stock2Tot + stock3Tot + stock4Tot);
    
    cout << "total protfolio = " << tot;
}
 