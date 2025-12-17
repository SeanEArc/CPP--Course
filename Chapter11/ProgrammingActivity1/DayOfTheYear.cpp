
#include <iostream>
#include <string>
using namespace std;

class DayOfYear{
      private:

            int day;

            static string months[12];
            static int daysInMonth[12];
      
      public:

            DayOfYear(int d) {
                  day = d;
            }

      void print() const {
            int remainingDays = day;
            int monthIndex = 0;

            while (remainingDays > daysInMonth[monthIndex]) 
            {
                  remainingDays -= daysInMonth[monthIndex];
                  monthIndex++;
            }

            cout << months[monthIndex] << " " << remainingDays << endl; 
            
      }

};

string DayOfYear::months[12] = {
    "January", "February", "March", "April",
    "May", "June", "July", "August",
    "September", "October", "November", "December"
};

int DayOfYear::daysInMonth[12] = {
      31, 28, 31, 30, 31, 30,
      31, 31, 30, 31, 30, 31
};

int main () {
      int input;

      do {
            cout << "Enter a day of the year (1-365): ";
            cin >> input;

      } while (input < 1 || input > 365);


      DayOfYear day(input);
      day.print();

      return 0;
};