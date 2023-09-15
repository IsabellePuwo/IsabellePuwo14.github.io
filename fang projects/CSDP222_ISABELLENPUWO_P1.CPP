/*
Isabelle N. Puwo 
132733
Project 2
*/
#include <iostream> 
using namespace std;

const int MAX_SIZE = 100;

//function to get input of arrays of doubles from the user
void getInput(double arr[], int size){
    for (int i = 0; i < size; i++){
        cout<< "Enter element "<< i + 1 << " : ";
        cin>> arr[i];
    }
}

//Function to calculate the sum of an array of doubles
double sumArray(double arr[], int size){
    double sum = 0.0;
    for(int i = 0; i < size; i++){
        sum += arr[i];
    }
    return sum; 
}


//Function to check if two arrays are equal 
bool arrayEqual(double arr1[], double arr2[], int size){
    for (int i = 0; i < size; i++){
        if(arr1[i] != arr2[i]){
            return false;
        }
    }
    return true; 
}

int main(){

    //Declare variables 
    double arr1[MAX_SIZE], arr2[MAX_SIZE];
    int size; 
    //Get array size from user 
    cout<<" Enter array size: ";
    cin>> size; 
    //Read first array from user
    cout<<"Enter values for first array:\n";
    getInput(arr1, size);
    // Get array size from user
    cout<<" Enter array size: ";
    cin>> size; 
    //Read second array from user 
    cout<<"Enter values for second array:\n";
    getInput(arr2, size);
    //calculate sum of arrays 
    double sum1 = sumArray(arr1, size);
    double sum2 = sumArray(arr2, size);
    //To check if arrays are equal and print result 
    if(sum1 == sum2){
        if (arrayEqual(arr1, arr2, size)){
            cout<<"You inputted different double arrays!!\n";
        }
        cout<< "The first array is: " ;
        cout << "{";
        for(int i = 0; i < size; i++){
            cout<<" "  << arr1[i] <<" ";
        }
        cout << "}\n";

        cout<< "The second array is: ";
        cout << "{";
        for(int i = 0; i < size; i++){
            cout<< " "<<arr2[i]<<" ";    
        }
        cout << "}\n";
         cout<<endl;
    } else{
        cout<<"Arrays have different sums. Exiting program.\n";
        exit(0);
    }
     return 0;
}