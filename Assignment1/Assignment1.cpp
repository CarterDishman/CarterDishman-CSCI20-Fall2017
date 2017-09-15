//Carter Ddishman
//9 - 14 - 17


#include<iostream>
#include<string>
#include<iomanip>
#include<cmath>



using namespace std;

struct units { // All the units and varables I plan to use.
    double speed;
    double accel;
    double tim;
    double velocity;
    double distance;
    double timToTakeOff;  //This is the time it takes to reach the takeoff speed
 
};

int main()


{
    cout.setf(ios::fixed);
    
    units units;
    cout << "Enter The distance the Jet had to travel across the runway (use meters)." << endl;     //This asks the user to enter the
    cin >> units.distance;                                                        //distance the jet will travel.
                                                            
    cout << "Please enter the takeoff speed of the jet (use kilometers per hour)" << endl;  //This asks for top speed of the jet from the user.
    cin >> units.speed;
    
    units.accel = units.speed * 0.277; //This gives us the acceleration(m/s) 
    
    cout << setprecision(3) << "The jet is going " << units.accel << " meters per second (m/s) at takeoff." << endl;
    
    units.timToTakeOff = units.distance/units.accel; //finds how long the jet takes to go from 0kph to takeoff speed
    
    cout << "The Jet took approx " << units.timToTakeOff << " seconds to reach full speed." << endl;

    
    return 0;
    
}