#include <iostream>
#include <string>

using namespace std;

struct Student {
    string name;
    double* quizGrades;
    double finalGrade;
};

void addStudent(Student* students, int index) {
    cout << "Enter data for student " << index + 1 << ":" << endl;
    cout << "Name: ";
    cin >> students[index].name;
    students[index].quizGrades = new double[10];
    for (int i = 0; i < 10; i++) {
        cout << "Quiz " << i+1 << " grade: ";
        cin >> students[index].quizGrades[i];
    }
    cout << "Final grade: ";
    cin >> students[index].finalGrade;
    cout << endl;
}

void printStudents(Student* students, int numStudents) {
    for (int i = 0; i < numStudents; i++) {
        cout << "Data for student " << i+1 << ":" << endl;
        cout << "Name: " << students[i].name << endl;
        cout << "Quiz grades: ";
        for (int j = 0; j < 10; j++) {
            cout << students[i].quizGrades[j] << " ";
        }
        cout << endl;
        cout << "Final grade: " << students[i].finalGrade << endl;
        cout << endl;
    }
}

int main() {
    int numStudents;
    cout << "How many students do you want to enter data for? ";
    cin >> numStudents;
    Student* students = new Student[numStudents];
    for (int i = 0; i < numStudents; i++) {
        addStudent(students, i);
    }
    printStudents(students, numStudents);
    for (int i = 0; i < numStudents; i++) {
        delete[] students[i].quizGrades;
    }
    delete[] students;
    return 0;
}

