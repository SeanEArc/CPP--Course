

// Include needed header files here.


#include <iostream>
#include <string>
using namespace std;

int main(){
      const int SIZE = 20;
      string name[SIZE] = 
      {"Collins, Bill",  "Smith, Bart",  "Michalski, Joe", "Griffin, Jim",
      "Sanchez, Manny",  "Rubin, Sarah", "Taylor, Tyrone", "Johnson, Jill", 
      "Allison, Jeff",  "Moreno, Juan", "Wolfe, Bill",    "Whitman, Jean",
      "Moretti, Bella", "Wu, Eric",     "Patel, Renee",   "Harrison, Rose",
      "Smith, Cathy",   "Conroy, Pat",  "Kelly, Sean",    "Holland, Beth"};


      // Insert your code to complete this program.

      // Displays array pre sorted

      for (int i = 0; i < SIZE; i++) {
            cout << name[i] << endl;
      }

      // Sort algorithm
      int minIndex;
      string minValue;

      for (int start = 0; start < (SIZE - 1); start++) {
            minIndex = start;
            minValue = name[start];

            for (int index = start + 1; index < SIZE; index++) {

                  if (name[index] < minValue) {
                        minValue = name[index];
                        minIndex = index;
                  }
            }

            // Swap values
            name[minIndex] = name[start];
            name[start] = minValue;
      }

      // Displays array post sorted
      cout << "\nSorted List: \n";
      for (int i = 0; i < SIZE; i++) {
            cout << name[i] << endl;
      }

}