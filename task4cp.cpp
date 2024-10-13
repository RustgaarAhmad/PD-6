#include <iostream>
using namespace std;

float company(string ,string , int );
string service_type(char);
string period_of_day(char);

int main() 
{
    char srCode, call;
    int min;

    cout << "Enter the service code (R/r for regular, P/p for premium): ";
    cin >> srCode;
    cout << "Enter time of the call (D/d for day, N/n for night): ";
    cin >> call;
    cout << "Enter the number of minutes used: ";
    cin >> min;

    string service = service_type(srCode);
    cout << "Service Type: "<< service<<endl;
    cout << "Total Minutes Used: "<< min<<endl;
    string period = period_of_day(call);

    float amount = company(service , period, min);
    cout << "Total amount: $" << amount << endl;

    return 0;
}
string service_type(char srCode)
{   
    string type;
    if (srCode == 'P' || srCode == 'p')
    {
        type = "Premium";
    }
    if (srCode == 'R' || srCode == 'r')
    {
        type = "Regular";
    }
    return type;
}
string period_of_day(char call)
{   
    string period;
    if (call == 'D' || call == 'd')
    {
        period = "Day";
    }
    if (call == 'N' || call == 'n')
    {
        period = "Night";
    }
    return period;
}

float company(string service,string period, int min) 
{
    float amount;
    if (service == "Regular")
    {
        if (min <= 50)
        {
            amount = 10;
        }
        else 
        {
            amount = 10 + (min-50)*0.20;
        }
    }
    else if (service == "Premium" && period == "Day")
    {
        if (min <= 75)
        {
            amount = 25;
        }
        else 
        {
            amount = 25 + (min - 75)*0.10;
        }
    }
    else if (service == "Premium" && period == "Night")
    {
        if (min <= 100)
        {
            amount = 25;
        }
        else
        {
            amount = 25 +(min - 100)*0.05;
        }
    }
    return amount;
}