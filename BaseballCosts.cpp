#include <iostream>
using namespace std;

int main(){

      double baseballs, pricePerBaseball, totalCost;

      cout << "Enter the number of baseballs purchased: ";
      cin >> baseballs;
      cout << "Enter the price per baseball: ";
      cin >> pricePerBaseball;
      totalCost = baseballs * pricePerBaseball;
      cout << "The total cost is $" << totalCost << endl;
      
      return 0;

}