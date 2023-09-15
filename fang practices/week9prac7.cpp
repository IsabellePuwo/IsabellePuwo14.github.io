#include <iostream>
#include <string>

using namespace std;

struct Grade {
    string name;
    double quiz1;
    double quiz2;
};

Grade addGrade();
void printGrades(Grade grades[], int numGrades);

int main() {
    const int NUM_GRADES = 5;
    Grade grades[NUM_GRADES];
    for (int i = 0; i < NUM_GRADES; i++) {
        grades[i] = addGrade();
    }
    printGrades(grades, NUM_GRADES);

    return 0;
}

Grade addGrade() {
    Grade grade;
    cout << "Enter data for a student:" << endl;
    cout << "Name: ";
    cin >> grade.name;
    cout << "Quiz 1 grade: ";
    cin >> grade.quiz1;
    cout << "Quiz 2 grade: ";
    cin >> grade.quiz2;
    cout << endl;
    return grade;
}

void printGrades(Grade grades[], int numGrades) {
    for (int i = 0; i < numGrades; i++) {
        cout << "Data for student " << i+1 << ":" << endl;
        cout << "Name: " << grades[i].name << endl;
        cout << "Quiz 1 grade: " << grades[i].quiz1 << endl;
        cout << "Quiz 2 grade: " << grades[i].quiz2 << endl;
        cout << endl;
    }
}

