/*
02/15/2023
Isabelle N. Puwo
1326733
Practice 2
*/
#include <iostream>
using namespace std;

void getTriangleSides(double &side1, double &side2, double &side3);
bool triangleIsEquilateral(double side1, double side2, double side3);

int main(){
    double side1, side2, side3;;
    getTriangleSides(side1, side2, side3);
    bool equilateral = triangleIsEquilateral (side1, side2, side3);
    if (equilateral)
       cout<< "The triangle is equilateral. "<<endl;
       else 
       cout<< "The triangle is not equilateral. "<<endl;
       return 0;
}

void getTriangleSides(double &side1, double &side2, double &side3){
     cout<< "Enter three sides: ";
    cin>> side1 >> side2 >> side3;
}

bool triangleIsEquilateral(double side1, double side2, double side3) {
if(side1 == side2 && side2 == side3){
    cout<< "It is an equilateral triangle ! ";
    return true; 
}
else
   cout<< "it is not an equilateral traingle! ";
   return false; 
}