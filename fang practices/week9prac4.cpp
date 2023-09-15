#include <iostream>
#include <string>
using namespace std;

//using assigmnent 
struct Student
{ 
    char name[50];
    string major;
    double GPA;
};


int main(){

Student student1;
student1.GPA = 4.0;
strcpy(student1.name, "Isabelle Puwo");
student1.major = "Computer Science";


Student student2;
student2.GPA = 3.9;
strcpy(student2.name, "Danny Joe");
student2.major = "Engineering";

}