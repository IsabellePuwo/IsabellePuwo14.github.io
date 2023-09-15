/*
Isabelle N. Puwo 
03/27/23
1326733
*/

#include <iostream>
#include <cstring>

using namespace std;


/*
to convert from lower to upper use toupper 
to convert from upper to lower use tolower 
*/
void checkCase(char ch) {
    if (islower(ch)) {
        cout << "The character is lowercase. Converting to uppercase: " << (char)toupper(ch) << endl;
    } else if (isupper(ch)) {
        cout << "The character is uppercase. Converting to lowercase: " << (char)tolower(ch) << endl;
    } else {
        cout << "The character is not a letter. Printing it out directly: " << ch << endl;
    }
}

int main() {
    char ch;
    cout << "Enter any character: \n";
    cin.get(ch);
    cout<< "You entered: " << ch << endl;
    checkCase(ch);
    
    return 0;
}

  