#include <iostream>
using namespace std;

int main() {

      double soldBars, pricePerBar, totalSales;
      cout << "How many candy's were sold?";
      cin >> soldBars;
      cout << "What is the price per candy bar?";
      cin >> pricePerBar;
      totalSales = soldBars * pricePerBar;
      cout << "The total earned is $" << totalSales << endl;

      return 0;
}