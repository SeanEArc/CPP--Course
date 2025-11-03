/* PERSONAL NOTE: .h == BLUEPRINT
The .h file is to tell the compiler that the class "Car" exist and it has these variables and functions, but doesn't show what the fuctions or variables actually do. 
*/

#ifndef CAR_H
#define CAR_H

#include <string>
using namespace std;

class Car {

      private:
            int year;
            string make;
            int speed;

      public:

            // Constructors
            Car(int year, string make);

            // Accessors -- These are essentially getters and setters
            int getYear() const;
            string getMake() const;
            int getSpeed() const;

            // Functions -- Void if the function does not return a value
            void accelerate();
            void brake();

};

#endif


/*
Write a class named Car that has the following member variables:

year. An int that holds the car’s model year.

make. A string object that holds the make of the car.

speed. An int that holds the car’s current speed.

In addition, the class should have the following member functions.

Constructor. The constructor should accept the car’s year and make as arguments and assign these values to the object’s year and make member variables. The constructor should initialize the speed member variable to 0.

Accessors. Appropriate accessor functions should be created to allow values to be retrieved from an object’s year, make, and speed member variables.

accelerate. The accelerate function should add 5 to the speed member variable each time it is called.

brake. The brake function should subtract 5 from the speed member variable each time it is called.

Demonstrate the class in a program that creates a Car object and then calls the accelerate function five times. After each call to the accelerate function, get the current speed of the car and display it. Then, call the brake function five times. After each call to the brake function, get the current speed of the car and display it.
*/