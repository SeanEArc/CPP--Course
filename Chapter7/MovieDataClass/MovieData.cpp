#include <iostream>
#include <string>
using namespace std;

// Structure blueprint
struct MovieData {

      string title;
      string director;
      int releaseYear;
      int runningTime;

      // Constructor
      MovieData(string t, string d, int rY, int rT){
            title = t;
            director = d;
            releaseYear = rY;
            runningTime = rT;
      };

      
};

void displayMovie(MovieData movie);


int main(){

      MovieData movie1("Harry Potter", "Chris Columbus", 2001, 157);
      MovieData movie2("The Matrix", "The Wachowskis", 1999, 136);

      cout << "Movie 1" << endl;
      displayMovie(movie1);
      cout << "Movie 2" << endl;
      displayMovie(movie2);

      return 0;


}


void displayMovie(MovieData movie) {
      cout << "Movie Title: " << movie.title << endl;
      cout << "Director: " << movie.director << endl;
      cout << "Release Year: " << movie.releaseYear << endl;
      cout << "Runtime: " << movie.runningTime << " min \n" << endl;
}
