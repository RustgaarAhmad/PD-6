#include<iostream>
using namespace std;
string condition(string, string);
main()
{
    string temp, humidity;
    cout<< "Enter temperature(warm or cold):";
    cin>> temp;
    cout<< "Enter Humidity(dry or humid):";
    cin>> humidity;
    string activity= condition(temp, humidity);
    cout<< "Recomended activity:" << activity << endl;

}
string condition(string temp, string humidity)
{
    string result;
    if(temp == "warm"  &&  humidity == "dry")
    {
        result = "playtennis";
    }
   else if(temp == "warm"  &&  humidity == "humid")
   {
        result = "swim";
    }
    else if(temp == "cold"  && humidity == "dry")
    {
        result = "Playbasketball";
    }
    else if(temp == "cold"  && humidity == "humid")
    {
        result = "Watchtv";
    }
    return result;
}