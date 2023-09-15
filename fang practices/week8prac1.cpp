/*
Isabelle N. Puwo 
03/27/23
1326733
*/

#include <iostream>
#include <cctype>
using namespace std;

void checkCase (char test){
    cout<< "Enter any character you wanted: \n";
    cin.get(test);
    cout<< "You entered is: " << test << endl;
    if(isalpha(test))
    cout<< "It's a letter. \n";
    else if(isdigit(test))
    cout<< "It's a digital.\n";
    else if(isspace(test))
    cout<< " It's a whitespace.\n";
    else if(ispunct(test))
    cout<< "It's a punctuation.\n";
    else 
    cout<< "It's not the below characters.\n";
}


int main(){
    char test;
    checkCase(test);
    return 0;
}