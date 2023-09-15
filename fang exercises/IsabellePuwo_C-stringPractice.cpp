/*
Isabelle N. Puwo 
03/29/23
1326733
Exercise 4: Q1
*/

#include<iostream> 
#include<cstring> 
using namespace std;


void swapCase(char arr[]){
    for(int i = 0; arr[i]!= '\0'; i++){
        if(isupper(arr[i])){
            arr[i] = tolower(arr[i]);
        }else if (islower(arr[i])){
            arr[i] = toupper(arr[i]);
        }
    }
}


void compareAndDisplay(char arr1[], char arr2[]){
    int result = strcmp(arr1, arr2);
    if(result < 0){
        cout<< arr1 << "is smaller than " << arr2 << endl;
    } else if (result > 0){
        cout<< arr1 << "is greater than " << arr2 << endl;
    } else{
        cout << arr1 << "and " << arr2 << "are equal" << endl;
    }
}


int main(){
char str1[100] , str2[100];
cout<< "Enter first string: ";
cin.getline(str1, 100);
cout<< "Enter the second string: ";
cin.getline(str2, 100);

swapCase(str1);
swapCase(str2);

cout<< "Swapped case string: " << endl;
cout<< "String 1: " << str1 << endl;
cout<< "String 2: " << str2 << endl;

compareAndDisplay(str1, str2);
}

//get familiar with #include <cctype> only works for single characters 