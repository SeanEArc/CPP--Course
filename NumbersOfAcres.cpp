
#include <iostream>
using namespace std;

int main(){

      double acre = 43450,
      width = 869,
      length = 360;

      double numberOfAcres = (width * length) / acre;

      cout << "Land that is 869 x 360 feet is " << numberOfAcres << " acres." << endl;

      return 0;
}
