/*
Isabelle N. Puwo 
132733
02/22/23
*/
#include <iostream> 
using namespace std;

void linearSearch2(int num[], int target2, int& position,  int& steps, bool& found){
    for(int i = 0; i < 20; i++){
        steps++;
        if(num[i]== target2){
            found = true;
            position += 1;
            cout<< "The target found: "<< target2 << "the position is: "<< position << endl;
            cout<< "It took "<<steps << "to find position " << position <<endl;
            break;
        }
        position += 1;
    }
    if(!found){
             cout<< "This element is not found in array: ";
    }
}

int main(){

    int num[20]= {87, 66, 30, 89, 22, 45, 78, 23, 66,
                78, 92, 56, 33, 97, 405, 0, 43, 82, 92, 10};
    
    
  int target2 = 10; 
  int target1 = 45;
  int steps = 0;
  int position = -1;
  bool found = false;  

  linearSearch2(num, target2, position, steps, found);
   steps = 0;
   position = -1;
   found = false;  

  linearSearch2(num, target1, position, steps, found);
    
}


/*
Linear Search is defined as a sequential search algorithm that starts
 at one end and goes through each element of a list until the desired element is found, otherwise 
 the search continues till the end of the data set.
 It is the easiest searching algorithm


pseudocode for linear search
found = false;
position = -1;
index = 0;


*/