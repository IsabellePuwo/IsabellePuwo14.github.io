/*
Isabelle N Puwo 
1326733
*/

#include <iostream>
using namespace std;


double* newarr(int &size){
    cout <<"Please enter size: ";
    cin>> size;
    double *arr = new double[size];
    cout<< "Please enter " << size << " doubles" << endl;
    for(int i = 0; i < size; i++){
        cin>> arr[i];
    }
    return arr;
}

void displayInput(double* arr, int size){
    cout<< "The doubles are:  ";
    for(int i = 0; i < size; i++){
        cout<< arr[i] << " ";
    }
    cout<< endl;
}

int main(){
    
    int size;
    double *arr = newarr(size);
    displayInput(arr, size);

    delete[] arr;
    return 0;
}