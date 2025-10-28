#include <iostream>
#include <iomanip>
using namespace std;

double fallingDistance(double time) {
      const double g = 9.8;
      return 0.5 * g * time * time;
}

int main() {

      cout << "Time \t Distance" << endl;

      cout << fixed << setprecision(2);

      for (int i = 1; i <= 10; i++ ){
            double distance = fallingDistance(i);
            cout << i << " second\t" << distance << " meters" << endl;
      }

      return 0;
}