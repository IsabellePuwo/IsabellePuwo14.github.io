/*
Isabelle N. Puwo 
1326733
03/01/23
*/

#include <iostream>
#include <string>

using namespace std;

void swap(string& a, string& b) {
    string temp = a;
    a = b;
    b = temp;
}

void bubbleSort(string arr[], int n) {
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                swap(arr[j], arr[j+1]);
            }
        }
    }
}

int main() {
    string names[5] = {"Oliver Hall", "Emma Chen", "Lisa Lu", "Peter Williams", "Jasmine Lee"};
    int n = sizeof(names)/sizeof(names[0]);

    cout << "Before sorting:" << endl;;
    for (int i = 0; i < n; i++) {
        cout << names[i] << endl;
    }

    bubbleSort(names, n);

    cout << "After sorting:" << endl;
    for (int i = 0; i < n; i++) {
        cout << names[i] << endl;
    }


    return 0;
}
