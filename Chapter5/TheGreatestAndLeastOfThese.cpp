#include <iostream>
#include <iomanip>
using namespace std;

int main() {

      int userInput = 0, greatest = 0, least = 0;

      cout << "Enter a series of integers (Enter '-99' to end the serires) ";

      while (userInput != -99){

            cin >> userInput;

            if (userInput == -99) {
                  break;
            }

            if (userInput > greatest) {
                  greatest = userInput;
            }

            if (userInput < least) {
                  least = userInput;
            }
            
      }

      cout << "Greatest number entered: " << greatest << endl;
      cout << "Least number entered: " << least << endl;

      return 0;

}