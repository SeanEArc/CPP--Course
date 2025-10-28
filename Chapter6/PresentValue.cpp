#include <cmath>
#include <iomanip>
#include <iostream>
using namespace std;

double presentValue(double futureValue, double monthlyRate, int time){

      return futureValue / pow(1 + monthlyRate, time);

}

int main () {

      double futureValue, annualRate;
      int years;

      cout << "Enter desired future value: ";
      cin >> futureValue;

      cout << "Enter number of years: ";
      cin >> years;

      cout << "Enter annual interest rate as a percent: ";
      cin >> annualRate;

      // Annual rate to montly
      double monthlyRate = (annualRate/100) / 12;

      // Years to months
      int months = years * 12;

      double present = presentValue(futureValue, monthlyRate, months);

      cout << fixed << setprecision(2);

      cout << "To get $" << futureValue << " in " << years << " years at a annual rate of " << annualRate << " you need to deposit $ " << present << " today.";

      return 0;
}