
// This allows us to use setprecision. 
#include <iomanip>

#include <iostream>
using namespace std;

int main(){

      float tax = .0675, 
      tip = .15, 
      mealCost = 44.50;

      float calculatedTax = mealCost * tax;
      float calculatedTip = mealCost * tip;
      float totalBill = mealCost + calculatedTax + calculatedTip;

      // This line fortmats the other cout statments to 2 decmal places. To reset the format of cout, we can use defaultfloat which is part of the iostream library.
      cout << fixed << setprecision(2);

      cout << "Meal cost: $" << mealCost << endl;
      cout << "Tax: $" << calculatedTax << endl;
      cout << "Tip: $" << calculatedTip << endl;

      cout << "Total Bill: $" << totalBill << endl;

      return 0;


}