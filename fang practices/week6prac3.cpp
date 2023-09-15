/*
Isabelle N Puwo
1326733
*/

#include <iostream>
using namespace std;

void getTestScore(double* num) {
    cout << "Enter the test score: ";
    cin >> *num;
}


void getFinalsScore(double* num) {
    *num *= 0.20;
}

int main() {
    double score;
    getTestScore(&score);
    getFinalsScore(&score);
    cout<< "Your test in the final is: " << score << endl;

    return 0;
}
