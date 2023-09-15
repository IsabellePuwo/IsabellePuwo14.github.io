#include <iostream>
using namespace std;



int main(){
    int arr[] = {3,9, 7, 0};
    int *ptr = nullptr;
    ptr = arr;
    for(int i = 0; i < 4; i++){
        cout<< arr[i] << " ";
    }
    for(int i = 0; i < 4; i++){
        cout<< ptr[i]<< " ";
    }
    for(int i = 0; i < 4; i++){
        cout<< *(arr +i) <<" ";
    }
    cout<< endl;
    for(int i = 0; i < 4; i++){
        cout<< *(ptr +i) << " ";
    }
    cout<< endl;
    return 0;

}

//*ptr for value 
// ptr for address.
//int *ptr = nullptr; // nullptr is for null address value which is 0.


