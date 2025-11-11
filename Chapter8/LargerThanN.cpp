#include <iostream>
#include <vector>
using namespace std;

void displayLargerThanN(int arr[], int size, int n);

int main() {

      int n, arraySize = -1;

      while (arraySize <= 0) {
            cout << "How many numbers are you entering into the array? ";
            cin >> arraySize;
      }

      int numbersArray[arraySize];

      for (int i = 0; i < arraySize; i++) {
            cout << "Enter number " << (i + 1) << ": ";
            cin >> numbersArray[i];
      }

      cout << "Enter the value of n (We will display any number larger than n): " << endl;
      cin >> n;

      displayLargerThanN(numbersArray, arraySize, n);

      return 0;
}

void displayLargerThanN(int arr[], int size, int n) {

      cout << "Numbers larger than " << n << " are: " << endl;

      for (int i = 0; i < size; i++) {
            if (arr[i] > n) {
                  cout << arr[i] << " " << endl;
            }
      }

      cout << endl;
}