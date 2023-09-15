/*
Isabelle N. Puwo 
03/30/23
1326733
Exercise 4: Q2
*/

#include<iostream> 
#include<string> 
using namespace std;


int countSubstringOccurances(const string &str, const string &substr){
    int count = 0;
    size_t pos = 0;
    while((pos = str.find(substr, pos))!= string::npos){
        count++;
        pos += substr.length();
    }
    return count;
}

int main(){
    string str1, str2;
    cout<< "Enter the first string: ";
    getline(cin, str1);
    cout<< "Enter the second string: ";
    getline(cin, str2);

    int count = countSubstringOccurances(str1, str2);
    cout<< "The second string appears " << count << " times in the first string. "<< endl;
    return 0;
}


// cstring we use strlen 
// and lenth and size for string 
// str.find(); str.erase()