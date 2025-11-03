
#include <iostream>
#include "Car.h"
using namespace std;

int main(){

      Car myCar(2024, "Toyota");

      cout << "Car: " << myCar.getYear() << " " << myCar.getMake() << endl;

      for (int i = 0; i <= 5; i++) {
            
            cout << "Current Speed: " << myCar.getSpeed() << " mph" << endl;
            myCar.accelerate();

      }

      for (int i = 0; i <= 5; i++) {

            myCar.brake();
            cout << "Currently breaking. Current speed: " << myCar.getSpeed() << " mph" << endl;

      }


      return 0;


}