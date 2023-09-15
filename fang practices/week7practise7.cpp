#include<iostream>
#include <cstdlib> 
#include <ctime> 
using namespace std;

int *generateRandomNumber(int num){
    int *arr = new int[num];
   srand(time(NULL));
   for(int i = 0; i < num; i++) {
         arr[i] = rand() % 100;
}
   return arr;
}

void displayInput(int* arr, int size){
    cout<< "The values are:  ";
    for(int i = 0; i < size; i++){
        cout<< arr[i] << " ";
    }
    cout<< endl;
}

int *reverseCopy(int* arr, int size){
    int *iptr = new int[size];
    for(int i = 0; i < size; i++){
        iptr[i] = arr[size-1-i];
    }
return iptr;
}

int main(){
    int num=0;
    int* arr;
    cout<< "Generator random numbers" << endl;
    cout<<"Please input the number of random numbers you want to generate:\n";
    do{
        cout<< "please input a positive number: " << endl;
        cin>> num;
    } while(num <= 0);
    int *iptr;
    iptr = generateRandomNumber(num);
    displayInput(iptr, num);
    arr = reverseCopy(iptr, num);
    displayInput(arr,num);

   
}