#include <iostream>
#include <vector>
using namespace std;


int countPerfectScores(vector<int>& scores);

int main() {

      vector<int> testScores;
      int currentScore;


      while (testScores.size() < 20) {

            cout << "Enter a test score (0 to 100): ";
            cin >> currentScore;
            if (currentScore < 0 || currentScore > 100) {
                  cout << "Invalid score. Please enter a score between 0 and 100." << endl;

            } else {
                  testScores.push_back(currentScore);
            }
      }

      cout << "Number of perfect score: " << countPerfectScores(testScores) << endl;


      return 0;
}


int countPerfectScores(vector<int>& scores) {

      int perfectScoreCount = 0;
      for (int score : scores) {
            if (score == 100) {
                  perfectScoreCount++;
            }
      }

      return perfectScoreCount;
}