#include <iostream>
#include <string>
using namespace std;

//memory layout of structure array 
// assign a value to character array use strcpy()
// cannot use assigmnent operator for array 
//eg strcpy(test1, "beautiful day")
// to return a struct function line 18-29 for referal 

struct Student
{
    string name[5];
    int quizGrades[2];
    int finalGrade;
};

  Student getstudentData(){
   Student student;
    cout << "Enter student name < ";
    for(int i = 0; i < 5; i++){
     cout << "Enter student name " << i+1 << ":"; 
      getline(cin,student.name[i]);
      do{
        cout << "Enter 2 quiz grades: ";
        for (int i = 0; i < 2; i++) {
        cin >> student.quizGrades[i];
    }
      } do{
        cout << "Enter final grade: ";
        cin >> student.finalGrade;
      }
    }
    return student;
}

void displayStudentData(Student student) {
    cout << "Student Name: " << endl;
     for(int i = 0; i < 5; i++){
        cout<< student.name[i] << " " << endl;
     }
    cout << "Quiz Grades: " << endl;
    for (int i = 0; i < 2; i++) {
        cout << student.quizGrades[i] << " ";
    }
    cout << endl;
    cout << "Final Grade: " << student.finalGrade << endl;
}

int main() {
   Student student1;
   student1 = getstudentData();
   displayStudentData(student1);
    return 0;

}


// second code practise use dynamically memory allocation 
//  structure functiom 
// structure array 