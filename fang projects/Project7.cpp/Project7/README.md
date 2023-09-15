// Isabelle N Puwo
// 1326733
// Project 7
#  CSDP222 Project 7 


# Installing 
c++ development environment (vs code, Xcode)


#Author:
Isabelle N Puwo 


# DESCRIPTION: 
Create a project that uses a class called "Ranker" to collect customer reviews to rank nearby restaurants as its private members. Customers should be able to provide their name, recommended restaurants, and a rating on a scale of 1 to 5. The program should store this data for each customer in a data structure.
Once all customer reviews have been collected, the program should identify restaurants that have been reviewed at least three times and add them to a pre-recommendation list. The program should then remove any restaurants) from this list that have the lowest average ranking and generate a recommendation list of the remaining restaurants along with their corresponding ranking grades.

Purpose: The purpose of this program is to collect customer reviews for nearby restaurants, and use a class called "Ranker" to rank the restaurants based on the reviews. The program should then generate a recommendation list of the top restaurants with the highest average rating.
Input:
- Customer name
- Recommended restaurant
- Rating on a scale of 1 to 5
Process:
- Create a class called "Ranker" with private members to store the customer reviews and restaurant rankings.
- Ask the  customers to provide their name, recommended restaurant, and rating on a scale of 1 to 5.
Store this data for each customer in a data structure.
- Identify restaurants that have been reviewed at least three times and add them to a pre-recommendation list.
- Calculate the average rating for each restaurant on the pre-recommendation list.
- Remove any restaurants with the lowest average rating from the pre-recommendation list.
- Generate a recommendation list of the remaining restaurants and their corresponding ranking grades.
Output:
- A recommendation list of the top restaurants with the highest average rating.
- The list should include the restaurant name and corresponding ranking grade.


#Version History: 
- created class definition(atrributes) in main.cpp on May 3rd,
- seperated class defintion in Ranker.h on May 2nd,
- designed member function for this program on May 2nd,

