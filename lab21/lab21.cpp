//Created By: Carter Dishman   
//Created On: 9/19/2017      
 
 #include <iostream> 
 #include <cmath>
 using namespace std;
 

 
 int main()
 {
     
    double tempF = 0;
    double velocity = 0;
    double oldStyle = 0;
    double newStyle = 0;
    double velocityToPow = 0;
    double diff = 0;

    cout << "Please enter the temrature in fahrenheit: " << endl;    
    cin >> tempF;                                                    //Gathers user input for 
                                                                     //Temp and windspeed
    cout << "Please enter the windspeed in MPH: ";
    cin >> velocity;
    
    velocityToPow = pow(velocity, .16);   //This raises velocity to the power of .16 for New style
    
    oldStyle = 0.081 * (3.71 * sqrt(velocity) + 5.81 - 0.25 * velocity) * (tempF - 91.4) + 91.4;
    
    newStyle = 35.74 + 0.6215 * tempF - 35.75 * velocityToPow + 0.4275 * tempF * velocityToPow;
    
    diff = (newStyle - oldStyle);
    
    cout << "Windspeed: " << velocity << endl;
    
    cout << "Whindchill in the Old Style: " << oldStyle << endl;
    
    cout << "Whindchill in the New Style: " << newStyle << endl;
    
    cout << "Difference in temp: " << diff << endl;
    
    return 0;
 }