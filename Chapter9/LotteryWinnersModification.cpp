#include <iostream>
#include <string>
using namespace std;

bool binarySearch(const int arr[], int size, int value) {
      int first = 0, last = size - 1, middle;

      while (first <= last) {
            middle = (first + last) / 2;

            if (arr[middle] == value){
                  return true;
            } else if (arr[middle] > value) {
                  last = middle - 1;
            } else {
                  first = middle + 1;

            }
      }

      return false;
}

int main () {

      const int SIZE = 10;
      int ticket[SIZE] = {13579, 26791, 26792, 33445, 55555, 62483, 77777,79422, 85647, 93121};

      int winningNumber;

      cout << "Enter the wining lottery number: ";
      cin >> winningNumber;

      if (binarySearch(ticket, SIZE, winningNumber)) {
            cout << "Congratulations! You are a lottery winner!" << endl;
      } else {
            cout << "Sorry, better luck next time." << endl;
      }

      return 0;

}