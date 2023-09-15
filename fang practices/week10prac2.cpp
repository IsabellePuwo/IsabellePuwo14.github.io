#include<iostream> 
#include<string>
using namespace std;


 /*declaring vectors
  vector<data_type>variable_name
 vector<float>fill
 specifying the starting size for a vector 
 vector<data_type>variable_name(size)
 read on vectors will come in quiz monday 
 */

// user "new" operator without using vector use pointers 

struct Student {
    string name;
    int ID;
    float* grades;
    int numGrades;
};

void addStudent(Student* students, int& numStudents){
    cout<< "Enter student name: ";
    cin>> students[numStudents].name;
    cout<< "Enter student ID: ";
    cin>> students[numStudents].ID;
    students[numStudents].numGrades = 0;
    students[numStudents].grades = new float[100];
    numStudents++;
}

void addGrade(Student* student){
    cout<< "Enter grade: ";
    cin>> student->grades[student->numGrades];
    student->numGrades++;
}

float getAverage(float* grades, int numGrades){
    if(numGrades == 0){
        return 0;
    }
    float sum = 0;
    for(int i = 0; i < numGrades; i++){
        sum += grades[i];
    }
    return sum / numGrades;
}

void printStudent(Student* student){
    cout<< "Name: " << student->name << endl;
    cout<< "ID: "<< student->ID << endl;
    cout<< "Grades: ";
    for(int i = 0; i < student->numGrades; i++){
        cout<< student->grades[i] << " ";
    }
    cout<< endl;
    cout<< "Average grade: " << getAverage(student->grades, student->numGrades) << endl;
    cout << endl;
}

void printClass(Student* students, int numStudents){
    float classSum = 0; 
    int classNumGrades = 0;
    for(int i = 0; i < numStudents; i++){
        printStudent(&students[i]);
        classSum += getAverage(students[i].grades, students[i].numGrades);
        classNumGrades += students[i].numGrades;
    }
    cout<< "Class average: " << classSum / classNumGrades << endl;
}

int main(){
    Student students[100];
    int numStudents = 0;
    int choice = 0;
    while(true){
    cout<< "Menu: " << endl;
    cout<< "1. Add student " << endl;
    cout<< "2. Add grade " << endl;
    cout<< "3. Print class " << endl;
    cout<< "4. Quit " << endl;
    cin>> choice;
    if(choice == 1){
        addStudent(students, numStudents);
    }
    else if(choice == 2){
        cout<< "Enter student index: ";
        int index;
        cin>> index;
        addGrade(&students[index]);
    }
    else if(choice == 3){
        printClass(students, numStudents);
    }
    else if(choice == 4){
        break;
    }
    else {
        cout<< "Invalid choice. Please try again. " << endl;
    }
    }
   for(int i = 0; i < numStudents; i++){
    delete[] students[i].grades;
    }  

    return 0;
}
