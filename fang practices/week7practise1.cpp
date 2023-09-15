#include <iostream> 
using namespace std;

int main(){
   int size = 10; 
   int i; 
   int arr[size];
   for(i= 0; i < size + 1; i++){
       arr[i] = i;
       cout<< arr[i] << " ";
   }
   cout << endl;
   int *iptr = new int[size +1];
   delete[] iptr;
 

}