/*
Isabelle N Puwo 
1326733
*/
#include <iostream> 
using namespace std;


void getInput(double* arr, int size){
    cout<< "Please enter " << size << " doubles" << endl;
    for(int i = 0; i < size; i++){
        cin>> arr[i];
    }
}

void displayInput(double* arr, int size){
    cout<< "The values are:  ";
    for(int i = 0; i < size; i++){
        cout<< arr[i] << " ";
    }
    cout<< endl;
}
int main(){
int size;
cout<<"Enter size of array: ";
cin>> size;


double *arr = new double[size];
getInput(arr, size);
displayInput(arr, size);

delete[] arr;
return 0;
}