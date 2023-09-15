#include <iostream>
using namespace std;

struct Student 
{
    int studentID;
    string name;
    short yearAttendSchool;
    double gpa;
};

int main(){
   Student mystudent;

    cout<< "Please enter student ID: ";
    cin>> mystudent.studentID;
    cout<< "Please enter your name: ";
    cin.ignore();
    getline(cin, mystudent.name);
    cout<< "Please enter the year you attending school: ";
    cin>> mystudent.yearAttendSchool;
    cout<< "Please enter your GPA: ";
    cin>> mystudent.gpa;
    return 0;

}