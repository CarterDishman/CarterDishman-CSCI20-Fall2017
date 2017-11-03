// This program reads in a letter and reports whether
// it is an uppercase letter, a lowercase letter, or neither.
// it should continue reading in values until the user enters a -1.
#include <iostream> 

using namespace std; 
int main() {

char ch;
cout << "Please enter a character: ";
cin  >> ch;


<<<<<<< HEAD
while (ch != '-')
    {

=======
    
if (ch > '0'){
>>>>>>> 0c0a006a495afa10d9c688cbc05b51a96f8fdd22
    if (ch >= 'A' && ch <= 'Z') {
        cout << "Yes, that is a uppercase letter." << endl;
    }
        
    else if (ch >= 'a' && ch <= 'z') {
        cout << "Yes, that is a lowercase letter" << endl;
    }
    
    else {
        cout << "Not a letter" << endl;
    }
<<<<<<< HEAD

    
    cout << "Ente a new value, or you can enter \'-1\' to exit the program." << endl;
    cin >> ch;
}
        return 0;
    
}


=======
    
}

    if (ch < '0'){
        cout << "Try again." << endl;
    }

        return 0;
    
}
>>>>>>> 0c0a006a495afa10d9c688cbc05b51a96f8fdd22
