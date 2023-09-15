/*
Isabelle N Puwo 
1326733
code practise 2
03/08/23
*/
#include <iostream>
using namespace std;



int main(){
    const int size = 8;
    int arr[size] = {5, 10,15, 20, 25, 30, 35, 40};
    int *ptr = nullptr;
    ptr = &arr[size-1];
    cout<< "The elements stored in this array:\n";
    cout<< "{";
    for(int i = 0; i < size; i++){
        cout<< arr[i] << " ";
    }
    cout<<"}\n";
    cout<< endl;
    cout<< "the reversed array" <<endl;
    cout<< "{";
   while(ptr >= &arr[0]){
        cout<< *ptr << " ";  
        ptr--; 
    }
    cout<<"}\n";
    return 0;
}

