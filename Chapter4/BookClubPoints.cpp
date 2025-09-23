#include <iostream>
using namespace std;

int main(){

      int booksPurchased, pointsEarned;

      cout << "How many books did you purchase this month? ";
      cin >> booksPurchased;

      if (booksPurchased == 0) {
            pointsEarned = 0;
            
      } else if (booksPurchased == 1) {
            pointsEarned = 5;
      } else if (booksPurchased == 2) {
            pointsEarned = 15;
      } else if (booksPurchased == 3) {
            pointsEarned = 30;
      } else {
            pointsEarned = 60;
      }

      cout << "You have earned " << pointsEarned << " points." << endl;


      return 0;
}