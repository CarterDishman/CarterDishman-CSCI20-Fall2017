//Carter Dishman
//Dec . 5 . 2017

#include<iostream>
#include<cmath>
#include<string>
#include<cstdlib>
#include<iomanip>
#include<fstream>
#include<stdlib.h> 
using namespace std;


class Hotel {
    
    private:
    
    public:
    Hotel();
    void switch_function(string guest_names[20], char status[20]) const; //Line 58
    void show_all(string guest_names[20], char status[20]) const;        //Line 95
    void show_vacant(string guest_names[20], char status[20]) const;     //Line 111
    void check_in(string guest_names[20], char status[20]) const;        //Line 122
    void check_out(string guest_names[20], char status[20]) const;       //Line 173
};

Hotel::Hotel(){
}




int main() {
    
    Hotel h; //Class initilizer
    
    ifstream inRooms; //Reads data from the rooms.txt file
    
    ofstream outRooms; //Writes data to the rooms.txt file
    
    char status[20];            //Fills an aray with the data on weather or not the rooms are avalable
    inRooms.open("status.txt");
    for(int i = 0;i < 20; ++i) {
        inRooms >> status[i];
    }//bottom of status array
    inRooms.close();

    string guest_names[20];      //Fills an aray with the data what guests are in what room
    inRooms.open("guest_names.txt");
    for(int i = 0;i < 20; ++i) {
        inRooms >> guest_names[i];
    }//bottom of name array
    inRooms.close();

    h.switch_function(guest_names, status);
}//Bottom of int main() DO NOT ERASE

void Hotel::switch_function(string guest_names[20], char status[20]) const{
    char choice;//var for the switch statmet
    
    cout << "Welcome! Is a guest checking in(i) or checking out(o)? "<< endl;
    cout << "Would they like to see a list of vacant rooms(v) or all rooms(a)?" << endl;
    cout << "Press (e) to exit the program." << endl;
    cin >> choice;
    
    switch(choice){ //Standard switch statment
        case 'i':
        check_in(guest_names, status);
        break;
        
        case 'o':
        check_out(guest_names, status);
        break;
        
        case 'v':
        show_vacant(guest_names,status);
        break;
        
        case 'a':
        show_all(guest_names,status);
        break;
        
        case 'e':
        exit;
        break;
        
        
        default:
        cout << "Invalid input, please try again" << endl;
        switch_function(guest_names,status); //Instead of using goto, I just start this whole function over again.
        break;
    }//bottom of switch(choice)
}//bottom of Hotel::switch_function

void Hotel::show_all(string guest_names[], char status[]) const{  //This function will show all rooms and their status
    cout << endl;
    for(int i = 0;i < 20; ++i) { //Itterates through the status[] array and if the room is marked 'v' for vacant, it is cout-ed as open.
            if (status[i] == 'v'){
                cout << "Room number " << i + 1  << " is open." << endl;
            }
            
            else{ //If the room is marked with an 'o' for occupied the name of the guest is cout-ed
                cout << "Room number " << i + 1 << " is taken by Mr./Mrs." << guest_names[i] << "." << endl;
            }
        }//bottom of for loop
    
        cout << endl;
        switch_function(guest_names,status); //After ststus[] itterates, the switch function is called aggain
   }//bottom of Hotel::show_all
   
void Hotel::show_vacant(string guest_names[], char status[]) const{
        cout << endl;
        for(int i = 0;i < 20; ++i) { //This function works the same as show_all but only shows the vacent rooms
            if (status[i] == 'v'){
                cout << "Room number " << i + 1 << " is open." << endl;
            }
        }
        cout << endl;
        switch_function(guest_names,status);
}//bottom of Hotel::show_vacant
   
void Hotel::check_in(string guest_names[], char status[]) const{
    int r_num;        //var for the room number
    string last_name; //var for the guests last name
    
    here: //lable for goto
    
    cout << "What room will the guest be checking into? ";
    cin >> r_num;
    
    if(status[r_num - 1] == 'v'){  //If a room is empty, status[r_num - 1] will reflect a 'v'
        cout << "Room aval." << endl;
    }
    
    else {
        cout << "Room Taken" << endl;
        goto here; //reverts back to line 134 if room is taken
    }
    
    cout << endl;
    cout << "What is the guest's last name? ";
    cin >> last_name; //Takes the guest's last name to then put into the guests_names[] array
    cout << endl;
    
    cout << "The guest's total comes to $" << guest_names[r_num - 1] << "."; //Displays the digit from the guests_names[] array as a price total.
    cout << endl;
    cout << endl;
    cout << endl;
    

    guest_names[r_num - 1] = last_name; //Replace above digit with last name of guest
    
    ofstream outRooms;
    outRooms.open("guest_names.txt");  //Pushes the guest_names array to guest_names.txt
    for(int i = 0;i < 20; ++i) {
        outRooms << guest_names[i] << endl;
    }
    outRooms.close();
    
    status[r_num - 1] = 'o'; //Updates the status[] array to reflect that the room has become occupied 
    
    outRooms.open("status.txt");//Pushes the status array to ststus.txt
    for(int i = 0;i < 20; ++i) {
        outRooms << status[i] << endl;
    }
    outRooms.close();
    
    
    switch_function(guest_names,status); //goes back to the switch function
}//bottom of Hotel::check_in

void Hotel::check_out(string guest_names[], char status[]) const{
    int r_num; //Var for the room number
     
    there:
    cout << "What room number will the guest be checking out of?" << endl;
    cin >> r_num;
    
    if(status[r_num - 1] == 'v'){ //If a room is empty, status[r_num - 1] will reflect a 'v'
        cout << "No guest in room " << r_num << "." << endl;
        goto there; //reverts back to line 134 if room is taken
    }
    
    else { //If the room has a guest in it
        guest_names[r_num - 1] = "120"; //Set the guest name to the price of the room
    
        ofstream outRooms; //Update the guest_names.txt 
        outRooms.open("guest_names.txt");
        for(int i = 0;i < 20; ++i) {
        outRooms << guest_names[i] << endl;
            }
        outRooms.close();
        
        status[r_num - 1] = 'v'; //Set status[r_num - 1] to 'v' for vacant
    
        outRooms.open("status.txt"); //Update the status.txt 
        for(int i = 0;i < 20; ++i) {
            outRooms << status[i] << endl;
            }
        outRooms.close();
    
        cout << "Checkout process complete." << endl;
        cout << endl;
        
        switch_function(guest_names,status); //go back to the switch function
    }
}//bottom of Hotel::check_out