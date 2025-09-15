#include <iostream>
using namespace std;

#include <iomanip>

int main() {

      double replacementCost,
      calculatedInsuranceCost, 
      minimumInsurancePercent = 0.80;

      cout << "Enter the replacement cost of the building: $";
      cin >> replacementCost;

      calculatedInsuranceCost = replacementCost * minimumInsurancePercent;

      cout << fixed << setprecision(2) << "$" << calculatedInsuranceCost << endl;

      return 0;

}