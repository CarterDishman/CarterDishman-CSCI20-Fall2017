//Created By: Carter Dishman   
//Created On: 11/2/2017      


/*
PROBLEM STATMENT:
This program mimics an online shopping cart.  You are the proprietor of an online shop and have to keep track of inventory, 
price and the user’s shopping cart.  Create a menu of at least 10 items for the user to choose from.  
Identify your starting inventory and price.  As the user purchases an item, 
you should remove that item from inventory (subtract 1) and add the price to a total. 
When the user is done adding items to their cart, you should output a statement of what they have ordered 
and the total cost of their purchases.  Do not allow you inventory to go below 0.
*/

 #include <iostream> 
 #include <cmath>
 #include <ctime>
 using namespace std;
 
 

 
 int main(){
     
     
     bool shopping   = true;
     
     int done         = 0;
     char yn;
     int cartPrice = 0;
     string Items[10] = {"oranges", "tomatos", "milk", "apples", "beef", "pork", "pair", "oreo", "cookie", "cheese"};
     int Price[10]    = {1,2,3,4,5,6,7,8,9,10};
     int Inv[10]      = {5,5,5,5,5,5,5,5,5,5};
     int numfoodsel[10] = {0,0,0,0,0,0,0,0,0,0};
     string foodsel[10];
     
  
     
     while(shopping == true){     //This loop cout's the menue items
        
        for(int i = 0; i < 10; ++i){
         cout << Items[i] << "  $" << Price[i] << endl;
         
            cout << "Add this item to cart?(Y/N)" << endl;
            cin >> yn;
            
            if(yn = 'y' && yn != 'n'){
            foodsel[i] = Items[i];
            cout << "Please select quantity"<< endl;
            cin >> numfoodsel[i];

            }
            

        }
    
    
            cout << "If you are done shopping, enter 0, if not, enter 1";
            cin >> done;
            if (done == 0){
                shopping = false; //this ends the while loop
            }
            
            
        }
    
    
    for (int i = 0; i < 10; ++i){
        if (numfoodsel[i] > 1){
            numfoodsel[i] = numfoodsel[i] * Price[i];
        }
        cout << numfoodsel[i]; 
    }
         for (int i = 0; i < 10; ++i){
         cartPrice = cartPrice + numfoodsel[i];
         }
         
         
         
         
         for (int i = 0; i < 10; ++i){
             cout << foodsel[i] << " $" << Price[i] << endl;
         }
         
         cout << "Your final price is: $" << cartPrice << " For these items: " << endl;
         
     }
     
