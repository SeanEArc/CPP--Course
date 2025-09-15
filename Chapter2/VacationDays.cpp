#include <iostream>
using namespace std;

#include <iomanip>

int main(){

      double daysOnVacation, hours, minutes, seconds;

      cout << "How many days do you plan on being on vacation? ";
      cin >> daysOnVacation;

      hours = daysOnVacation * 24;
      minutes = hours * 60;
      seconds = minutes * 60;

      cout << fixed << setprecision(0);
      
      cout << "Total Hours: " << hours << endl;
      cout << "Total Minutes: " << minutes << endl;
      cout << "Total Seconds: " << seconds << endl;
      
      return 0;
}