/*
Isabelle N puwo
1326733
*/

#include <iostream>
using namespace std;




//descending order
/*void selectionSort(int arr[], int size){
    int i, j, min;
    for(i = 0; i < size; i++){
        min = i;
        for(j = i + 1; j < size; j++){
            if(arr[min] < arr[j]){
                min = j;
            }
        }
        swap(arr[min], arr[i]);
    }
    for(i = 0; i < size; i++){
        cout<< arr[i]<<" ";
    }
}*/

void findTarget(int [][5], int, int, double);
void binarySearch(int [][5], int, int, double);
double sumArray(int[][5], int, int);
void selectionSort(int [][5], int, int, int);
void getInput(int[][5], int, int);


void selectionSort(int arr[][], int column, int row, int size){
    int index = 0;
    int max, c, r, size;
    int sarr[row * column];
    for(int i = 0; i < column; i++){
        for(int j = 0; j < row; j++){
            sarr[index] = arr[i][j];
            index++;
        }
    }
    //ascending order 
    for(int i = 0; i < size; i++){
        max = i;
       for(int j = i + 1; j < size; j++){
           if(sarr[max] > sarr[j]){
               max = j;
           }
       }
       swap(sarr[max], sarr[i]);
   }
   for(int i = 0; i < column; i++){
     for(int j = 0; j < row; j++){
        arr[c][r] = sarr[index];
        index++;
     }
   }
}

void findTarget(int arr[][5], int row, int column, double target, int size){
    int middle;
    int first, last;
    int row_value = -1;
    if(target <= arr[0][4]&& target>= arr[0][0]){
        row_value = 0;
        binarySearch(arr, row_value, column, target);
    }
    else if(target <= arr[1][4]){
        row_value = 1;
        binarySearch(arr, row_value, column, target);
    }
    else if(target <= arr[2][4]){
        row_value = 2;
        binarySearch(arr, row_value, column, target);
    }
    else if(target <= arr[3][4]){
        row_value = 3;
      binarySearch(arr, row_value, column, target);
    }
    else 
    cout<< "The target "<< target << "is not found in array."; 
}

//input for 2d array 
void getInput(int arr[][5], int row, int column){
    int i, j, size;
      cout<< " 2D Array Input: " << endl;
	  for(int i = 0; i < size; i++){
	  	for(int j = 0;j < size; j++){
	  		cout<<"arr["<<i<<"]["<<j<<"]=  ";
	  		cin>>arr[i][j];
		}
	  } 
	  
	  cout<<"The 2-D Array is: " << endl;
      for(int i = 0;i < size; i++){
	  	for(int j = 0; j < size; j++){
	  		cout<< " "<<arr[i][j];
		}
        cout<< endl;
	  } 
      if(arr[i][j] < 0){
          cout<< "Invalid number, number can't be negative. try again! "<< endl;
      }
}
//sum of all elements in 2d array 
double sumArray(int arr[][5],int column, int row){
    double total = 0;
    double average;
    for(int i = 0; i < row; i++){
        for(int j = 0; j < column; j++){
            total += arr[i][j];
        }
    }
    average = total / (row * column);
    cout<< "The average is: " << average << endl;
    return average;
     //cout<<"The total is: " << total << endl;
     //return total;
}
void binarySearch(int num[][5], int row_value, int column, double target){
    bool found = false;
    int middle, first= 0, last= 4;

    for(int i = 0; i < column - 1; i++){
        middle = (first + last)/2;
    if(num[row_value][middle] == target){
      found = true;
      cout<<"The target index is: (" <<row_value << ")" << "(" << middle << ")" << endl;
      break;
    }
    else if(num[row_value][middle > target])
       last = middle - 1; 
    else 
    first = middle + 1;
    }
   if(!found){
       cout<< "The average is not found in array" <<endl;
   }   
}





int main(){
    const int row = 4, column = 5;
    int i, j;
    int arr[i][j];
    getInput(arr, row, column);      
    selectionSort(arr,row, column);              
    double avg = sumArray(arr, column, row);
    findTarget(arr, row, column, average);                                                                     

   
}

//how to do selection sort for the 2d array?

//sum of all elements in 2d array 
/*double sumArray(int arr[], int size, int column, int row){
    double total = 0;
    double average;
    for(int i = 0; i < row; i++){
        for(int j = 0; j < column; j++){
            total += arr[i][j];
        }
    }
    average = total / (row * column);
    cout<< "The average is: " << average << endl;
    return average;
    cout<<"The total is: " << total << endl;
     return total;
}*/

//sum of rows in 2d array 
/*double sumRow(int arr[], int size, int column, int row){
double total = 0; 
for(int i = 0; i < size; i++){
    total = 0;
    for(int j = 0; j < size; j++){
       total += arr[i][j];
    }
    average = total / column;
    cout<< "The average  " << i + 1 << " is " << average << endl;
}
}*/



//calculate the sum of each row & column then use selection sort to find the average/ mean
//input for 2d array 
/*void getInput(int arr[][5], int row, int column, int size){
    int  arr[][5];
      cout<< " 2D Array Input: " << endl;
	  for(int i = 0; i < size; i++){
	  	for(int j = 0;j < size; j++){
	  		cout<<"arr["<<i<<"]["<<j<<"]=  ";
	  		cin>>arr[i][j];
		}
	  } 
	  
	  cout<<"The 2-D Array is: " << endl;
      for(int i = 0;i < size; i++){
	  	for(int j = 0; j < size; j++){
	  		cout<< " "<<arr[i][j];
		}
        cout<< endl;
	  } 
      if(arr[i][j] < 0){
          cout<< "Invalid number, number can't be negative. try again! "<< endl;
          break;
      }
}*/
//ascending order 
/*void selectionSort(int arr[], int size){
    int i, j, max;
   for(i= 0; i < size; i++){
        max = i;
       for(j = i + 1; j < size; j++){
           if(arr[max] > arr[j]){
               max = j;
           }
       }
       swap(arr[max], arr[i]);
   }
   for(i = 0; i< size; i++){
       cout<< arr[i]<< " ";
   }
}*/

/*
void bubbleSort(int arr[], int size){
    int i, j;
    for(i = 0; i < size - 1; i++){
        for(j = i+ 1; i < size; i++){
            if(arr[i]> arr[j])
            swap(arr[i], arr[j]);
        }
    }
}
*/