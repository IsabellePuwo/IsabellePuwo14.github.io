/*
Isabelle N. Puwo 
1326733
02/07/2023
*/
#include<iostream>
using namespace std;

void calPerimeter(double, double);


int main() {
  double length, width, perimeter;
    cout<< "Enter the length of the rectangle: ";
    cin>> length;
    cout<< "Enter the width of the rectangle: ";
    cin>> width;
    return 0;
}
void calPerimeter(double a, double b) {
    double length, width , perimeter;
   perimeter = (length + width) * 2;
    cout<< "The perimter of the rectangle is " << perimeter << endl; 
}