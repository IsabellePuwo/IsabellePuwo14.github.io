/*
Isabelle N Puwo 
1326733
Exercise: Q2
*/


#include <iostream>
#include <string>
using namespace std;

const int NUM_STUDENTS = 10;

struct Student {
    char name[30];
    double FinalGrade;
    bool getHonor;
};

bool isQualified( Student student, double avgGrade){
    if(student.FinalGrade >= avgGrade){
        student.getHonor = true;
        return true; 
    }
    return false;

}

int main(){
    Student students[NUM_STUDENTS];
    double totalGrade = 0.0;
    for(int i = 0; i < NUM_STUDENTS; i++){
        cout<< "Enter name for student " << i+1 << " in the Testlab course: ";
        cin.getline(students[i].name, 31);
        do {
            cout<< "Enter final grade for student " << i+ 1 << " in the Testlab course:";
            cin>> students[i].FinalGrade;
         }
         while(students[i].FinalGrade < 0 || students[i].FinalGrade > 100);
            totalGrade += students[i].FinalGrade;
            cin.ignore();
    }
         double avgGrade = totalGrade / NUM_STUDENTS;
         int numHonorStudents;
          for(int i = 0; i < NUM_STUDENTS; i++){
            if(isQualified(students[i], avgGrade)){
                numHonorStudents++;
            }
         } 
         cout<< "Number of students who got an honor certification: " << numHonorStudents << endl;
         return 0; 
}