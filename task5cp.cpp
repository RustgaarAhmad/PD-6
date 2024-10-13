#include <iostream>
using namespace std;

float calculate_fruit_price(string fruit_name, string day_of_week, double quantity);

int main()
 {
    string fruit_name, day_of_week;
    double quantity;

    cout << "Enter the fruit name: ";
    cin >> fruit_name;
    cout << "Enter the day of week: ";
    cin >> day_of_week;
    cout << "Enter the quantity: ";
    cin >> quantity;

    double result = calculate_fruit_price(fruit_name, day_of_week, quantity);
    cout << "Total price: " << result << endl;

    return 0;
}

float calculate_fruit_price(string fruit_name, string day_of_week, double quantity)
 {
    float calculate = 0.0;

   if (day_of_week == "monday" || day_of_week == "tuesday" || day_of_week == "wednesday" || day_of_week == "thursday" ||  day_of_week == "friday") 
   {

        if (fruit_name == "banana") 
        {
            calculate = quantity * 2.50;
        } 
        else if (fruit_name == "apple")
         {
            calculate = quantity * 1.20;
        } 
        else if (fruit_name == "orange") 
        {
            calculate = quantity * 0.85;
        }
         else if (fruit_name == "grapefruit")
          {
            calculate = quantity * 1.45;
        } 
        else if (fruit_name == "kiwi")
         {
            calculate = quantity * 2.70;
        }
         else if (fruit_name == "pineapple")
          {
            calculate = quantity * 5.50;
        } 
        else if (fruit_name == "grapes") 
        {
            calculate = quantity * 3.85;
        } 
        else 
        {
            return 0;
        }
    } 
   
    else if (day_of_week == "saturday" || day_of_week == "sunday") 
    {
        if (fruit_name == "banana")
         {
            calculate = quantity * 2.70;
        }
         else if (fruit_name == "apple")
          {
            calculate = quantity * 1.25;
        }
         else if (fruit_name == "orange") 
         {
            calculate = quantity * 0.90;
        } 
        else if (fruit_name == "grapefruit") 
        {
            calculate = quantity * 1.60;
        } 
        else if (fruit_name == "kiwi")
         {
            calculate = quantity * 3.00;
        } 
        else if (fruit_name == "pineapple") 
        {
            calculate = quantity * 5.60;
        }
         else if (fruit_name == "grapes")
          {
            calculate = quantity * 4.20;
          }
    }
        else
        {
            cout <<"Invalid"<<endl;
        }

        return calculate;
 }