/*
Isabelle N. Puwo 
1326733
03/29/23
*/
#include <iostream> 
using namespace std;



int countAbc (char* arr){
  int count = 0; 
  char* p = arr;
  while ((p = strstr(p, "abc")) != nullptr){
      ++count;
      p++;
  }
  return count; 
}




int main(){

int arr = 100;
char* result = new char[arr];

cout<< " Enter a string: ";
cin.getline(result, arr);
int count = countAbc(result);
cout<< "The number of times 'abc' appears in the string is: " << count << endl;
delete [] result; 
return 0; 

}