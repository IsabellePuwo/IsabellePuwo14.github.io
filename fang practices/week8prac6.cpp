/*
Isabelle N. Puwo 
1326733
03/31/23
*/

#include <iostream>
#include <string> 
using namespace std;


int reverse(int num) {
    int rev = 0;
    bool is_negative = false;
     if (num < 0) {
        is_negative = true;
        num = 0;
    }
    while (num != 0) {
        int digit = num % 10;
        rev = rev * 10 + digit;
        num /= 10;
    }
    if (is_negative) {
        rev = -rev;
    }
    
    return rev;
}

int main() {
    int num;
    cout << "Enter an integer: ";
    cin >> num;
    int rev = reverse(num);
    cout << "The reverse of " << num << " is " << rev << endl;
    
    return 0;
}

