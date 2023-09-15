// a function that takes an array of intergers and sorts them. 
#include <iostream> 
using namespace std;
 
void swap(int numbers[], int i, int j) {
    int temp = numbers[i];
    numbers[i] = numbers[j];
    numbers[j] = temp;
}

void sort(int numbers[], int size) {
    for(int pass = 0; pass < size; pass++){
        for(int i = 1; i < size; i++)
          if(numbers[i] < numbers[i - 1])
            swap(numbers, i , i - 1);
}
}
   


int main(){
    int numbers[] = {12, 90, 28, 1, 33}; 
    int size; 
    
    
    sort(numbers, size);
  
    
    return 0;
}