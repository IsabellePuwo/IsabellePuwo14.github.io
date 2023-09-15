/*
Isabelle N Puwo 
1326733
*/
#include <iostream>
using namespace std;

struct Triangle {
  double side1;
  double side2;
  double side3;
};

int main() {
  Triangle myTriangle = {3, 4, 5}; 

  cout << "Side 1: " << myTriangle.side1 << endl;
  cout << "Side 2: " << myTriangle.side2 << endl;
  cout << "Side 3: " << myTriangle.side3 << endl;

  return 0;
}
