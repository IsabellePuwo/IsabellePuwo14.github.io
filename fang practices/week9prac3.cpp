
#include <iostream>
#include <cmath>
using namespace std;

struct Circle
{
    double radius, perimeter, area;
};

int main(){

    Circle mycircle;
    double pi = 3.14;
    cout<< "Enter raduis value: ";
    cin>> mycircle.radius;
    mycircle.area = pi * pow(mycircle.radius, 2.0);
    cout <<"Area: " << mycircle.area; 
    mycircle.perimeter = 2 * pi * mycircle.radius;
    cout<<"Perimeter: "<<  mycircle.perimeter; 
  return 0;
}