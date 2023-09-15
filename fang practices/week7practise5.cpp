#include <iostream>
using namespace std;

string *getName(){
string *arr = new string [3];
cout<<"Enter your first name: ";
getline(cin, arr[0]);
cout<< "Enter your middle name: ";
getline(cin, arr[1]);
cout<<"Enter your last name: ";
getline(cin, arr[2]);
return arr;
}


int main(){
    
    cout<< "Name Input System\n";
    string fullName[3];
    string *name = nullptr;
    name = getName();
    for(int i = 0; i < 3; i++)
    cout<<*(name + i) << " ";
    return 0;
    
   

}