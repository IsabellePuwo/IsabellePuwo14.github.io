#include <iostream>
using namespace std;

//funcion takes a 2d array and its dimensions as arguments
void getInput(int** arr, int& rows, int& cols){
    cout<< "Enter the number of rows: ";
    cin>> rows;
    cout<< "Enter the number of columns:";
    cin>> cols;
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            cout<< "Enter element [" << i << "][" << j << "]:";
            cin>> *(*(arr + i)+ j);
        }
    }
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

double calculateAverage(int** arr, int size){
    double sum = 0;
    int rows, cols;
    for(int i = 0; i < size; i++){
        for(int j = 0; j < size; j++){
            cin>> arr[i][j];
        }
    }
    return sum / (rows * cols);
}

void findNum( int** arr, int &max, int &min){
    int rows, cols;
 int* min_ptr = &arr[0][0];
    int* max_ptr = &arr[0][0];
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (*min_ptr > arr[i][j]) {
                min_ptr = &arr[i][j];
            }
            if (*max_ptr < arr[i][j]) {
                max_ptr = &arr[i][j];
            }
        }
    }
}
   int findMedian(int** arr, int rows, int cols){
    int SIZE = rows * cols;
    int* sarr = new int[SIZE];
    int count = 0;
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            sarr[count] = arr[i][j];
        }
    }
    for(int i = 0; i < SIZE - 1; i++){
        int midd_idx = i;
        for(int j =  i + 1; j < SIZE; j++){
            if(sarr[j] < sarr[midd_idx]){
                midd_idx = j;
            }
        }
        swap(sarr[i], sarr[midd_idx]);
    }
    int medianIndex = SIZE / 2;
    int median = sarr[medianIndex];
    return median;
}



int main() {
    int rows, cols, size;
    int** arr = new int*[rows];
    for (int i = 0; i < rows; i++) {
        arr[i] = new int[cols];
    }
    getInput(arr, rows, cols);
    double avg = calculateAverage(arr, size);
    cout<< "The average is: " << avg << endl;
    int min, max;
    int* min_ptr = &min;
    int* max_ptr = &max;
    findNum(arr, rows, cols);
    cout<< "The maximum value is: " << max << endl;
    cout<< "The minimum value is: " << min << endl;
    double  median = findMedian(arr, rows, cols);
    cout<< "The median value is: " << median << endl;
    
    return 0;
}

