#include <iostream>
using namespace std;

struct Student {
    string name;
    double score;
};

void sortScores(Student *array, int size);

double calculateAverage(Student *array, int size);

int main () {

      int numScores;

      cout << "How many test scores will you enter? ";
      cin >> numScores;
      cin.ignore();      

      Student *students = new Student[numScores];

      for (int i = 0; i < numScores; i++) {
            cout << "Enter name for student " << (i+1) << ": ";

            getline(cin, (students + i)->name);
            

            cout << "Enter score for " << students[i].name << ": ";
            cin >> (students + i)->score;
            cin.ignore();      

      }

      sortScores(students, numScores);

      cout << "\nThe sorted scores are: \n";
      for (Student *ptr = students; ptr < students + numScores; ptr++) {
            cout << ptr->name << ": " << ptr->score << endl;
      }
      cout << endl;

      // Calculate average
      double avg = calculateAverage(students, numScores);
      cout << "The average score is: " << avg << endl;

      // Free dynamically allocated memory
      delete [] students;

      return 0;

}

void sortScores(Student *array, int size) {
      for (Student *i = array; i < array + size ; i++) {

            for (Student *j = i + 1; j < array + size; j++){
                  if (j->score < i->score) {
                        Student temp = *i;
                        *i = *j;
                        *j = temp;
                  }
            }
      }
}

double calculateAverage(Student *array, int size){

      double total = 0.0;

      for (Student *ptr = array; ptr < array + size; ptr++) {
            total += ptr->score;
      }

      return total / size;
}
