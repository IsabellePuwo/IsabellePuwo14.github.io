/*
02/15/2023
Isabelle N. Puwo
1326733
*/
#include <iostream> 
using namespace std; 

double studentsgrade();

int main(){
    double grade[100];
    int size; 
    cout<< "Enter the number of students in the class please: "<< endl;
    cin>> size; 
    for (int i = 0; i < size; i++){
        grade[i] = studentsgrade();
    }
}

double studentsgrade() {
    double grade; 
    cout<< "Enter your grade: "<< endl;
    cin >> grade;
    return grade;
}