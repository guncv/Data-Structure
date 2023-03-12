#include <iostream>

using namespace std;

int main()
{
    int timeHour,timeMinutes;
    int minuteDuration;

    cin >> timeHour >> timeMinutes;
    cin >> minuteDuration;
    timeHour += (int) minuteDuration/60;
    timeMinutes += minuteDuration%60;

    if (timeMinutes >= 60){
        timeHour += 1;
        timeMinutes -= 60;
    }
    if (timeHour > 23){
        timeHour -= 24;
    }
    
    if (timeHour < 10 && timeMinutes < 10){
        cout << '0' << timeHour << " 0" << timeMinutes << endl;
    }else if (timeHour < 10){
        cout << '0' << timeHour << ' ' << timeMinutes << endl;
    }else if (timeMinutes < 10){
        cout << timeHour << " 0" << timeMinutes << endl;
    }else {
        cout << timeHour << ' ' << timeMinutes << endl;
    }


}

