//  Isabelle N Puwo
//  1326733
//  Exercise 7
//  main.cpp
//  Created by Isabelle Puwo on 4/28/23.
//

#include <iostream>
#include "Header.h"
using namespace std;


int main(){
    int size;
    int credit;
    int numofstudent;
    string year, semester, courseName, name, classCode;
    
    cout<<"How many instructors are in this department ";
    cin>> size;

    while(size < 1){
        cout<< "Please input a positive number: ";
        cin>> size;
    }
    cin.ignore();
    Instructor *ptr = new Instructor[size];
    for (int i = 0; i < size; i++)
    {
        cout<< "Please enter  name: "<<endl;
        getline(cin, name);
        credit = 0;
        numofstudent = 0;
        ptr[i].InputInformation(credit, numofstudent, name);
    }
    for(int p = 0; p < size; p++){
        cout<< "Please enter year: "<< endl;
        getline(cin, year);
        cout<< "Please enter the semester: "<< endl;
        getline(cin, semester);
        cout<<"Please enter the number of students you want to add a course to: "<< endl;
        cin>> numofstudent;
        cin.ignore();
        cout<<"Please enter name of course: " << endl;
        cin>> courseName;
        cin.ignore();
        cout<<"Please enter class code: "<< endl;
        getline(cin, classCode);
        ptr[p].addCourse(year, semester, numofstudent);
        
    }
    for(int z = 0; z < size; z++){
        cout<< "Please enter year: "<< endl;
        getline(cin, year);
        cout<< "Please enter the semester: "<< endl;
        getline(cin, semester);
        ptr[z].checkSemester(year, semester);
        ptr[z].checkOverloaded();
        ptr[z].printInformation();
    }
    
    delete[] ptr;
    return 0;
}


