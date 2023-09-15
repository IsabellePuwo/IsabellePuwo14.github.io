#include <iostream>
#include <string>

using namespace std;


struct MovieData {
    string title;
    string director;
    int yearReleased;
    int runningTime;
};


void collectMovieData(MovieData &movie) {
    cout << "Enter the movie title: ";
    getline(cin, movie.title);
    cout << "Enter the director's name: ";
    getline(cin, movie.director);
    cout << "Enter the year of release: ";
    cin >> movie.yearReleased;
    cout << "Enter the running time in minutes: ";
    cin >> movie.runningTime;
}


void displayMovieData(const MovieData &movie) {
    cout << "Title: " << movie.title << endl;
    cout << "Director: " << movie.director << endl;
    cout << "Year Released: " << movie.yearReleased << endl;
    cout << "Running Time: " << movie.runningTime << " minutes" << endl;
    cout << endl;
}

int main() {
    
    MovieData movie1, movie2;
    cout << "Enter data for movie 1:\n";
    collectMovieData(movie1);
    cout << endl;
    cout << "Enter data for movie 2:\n";
    collectMovieData(movie2);
    cout << endl;
    cout << "Movie 1:\n";
    displayMovieData(movie1);
    cout << "Movie 2:\n";
    displayMovieData(movie2);

    return 0;
}
