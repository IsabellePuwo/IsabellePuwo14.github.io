#include <iostream> 
using namespace std;

void binarySearch(int arr[], int size, int target){
    int steps = 0; 
    int middle;
    int first = 0; 
    int last= size - 1; 
    int position = -1;
    bool found = false;
    while(!found && first <= last)
    {
       middle = (first + last)/ 2;
       steps++;
       if (arr[middle] == target) {
           found = true;
           position = middle;
           break;
       }
       else if (arr[middle] > target){
         last = middle - 1; 
       }
       else if (arr[middle] < target){
           first = middle + 1;
       }
       position += 1;
    }
    if(!found){
        cout<< "This number is not found in array: ";
    }
    else {
       cout<< "The target found: "<< target << "\nthe position is: "<< position << endl;
       cout<< "It took "<< steps << " steps to find position " << position <<endl;
    }
 }

int main() {
    const int size = 9;
    int arr[size] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int target = 7;
    binarySearch(arr, size, target);
}

   

   
   
   
   
   
   
   
   
   
   
   /*for(int i = 0; i < size; i++)
   {
        middle = (first_index + last_index)/2;
       steps++; 
       if(arr[middle] == target){
        cout<< target;
       }
    
     else if (arr[middle] > target){
           position = middle - 1;
     }

     else if (arr[middle] < target){
         position = middle + 1;
     }

   }
}*/

// spets, positions 