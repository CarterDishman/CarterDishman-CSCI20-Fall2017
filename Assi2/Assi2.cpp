//Created By: Carter Dishman   
//Created On: 10/4/2017      
//This program takes a price of an item and gives all the taxes for multiple states, counties, and cities.
 
 #include <iostream> 
 #include <iomanip>                         //this PPD will be used to set decimal percision to 2 places.
 using namespace std;
 
 class Tax {       
    private:                                //All of the vars that will be used in this programs
    const double chico_state   = 6.00e-2;   //e-2 moves the decimal two places to the left(personal pref)
    const double chico_county  = 0.25e-2;
    const double chico_city    = 0.0;
    const double chico_special = 1.0e-2;
    
    const double paradise_state   = 6.00e-2;
    const double paradise_county  = 0.25e-2;
    const double paradise_city    = 0.50e-2;
    const double paradise_special = 1.00e-2;
    
    const double sac_state   = 6.00e-2;
    const double sac_county  = 0.25e-2;
    const double sac_city    = 0.50e-2;
    const double sac_special = 1.50e-2;
   
    const double vegas_state   = 4.60e-2;
    const double vegas_county  = 3.65e-2;
    const double vegas_city    = 0.0;
    const double vegas_special = 0.0;
    
    const double phx_state   = 5.60e-2; 
    const double phx_county  = 0.70e-2;
    const double phx_city    = 2.30e-2;
    const double phx_special = 0.0;
    
    double item_price = 0.0;
    
    public:   
    
    void SetPrice(double P);
    double GetPrice();
    
    void Print();
    
    
    double GetChicoState();
    double GetChicoCounty();
    double GetChicoCity();
    double GetChicoSpecial();
    
    double GetParadiseState();
    double GetParadiseCounty();
    double GetParadiseCity();
    double GetParadiseSpecial();
    
    double GetSacState();
    double GetSacCounty();
    double GetSacCity();
    double GetSacSpecial();
    
    double GetVegasState();
    double GetVegasCounty();
    double GetVegasCity();
    double GetVegasSpecial();
    
    double GetPhxState();
    double GetPhxCounty();
    double GetPhxCity();
    double GetPhxSpecial();
    
    
    
    double GetItemPrice ();
     
 };
 
//Prints all taxes for a certain item
void Tax::Print()
{
 cout.setf(ios::fixed); 
 
 cout << setprecision(2) << "California State Tax: $" << GetChicoState() * GetItemPrice() << endl;
 cout << setprecision(2) << "Butte County Tax: $" << GetChicoCounty() * GetItemPrice() << endl;
 cout << setprecision(2) << "Chico City Tax: $" << GetChicoCity() * GetItemPrice() << endl;
 cout << setprecision(2) << "Chico Special Tax: $" << GetChicoSpecial() * GetItemPrice() << endl << endl;
 cout << endl;
 
 cout << setprecision(2) << "California State Tax: $" << GetParadiseState() * GetItemPrice() << endl;
 cout << setprecision(2) << "Butte County Tax: $" << GetParadiseCounty() * GetItemPrice() << endl;
 cout << setprecision(2) << "Paradise City Tax: $" << GetParadiseCity() * GetItemPrice() << endl;
 cout << setprecision(2) << "Paradise Special Tax: $ " << GetParadiseSpecial() * GetItemPrice() << endl;
 cout << endl;
 
 cout << setprecision(2) << "California State Tax: $" << GetSacState() * GetItemPrice() << endl;
 cout << setprecision(2) << "Sacramento County Tax: $" << GetSacCounty() * GetItemPrice() << endl;
 cout << setprecision(2) << "Sacramento City Tax: $" << GetSacCity() * GetItemPrice() << endl;
 cout << setprecision(2) << "Sacramento Special Tax: $" << GetSacSpecial() * GetItemPrice() << endl;
 cout << endl;
 
 cout << setprecision(2) << "Nevada State Tax: $" << GetVegasState() * GetItemPrice() << endl;
 cout << setprecision(2) << "Clark County Tax: $" << GetVegasCounty() * GetItemPrice() << endl;
 cout << setprecision(2) << "Las Vegas City Tax: $" << GetVegasCity() * GetItemPrice() << endl;
 cout << setprecision(2) << "Las Vegas Special Tax: $" << GetVegasSpecial() * GetItemPrice() << endl;
 cout << endl;
 
 cout << setprecision(2) << "Arizona State Tax: $" << GetPhxState() * GetItemPrice() << endl;
 cout << setprecision(2) << "Maricopa County Tax: $" << GetPhxCounty() * GetItemPrice() << endl;
 cout << setprecision(2) << "Phoenix City Tax: $" << GetPhxCity() * GetItemPrice() << endl;
 cout << setprecision(2) << "Phoenix Special Tax: $" << GetPhxSpecial() * GetItemPrice() << endl;
 cout << "----------------------------------------------------------------" << endl;
 cout << endl;
}


int main(){
 
 
 cout.setf(ios::fixed);                     //Sets decimal percicion to 2 places
 
 
 double price;
 
 Tax tax1, tax2, tax3, tax4, tax5, tax6, tax7, tax8, tax9, tax10;
 
 //first item
 cout << "Input item price: $";
 cin >> price;
 cout << endl;
 tax1.SetPrice(price);
 tax1.Print();
 
 //second item
 cout << "Input item price: $";
 cin >> price;
 cout << endl;
 tax2.SetPrice(price);
 tax2.Print();
 
 //third item
 cout << "Input item price: $";
 cin >> price;
 cout << endl;
 tax3.SetPrice(price);
 tax3.Print();
 
 //fourth item
 cout << "Input item price: $";
 cin >> price;
 cout << endl;
 tax4.SetPrice(price);
 tax4.Print();
 
 //fifth item
 cout << "Input item price: $";
 cin >> price;
 cout << endl;
 tax5.SetPrice(price);
 tax5.Print();
 
 //sixth item
 cout << "Input item price: $";
 cin >> price;
 cout << endl;
 tax6.SetPrice(price);
 tax6.Print();
 
 //seventh item
 cout << "Input item price: $";
 cin >> price;
 cout << endl;
 tax7.SetPrice(price);
 tax7.Print();
 
 //eigth item
 cout << "Input item price: $";
 cin >> price;
 cout << endl;
 tax8.SetPrice(price);
 tax8.Print();
 
 //ninth item
 cout << "Input item price: $";
 cin >> price;
 cout << endl;
 tax9.SetPrice(price);
 tax9.Print();
 
 //tenth item
 cout << "Input item price: $";
 cin >> price;
 cout << endl;
 tax10.SetPrice(price);
 tax10.Print();
}





//______________________________Get Functions_______________________________

//__Chico__
double Tax::GetChicoState()
{
 return chico_state;
}

double Tax::GetChicoCounty()
{
 return chico_county;
}

double Tax::GetChicoCity()
{
 return chico_city;
}


double Tax::GetChicoSpecial()
{
 return chico_special;
}


//__Paradise__
double Tax::GetParadiseState()
{
 return paradise_state;
}

double Tax::GetParadiseCounty()
{
 return paradise_county;
}

double Tax::GetParadiseCity()
{
 return paradise_city;
}

double Tax::GetParadiseSpecial()
{
 return paradise_special;
}


//__Sac__
double Tax::GetSacState()
{
 return sac_state;
}

double Tax::GetSacCounty()
{
 return sac_county;
}

double Tax::GetSacCity()
{
 return sac_city;
}

double Tax::GetSacSpecial()
{
 return sac_special;
}

//__Vegas__
double Tax::GetVegasState()
{
 return vegas_state;
}

double Tax::GetVegasCounty()
{
 return vegas_county;
}

double Tax::GetVegasCity()
{
 return vegas_city;
}

double Tax::GetVegasSpecial()
{
 return vegas_special;
}


//__Phx__
double Tax::GetPhxState()
{
 return phx_state;
}

double Tax::GetPhxCounty()
{
 return phx_county;
}

double Tax::GetPhxCity()
{
 return phx_city;
}

double Tax::GetPhxSpecial()
{
 return phx_special;
}


//____
double Tax::GetItemPrice ()
{
 return item_price;
}


//_______________________Set Functions____________________________

void Tax::SetPrice(double P)
{
 item_price = P;
}





//Output after running the program.


/*
Input item price: $28.55

California State Tax: $1.71
Butte County Tax: $0.07
Chico City Tax: $0.00
Chico Special Tax: $0.29


California State Tax: $1.71
Butte County Tax: $0.07
Paradise City Tax: $0.14
Paradise Special Tax: $ 0.29

California State Tax: $1.71
Sacramento County Tax: $0.07
Sacramento City Tax: $0.14
Sacramento Special Tax: $0.43

Nevada State Tax: $1.31
Clark County Tax: $1.04
Las Vegas City Tax: $0.00
Las Vegas Special Tax: $0.00

Arizona State Tax: $1.60
Maricopa County Tax: $0.20
Phoenix City Tax: $0.66
Phoenix Special Tax: $0.00
----------------------------------------------------------------

Input item price: $55.87

California State Tax: $3.35
Butte County Tax: $0.14
Chico City Tax: $0.00
Chico Special Tax: $0.56


California State Tax: $3.35
Butte County Tax: $0.14
Paradise City Tax: $0.28
Paradise Special Tax: $ 0.56

California State Tax: $3.35
Sacramento County Tax: $0.14
Sacramento City Tax: $0.28
Sacramento Special Tax: $0.84

Nevada State Tax: $2.57
Clark County Tax: $2.04
Las Vegas City Tax: $0.00
Las Vegas Special Tax: $0.00

Arizona State Tax: $3.13
Maricopa County Tax: $0.39
Phoenix City Tax: $1.29
Phoenix Special Tax: $0.00
----------------------------------------------------------------

Input item price: $84.12

California State Tax: $5.05
Butte County Tax: $0.21
Chico City Tax: $0.00
Chico Special Tax: $0.84


California State Tax: $5.05
Butte County Tax: $0.21
Paradise City Tax: $0.42
Paradise Special Tax: $ 0.84

California State Tax: $5.05
Sacramento County Tax: $0.21
Sacramento City Tax: $0.42
Sacramento Special Tax: $1.26

Nevada State Tax: $3.87
Clark County Tax: $3.07
Las Vegas City Tax: $0.00
Las Vegas Special Tax: $0.00

Arizona State Tax: $4.71
Maricopa County Tax: $0.59
Phoenix City Tax: $1.93
Phoenix Special Tax: $0.00
----------------------------------------------------------------

Input item price: $32.31

California State Tax: $1.94
Butte County Tax: $0.08
Chico City Tax: $0.00
Chico Special Tax: $0.32


California State Tax: $1.94
Butte County Tax: $0.08
Paradise City Tax: $0.16
Paradise Special Tax: $ 0.32

California State Tax: $1.94
Sacramento County Tax: $0.08
Sacramento City Tax: $0.16
Sacramento Special Tax: $0.48

Nevada State Tax: $1.49
Clark County Tax: $1.18
Las Vegas City Tax: $0.00
Las Vegas Special Tax: $0.00

Arizona State Tax: $1.81
Maricopa County Tax: $0.23
Phoenix City Tax: $0.74
Phoenix Special Tax: $0.00
----------------------------------------------------------------

Input item price: $67.89

California State Tax: $4.07
Butte County Tax: $0.17
Chico City Tax: $0.00
Chico Special Tax: $0.68


California State Tax: $4.07
Butte County Tax: $0.17
Paradise City Tax: $0.34
Paradise Special Tax: $ 0.68

California State Tax: $4.07
Sacramento County Tax: $0.17
Sacramento City Tax: $0.34
Sacramento Special Tax: $1.02

Nevada State Tax: $3.12
Clark County Tax: $2.48
Las Vegas City Tax: $0.00
Las Vegas Special Tax: $0.00

Arizona State Tax: $3.80
Maricopa County Tax: $0.48
Phoenix City Tax: $1.56
Phoenix Special Tax: $0.00
----------------------------------------------------------------

Input item price: $8.47

California State Tax: $0.51
Butte County Tax: $0.02
Chico City Tax: $0.00
Chico Special Tax: $0.08


California State Tax: $0.51
Butte County Tax: $0.02
Paradise City Tax: $0.04
Paradise Special Tax: $ 0.08

California State Tax: $0.51
Sacramento County Tax: $0.02
Sacramento City Tax: $0.04
Sacramento Special Tax: $0.13

Nevada State Tax: $0.39
Clark County Tax: $0.31
Las Vegas City Tax: $0.00
Las Vegas Special Tax: $0.00

Arizona State Tax: $0.47
Maricopa County Tax: $0.06
Phoenix City Tax: $0.19
Phoenix Special Tax: $0.00
----------------------------------------------------------------

Input item price: $69.98

California State Tax: $4.20
Butte County Tax: $0.17
Chico City Tax: $0.00
Chico Special Tax: $0.70


California State Tax: $4.20
Butte County Tax: $0.17
Paradise City Tax: $0.35
Paradise Special Tax: $ 0.70

California State Tax: $4.20
Sacramento County Tax: $0.17
Sacramento City Tax: $0.35
Sacramento Special Tax: $1.05

Nevada State Tax: $3.22
Clark County Tax: $2.55
Las Vegas City Tax: $0.00
Las Vegas Special Tax: $0.00

Arizona State Tax: $3.92
Maricopa County Tax: $0.49
Phoenix City Tax: $1.61
Phoenix Special Tax: $0.00
----------------------------------------------------------------

Input item price: $57.79

California State Tax: $3.47
Butte County Tax: $0.14
Chico City Tax: $0.00
Chico Special Tax: $0.58


California State Tax: $3.47
Butte County Tax: $0.14
Paradise City Tax: $0.29
Paradise Special Tax: $ 0.58

California State Tax: $3.47
Sacramento County Tax: $0.14
Sacramento City Tax: $0.29
Sacramento Special Tax: $0.87

Nevada State Tax: $2.66
Clark County Tax: $2.11
Las Vegas City Tax: $0.00
Las Vegas Special Tax: $0.00

Arizona State Tax: $3.24
Maricopa County Tax: $0.40
Phoenix City Tax: $1.33
Phoenix Special Tax: $0.00
----------------------------------------------------------------

Input item price: $1000.00

California State Tax: $60.00
Butte County Tax: $2.50
Chico City Tax: $0.00
Chico Special Tax: $10.00


California State Tax: $60.00
Butte County Tax: $2.50
Paradise City Tax: $5.00
Paradise Special Tax: $ 10.00

California State Tax: $60.00
Sacramento County Tax: $2.50
Sacramento City Tax: $5.00
Sacramento Special Tax: $15.00

Nevada State Tax: $46.00
Clark County Tax: $36.50
Las Vegas City Tax: $0.00
Las Vegas Special Tax: $0.00

Arizona State Tax: $56.00
Maricopa County Tax: $7.00
Phoenix City Tax: $23.00
Phoenix Special Tax: $0.00
----------------------------------------------------------------

Input item price: $15.00

California State Tax: $0.90
Butte County Tax: $0.04
Chico City Tax: $0.00
Chico Special Tax: $0.15


California State Tax: $0.90
Butte County Tax: $0.04
Paradise City Tax: $0.07
Paradise Special Tax: $ 0.15

California State Tax: $0.90
Sacramento County Tax: $0.04
Sacramento City Tax: $0.07
Sacramento Special Tax: $0.22

Nevada State Tax: $0.69
Clark County Tax: $0.55
Las Vegas City Tax: $0.00
Las Vegas Special Tax: $0.00

Arizona State Tax: $0.84
Maricopa County Tax: $0.10
Phoenix City Tax: $0.34
Phoenix Special Tax: $0.00
----------------------------------------------------------------


*/