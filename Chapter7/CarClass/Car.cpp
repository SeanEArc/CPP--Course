/* PERSONAL NOTE:
This file is the actual code for the function declared in the .h file. It tells the compiler that these variable store these values and the functions code.
*/

#include "Car.h"

// Constructor
Car::Car(int year, string make) : year(year), make(make), speed(0) {}

// Accessors (Think of getter's in Java)
int Car::getYear() const {
      return year;
}

string Car::getMake() const {
      return make;
}

int Car::getSpeed() const {
      return speed;
}


// Functions
void Car::accelerate() {
      speed += 5;
}

void Car::brake(){
      if (speed <= 0) {
            speed = 0;
      } else {
            speed-= 5;
      }

}