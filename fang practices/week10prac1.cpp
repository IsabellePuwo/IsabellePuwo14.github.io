/*
Isabelle N Puwo 
1326733
*/

#include <iostream>
#include <string>

using namespace std;

// nested structure 
struct Assignment {
    string name;
    string deadline;
    int grade;
};


struct Student {
    string name;
    int id;
    Assignment assignments[5];
};


void getAssignmentInfo(Assignment& assignment) {
    cout << "Enter assignment name: ";
    getline(cin, assignment.name);
    cout << "Enter assignment deadline: ";
    getline(cin, assignment.deadline);
    cout << "Enter assignment grade: ";
    cin >> assignment.grade;
    cin.ignore(); 
}


void getStudentInfo(Student& student) {
    cout << "Enter student name: ";
    getline(cin, student.name);
    cout << "Enter student ID: ";
    cin >> student.id;
    cin.ignore(); 
    for (int i = 0; i < 5; i++) {
        cout << "Enter information for assignment " << i + 1 << ":\n";
        getAssignmentInfo(student.assignments[i]);
    }
}

void displayAssignmentInfo(Assignment& assignment) {
    cout << "Assignment name: " << assignment.name << "\n";
    cout << "Assignment deadline: " << assignment.deadline << "\n";
    cout << "Assignment grade: " << assignment.grade << "\n";
}


void displayStudentInfo(Student& student) {
    cout << "Student name: " << student.name << "\n";
    cout << "Student ID: " << student.id << "\n";
    for (int i = 0; i < 5; i++) {
        cout << "Information for assignment " << i + 1 << ":\n";
        displayAssignmentInfo(student.assignments[i]);
    }
}


int main() {
    
    Student students[10];
    
    for (int i = 0; i < 10; i++) {
        cout << "Enter information for student " << i + 1 << ":\n";
        getStudentInfo(students[i]);
    }
    for (int i = 0; i < 10; i++) {
        cout << "Information for student " << i + 1 << ":\n";
        displayStudentInfo(students[i]);
    }
    return 0;
}
