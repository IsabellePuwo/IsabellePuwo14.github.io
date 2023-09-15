 // Isabelle N Puwo
//  1326733
//  Project7
//  Ranker.cpp
//  Created by Isabelle Puwo on 5/2/23.
//

#include"Ranker.h"
#include <iostream>
#include <string>
#include <vector>


void Ranker::addReview(string name, string restaurant, int rating) {
    Review newReview;
    newReview.name = name;
    newReview.restaurant = restaurant;
    newReview.rating = rating;

    r.push_back(newReview);
// Count the number of reviews that restaurant has
    int reviewCount = countReviews(restaurant);
    cout<< restaurant << " has " << reviewCount << " review(s) " << endl;
}

void Ranker::RecommendationsGenerator() {
// Identify restaurants that have been reviewed at least three times
    for (int i = 0; i < r.size(); i++) {
        string restaurant = r[i].restaurant;
        int reviewCount = countReviews(restaurant);
        if (reviewCount >= 3 && !isprecommendationL(restaurant)) {
            preRecommendationL.push_back(restaurant);
            preRatings.push_back(0.0);
        }
    }
// Calculate the average rating for each restaurant in the pre-recommendation list
    for (int i = 0; i < preRecommendationL.size(); i++) {
        string restaurant = preRecommendationL[i];
        double totalRating = 0.0;
        int reviewCount = countReviews(restaurant);
        for (size_t j = 0; j < r.size(); j++) {
            if (r[j].restaurant == restaurant) {
                totalRating += r[j].rating;
            }
        }
        double avgRating = totalRating / reviewCount;
        preRatings[i] = avgRating;
        }

// Remove the lowest-rated restaurant from the pre-recommendation list
        while (preRecommendationL.size() > 1) {
        int lowestRatingIndex = 0;
        double lowestRating = preRatings[0];
    for (int i = 1; i < preRatings.size(); i++) {
               if (preRatings[i] < lowestRating) {
                   lowestRating = preRatings[i];
                   lowestRatingIndex = i;
        }
                    }
        preRecommendationL.erase(preRecommendationL.begin() + lowestRatingIndex);
        preRatings.erase(preRatings.begin() + lowestRatingIndex);
        }
    printRecommendations();
    
            }

bool Ranker :: isprecommendationL(const string& restaurant) {
    for (int i = 0; i < preRecommendationL.size(); i++) {
        if (preRecommendationL[i] == restaurant) {
            return true;
        }
    }
    return false;
}

int Ranker::countReviews(const string restaurant) const { 
    int count = 0;
    for (int i = 0; i < r.size(); i++) {
        if (r[i].restaurant == restaurant && r[i].rating >= 1 && r[i].rating <= 5) {
            count++;
        }
    }
    return count;
}


    void Ranker::printRecommendations() const {
        if (preRecommendationL.empty()) {
            cout << "No recommendations available." << endl;
            return;
        }
        cout << "Recommendations:" << endl;
        // Sort the pre-recommendation list and pre-ratings vector based on the ratings
        vector<pair<string, double>> recommendations;
        for (int i = 0; i < preRecommendationL.size(); ++i) {
            recommendations.push_back(make_pair(preRecommendationL[i], preRatings[i]));
        }
        sort(recommendations.begin(), recommendations.end(), [](const pair<string, double>& a, const pair<string, double>& b) {
            return a.second < b.second;
        });
        // Print the sorted recommendations
        for (int i = 0; i < recommendations.size(); ++i) {
            cout << recommendations[i].first << " (" << recommendations[i].second << ")" << endl;
        }
    }

