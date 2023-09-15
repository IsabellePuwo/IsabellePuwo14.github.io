#include <iostream>

using namespace std;

int main() {
    int *arrPtr;
    int size;

    cout << "Enter the size of the array: ";
    cin >> size;
    arrPtr = new int[size];
   
    for (int i = 0; i < size; i++) {
        cout << "Enter value for element " << i << ": ";
        cin >> arrPtr[i];
    }

    cout << "The array contains: ";
    for (int i = 0; i < size; i++) {
        cout << arrPtr[i] << " ";
    }

    delete[] arrPtr;

    return 0;
}
