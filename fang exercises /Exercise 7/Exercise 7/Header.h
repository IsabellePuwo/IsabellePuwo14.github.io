 //  Isabelle N Puwo
//  1326733
//  Exercise 7
//  Header.h
//  Created by Isabelle Puwo on 4/28/23.
//

#ifndef Header_h
#define Header_h

#include <stdio.h>
#include<iostream>
#include<vector>
#include<string>
using namespace std;


class Instructor{
private:
    string name;
    int  numCredits = 0;
    int numStudents = 0;
    bool overloaded = false;
    struct Course{
        string year;
        string semester;
        int numStudents=0;
        int numCredits=0;
        string classCode; 
    };
    vector<Course> c;
public:
    
    void InputInformation(int, int, string);
    void addCourse(string, string, int);
    bool checkOverloaded();
    void checkSemester(string , string);
    void printInformation();        
};

#endif /* Header_h */
