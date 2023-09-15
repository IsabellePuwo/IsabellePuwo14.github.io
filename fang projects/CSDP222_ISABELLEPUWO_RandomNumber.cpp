/*
Isabelle N Puwo
1326733
project 3
*/


#include <iostream>
#include <cstdlib> // for rand() and srand()
#include <ctime> // for time()

using namespace std;

// Function to generate 25 random numbers between 1000 and 9999 
// and store them in a 5x5 array
void generateRandomNumbers(int arr[][5]){
    srand(time(0)); // to seed the random number generator with current time
    for(int i = 0; i < 5; i++){
        for (int j = 0; j < 5; j++){
            arr[i][j] = rand() % 9000 + 1000; // generates a random number between 1000 and 9999
        }
    }
}

// function to calculate the average of all numbers in the array 
double calculateAverage(int arr[][5]){
    int sum = 0;
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            sum += arr[i][j];
        }
    }
    return  sum / 25;
}

// function to identify min, max, and median numbers that are greater than the average
void identifyNumbers(int arr[][5], double avg, int& min, int& max, int& median){
    int count = 0;
    //Array to store numbers greater than average 
    int greaterThanAvg[25];
     for(int i = 0; i < 5; i++){
         for(int j = 0; j < 5; j++){
             if(arr[i][j] > avg){
                 greaterThanAvg[count] = arr[i][j];
                  count++;
             }
         }
     }

    // finds the min, max, and median numbers in the greaterThanAvg array 
    min = greaterThanAvg[0];
    max = greaterThanAvg[0];
    median = greaterThanAvg[count/2];
    for(int i = 1; i < count; i++){
        if(greaterThanAvg[i] < min){
            min = greaterThanAvg[i];
        }
        if(greaterThanAvg[i] > max){
            max = greaterThanAvg[i];
        }
    }
}

int main(){
    int arr[5][5];
    generateRandomNumbers(arr);
    double avg = calculateAverage(arr);
    int min, max, median;
    identifyNumbers(arr, avg, min, max, median);
    // display results 
    cout<< "The generated array of random numbers is:" << endl;
    for(int i =0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            cout<< arr[i][j] <<" ";
        }
        cout<< endl;
    }
    cout<< "The average of all numbers in the array is: " << avg << endl;
    cout<< "The minimum number greater than the average is: " << min << endl;
    cout<< "The maximum number greater than the average is: "<< max << endl;
    cout<< "The median number greater than the average is: " << median << endl;
    return 0;
}