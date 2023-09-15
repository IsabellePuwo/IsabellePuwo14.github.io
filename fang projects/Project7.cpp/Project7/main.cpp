// Isabelle N Puwo
//  1326733
// Project7
//  main.cpp
//
//  Created by Isabelle Puwo on 5/3/23.
//

#include <iostream>
#include "Ranker.h"
#include<string>

using namespace std;

int main() {
    Ranker ranker;
    string name, restaurant;
    double  rating;
    int size;

    while (true) {
        cout << "Enter name (or 'quit' to exit): ";
        getline(cin, name);
        cin.ignore();
        if (name == "quit") {
            break;
        }
        cout<<"Hey there! how many restuarants would you like to review.";
        cin>> size;
        while(size < 1){
        cout<< "Please input a positive number: ";
        cin>> size;
        }
        cin.ignore();
        for(int i = 0; i< size; i++){
            cout << "Enter restaurant: ";
            getline(cin, restaurant);
        for(int j = 0; j < restaurant.length(); j++) {
            restaurant[j] = toupper(restaurant[j]);
                }
            cout << "Enter rating: ";
            cin >> rating;
            cin.ignore();
            ranker.addReview(name, restaurant, rating);
        }
    }
      
    
    

    ranker.RecommendationsGenerator();
    
    cout<< "Thank you for using our restaurant recomendation system! " << endl;
    return 0;
}

