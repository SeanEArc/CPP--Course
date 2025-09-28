/*
Write a program that calculates how much a person earns in a month if the salary is one penny the first day, two pennies the second day, four pennies the third day, and so on with the daily pay doubling each day the employee works. 

The program should ask the user for the number of days the employee worked during the month, validate that it is between 1 and 31, and then display a table showing how much the salary was for each day worked, as well as the total pay earned for the month. 

The output should be displayed in dollars with two decimal points, not in pennies.
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main() {

      double salary = 0.01, totalSalary = 0;

      int daysWorked = 0;

      cout << "Enter the number of days worked this month (1-31): ";

      while (daysWorked < 1 || daysWorked > 31) {
            cin >> daysWorked;

            if (daysWorked < 1 || daysWorked > 31) {
                  cout << "Invalid input. Please enter a number between 1 and 31: ";
            }
      }

      cout << fixed << setprecision(2);

      for (int i = 0; i < daysWorked; i++) {

            totalSalary = totalSalary + salary;

            cout << "Day " << i + 1 << " Salary: $" << salary << endl;
            cout << "Total Earnings: $" << totalSalary << endl;

            salary *= 2;

      }

      return 0;

}