//Created By Carter Dishman
//Created On 10/10/17
#include <iostream>
#include <string>

using namespace std;


//This whole section is for declaring functions and varables in the global scope

int num_data    = 0; 
int num_tablets = 0;


int ATTUnlimitedChoice(int phones, int tablets, int gigs);
int VerizonUnlimited(int phones, int tablets);
int SprintUnlimited(int phones);
int Sprint2GB(int phones);

string PriceCheck(int ATT_Unl, int VZ_Unl, int Sprint_Unl, int Sprint_2gb);

int main () //int main function that takes user input then calls the PriceCheck function
{
    //input from user
    int num_phones = 0;
    int num_tablets = 0;
    
    //get input from user
    cout << "Enter number of phones: ";
    cin >> num_phones;
    
    cout << "Enter number of tablets: ";
    cin >> num_tablets;
    
    cout << "Enter number of gigs of data: ";
    cin >> num_data;
    
    //Check Prices
    int ATT_Unl    = ATTUnlimitedChoice(num_phones, num_tablets, num_data);
    int VZ_Unl     = VerizonUnlimited(num_phones, num_tablets);
    int Sprint_Unl = SprintUnlimited(num_phones);
    int Sprint_2gb = Sprint2GB(num_phones);
    
    string plan = "";
    
    cout << "The best phone plan for you is the " << PriceCheck(ATT_Unl, VZ_Unl, Sprint_Unl, Sprint_2gb);
}


//________AT&T Unlimited Choice Plan________________ 
int ATTUnlimitedChoice (int phones, int tablets, int gigs)  
{
    int total_price = 0;
    //Calculations for phone lines
    if (phones == 1)
    {
        total_price += 60;   //I was shown how to use += and decided to use it for simplicity's sake
    }
    else if (phones == 2)
    {
        total_price += 115;
    }
    
    if (phones > 2)
    {
        total_price += (phones * 20) - 40;
    }
    
    //Calculation for tablets
    total_price += tablets * 10;
    
    //Calculations for data
    total_price += phones * 20;
    
    if (gigs <= 1)
    {
        total_price += 30;
    }
    else if (gigs > 1 && gigs <= 3)
    {
        total_price += 40;
    }
    else if (gigs > 3 && gigs <= 6)
    {
        total_price += 60;
    }
    else if (gigs > 6 && gigs <= 10)
    {
        total_price += 80;
    }
    else if (gigs > 10 && gigs <=16)
    {
        total_price += 90;
    }
    else if (gigs > 16 && gigs <= 25)
    {
        total_price += 110;
    }
    
    return total_price;
}

//________Verision Unlimited________________

int VerizonUnlimited (int phones, int tablets)
{
    int total_price = 0;
    
    if (phones == 1)
    {
        total_price += 80;
    }
    else if (phones > 1)
    {
        total_price += 110;
    }
    
    total_price += 20 * phones;
    total_price += 10 * tablets;
    
    return total_price;
}

//________Sprint Unlimited________________

int SprintUnlimited (int phones)
{
    int total_price = 0;
    
    if (phones == 1)
    {
        total_price = 60;
    }
    
    else if (phones == 2)
    {
        total_price = 100;
    }
    
    else if (phones <= 3)
    {
        total_price = 100 + (20 * (phones - 2));
    }

}


//________Sprint 2GB________________
int Sprint2GB (int phones)
{
    int total_price = phones * 40;
    
    return total_price;
}

string PriceCheck (int ATT_Unl, int VZ_Unl, int Sprint_Unl, int Sprint_2gb)
{
    int total = ATT_Unl;
    string company = "AT&T Unlimited Plan.";
    
    if (VZ_Unl < ATT_Unl)
    {
        total = VZ_Unl;
        company = "Verizon Unlimited Plan.";
    }
    if (num_tablets)
    {
        if (Sprint_Unl < total)
        {
            total = Sprint_Unl;
            company = "Sprint Unlimited Plan.";
        }
    }
    
    if (num_tablets != 0)
    {
        if (num_data = 2)
        {
            if (Sprint_2gb)
            {
                total = Sprint_2gb;
                company = "Sprint 2gb Plan.";
            }
        }
    }
    
    return company;
}

/*
Enter number of phones: 2
Enter number of tablets: 0
Enter number of gigs of data: 5
The best phone plan for you is the Verizon Unlimited Plan.

Enter number of phones: 2
Enter number of tablets: 1
Enter number of gigs of data: 15
The best phone plan for you is the Verizon Unlimited Plan.

Enter number of phones: 1
Enter number of tablets: 0
Enter number of gigs of data: 0
The best phone plan for you is the Verizon Unlimited Plan.
*/