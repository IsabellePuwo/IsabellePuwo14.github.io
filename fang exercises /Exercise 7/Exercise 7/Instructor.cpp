//  Isabelle N Puwo
//  1326733
//  Instructor.cpp
//  Created by Isabelle Puwo on 5/27/23.
//
#include "Header.h"
using namespace std;


void Instructor::InputInformation(int numCredits, int numStudents, string name){
        this->numCredits += numCredits;
        this->numStudents += numStudents;
        this->name  += name;
        if(this->numCredits > 9 || this-> numStudents > 40){
            overloaded = true;
        }else{
            overloaded = false;
        }
    }

bool Instructor:: checkOverloaded(){
    if(this->numCredits > 9 || this-> numStudents > 40){
        overloaded= true;
    }else{
        overloaded=false;
    }
    return overloaded;
}


void Instructor::addCourse(string year, string semester, int numStudents) {
        Course newCourse;
        newCourse.year = year;
        newCourse.semester = semester;
        newCourse.numStudents = numStudents;
        newCourse.numCredits+=numStudents*3;
        c.push_back(newCourse);
        this->numStudents += numStudents;
        this->numCredits += numStudents * 3;
        cout << "Course added successfully!" << endl;
    }

void Instructor::checkSemester(string year, string semester) {
    bool courseFound  = false;
    for (int i = 0; i < c.size(); i++) {
        if (c[i].year == year && c[i].semester == semester) {
            courseFound = true;
        }
    }
    
    
    if(courseFound){
        cout << "You offered this class in " << year << " " << semester << endl;
    }else {
        cout << "You are not teaching a course in " << year << " " << semester << endl;
    }
}


void Instructor :: printInformation() {
        cout << "Instructor " << name << " has " << numCredits << " credits and " << numStudents << " students." << endl;
        if (overloaded) {
            cout << "The instructor is overloaded." << endl;
        } else {
            cout << "The instructor is not overloaded." << endl;
        }
    }





