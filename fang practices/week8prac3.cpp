/*
Isabelle N. Puwo 
03/28/23
1326733
*/

#include <iostream>
#include <cstring> 
using namespace std;


//cstring always needs to be constant int cuz it has a fixed size 

/*`
strcpy(): Copies the contents of one C-string to another. 
This function can be used to initialize a C-string,
copy a substring to another buffer, or create a copy of a string.
strcat(): Concatenates (joins) two C-strings together. 
This function can be used to join two strings together to create a new string.
strlen(): Calculates the length of a C-string. 
*/
const int size = 100;


void info(char* name, char* name1, char* major){

    cout<< "Enter your first name: ";
    cin.getline(name, size);
    cout<< "Enter your last name: "; 
    cin.getline(name1, size);
    cout<< "Please enter your major: "; 
    cin.getline(major, size);
    cout<< name << " , " << name1 << " , " << major << ". " << endl;
}
int main(){ 

 char name[size], name1[size] , major[size];
 info(name, name1, major);

}