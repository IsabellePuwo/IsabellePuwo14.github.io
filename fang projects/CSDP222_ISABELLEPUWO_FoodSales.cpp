/*
Isabelle N. Puwo 
1326733
Project 4
*/

#include <iostream> 
using namespace std;

//Function to dynamically create the march sales 
int ** createMarchArray(int& numItems){
    cout<< "Please enter the number of food items surveyed: ";
    cin>> numItems;
    while (numItems <= 0) {
        cout<< "Invalid input. Please enter a positive integer: ";
    cin >> numItems;
    }
    int** marchArray = new int*[numItems];
    for(int i = 0; i < numItems; i++){
        marchArray[i] = new int[2];
    }
    return marchArray;
}
// function to input the march sales data 
void inputMarchSales(int** marchArray, int numItems){
cout<< "Enter the barcode number and number of each food item sold in March: "<< endl;
for(int i = 0; i < numItems; i++){
    cout<< "Item " << i + 1 << " : ";
    cin>> marchArray[i][0] >> marchArray[i][1];
    while (marchArray[i][1] < 0){
        cout<< "Invalid input. Please enter a non-negative integer:  ";
        cin>> marchArray[i][1];
    }
}
}

//Function to dynamically create the april orders array based on march sales data 
int** createAprilArray(int** marchArray, int numItems){
    int** aprilArray = new int*[numItems];
    for(int i = 0; i < numItems; i++){
        aprilArray[i] = new int[2];
        aprilArray[i][0] = marchArray[i][0];
        if(marchArray[i][1] <= 5){
            aprilArray[i][1] = 0;
        }else {
            aprilArray[i][1] = 10;
        }
    }
    return aprilArray;
}

//Function to display the march sales data and april order form 
void displaySalesData(int** marchArray, int** aprilArray, int numItems){
    cout<< endl << "SALES DATA FOR MARCH: " << endl;
    cout<< "BARCODE\tNUMBER SOLD " << endl;
    for(int i = 0; i < numItems; i++){
        cout<< marchArray[i][0] << "\t";
        cout << aprilArray[i][1] << endl;
    }
}

int main() {
    int numItems;
    int** marchSalesArray = createMarchArray(numItems);
    inputMarchSales(marchSalesArray, numItems);
    int** aprilSalesArray = createAprilArray(marchSalesArray, numItems);
    displaySalesData(marchSalesArray, aprilSalesArray, numItems);
    return 0;
}