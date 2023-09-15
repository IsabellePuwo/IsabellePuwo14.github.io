#include <iostream>
using namespace std;

char* findBigger(char* str1, char* str2) {
    if (*str1 > *str2) {
        return str1;
    } else {
        return str2;
    }
}

int main() {
    char str1[] = "hi";
    char str2[] = "friend";
    char* biggerStr = findBigger(str1, str2);
    cout << "The bigger string is: " << biggerStr << endl;
    return 0;
}
