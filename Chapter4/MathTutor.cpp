#include <iostream>
using namespace std;

#include <cstdlib>
#include <ctime>

int main(){

      int answer;

      unsigned seed = time(0);
      srand(seed);

      int num = rand() % 41 + 10;
      int num2 = rand() % 41 + 10;

      cout << "What is " << num << " + " << num2 << endl;

      cin >> answer;

      if (answer == num + num2) {
            cout << "Congrats, you got it right!" << endl;
      } else {
            cout << "Incorrect. The correct answer is " << num + num2 << endl;
      }


      return 0;
}

