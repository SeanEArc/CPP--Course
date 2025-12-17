#include <iostream>
#include <string>
using namespace std;

class Pstring : public string {
      public:
            Pstring(const string& str) : string(str) {}

            bool isPalindrone() const {

                  int n = length();

                  for (int i = 0; i < n /2; i++) {

                        if ((*this)[i] != (*this)[n-1-i]){
                              return false;
                        }
                  };
                  return true;

            }
};

int main() {
      string input;
      cout << "Enter a string: ";
      getline(cin, input);

      Pstring p(input);

      if (p.isPalindrone()) {
            cout << "This is a Palindrone" << endl;

      } else {
            cout << "This is not a Palindrone" << endl;
      }
      
      return 0;
}