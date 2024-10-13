#include<iostream>
using namespace std;
string findZodiacSign(int date, string month)
{
      if(month=="march" && date>=21 || month=="april" && date<=19)
      { 
           return "Aries";
      }

      if(month=="april" && date>=20 || month=="may" && date<=20)
      {
           return "Taurus";
      }
    
      if(month=="may" && date>=21 || month=="june" && date<=20)
      {
           return "Gemini";
      }
       
      if(month=="june" && date>=21 || month=="july" && date<=22)
      {
           return "Cancer";
      }

      if(month=="july" && date>=23 || month=="august" && date<=22)
      {
           return "Leo";
      }
    
      if(month=="august" && date>=23 || month=="september" && date<=22)
      {
           return "Virgo";
      }
      
      if(month=="september" && date>=23 || month=="october" && date<=22)
      {
           return "Libra";
      }
    
      if(month=="october" && date>=23 || month=="november" && date<=21)
      {
           return "Scorpio";
      }
    
      if(month=="november" && date>=22 || month=="december" && date<=21)
      {
           return "Sagittarius";
      }
 
      if(month=="december" && date>=22 || month=="january" && date<=19)
      {
           return "Capricorn";
      }

      if(month=="january" && date>=20 || month=="february" && date<=18)
      {
           return "Aquarius";
      }
   
      if(month=="february" && date>=19 || month=="march" && date<=20)
      {
           return "Pisces";
      }
       else
      { 
       return "error";
      }
}


main()
{
    int date;
    string month;
    cout <<"Enter your date of birth:";
    cin >> date;
    cout << "Enter your month :";
    cin >> month;
    cout << "Your zodiac sign is :" << findZodiacSign(date, month);
}