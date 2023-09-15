/*
02/20/2023
Isabelle N. Puwo
1326733
*/

#include<iostream>
#include<iomanip>
using namespace std;


void printArr (int arr[][3], int columns)
{
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < columns; j++)
        {
            arr[i][j] += 5;
            cout << setw(2) << arr[i][j] << " ";
        }
        cout << endl;
    }
}

int main(){

    const int rows = 3;
    const int columns = 3; 
    
    int arr[rows][columns] = {{1, 2, 3},
                             { 4, 5, 6}, 
                             { 7, 8, 9}};

    printArr(arr, columns);

}
