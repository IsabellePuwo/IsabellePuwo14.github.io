/*
Isabelle N Puwo 
1326733
Exercise: Q1
*/

#include <iostream>
#include <string>
using namespace std;

struct Book {
    string title;
    string director; 
    int yearReleased;
    int readingAge;
    int ranking;
};

void setBookValues(Book& book, string title, string director, int yearReleased,int readingAge, int ranking){
    book.title = title;
    book.director = director;
    book.yearReleased = yearReleased;
    book.readingAge = readingAge;
    book.ranking = ranking; 
}

bool isBestChildrenBook(Book book){
    return book.readingAge >= 3 && book.readingAge <= 8 && book.ranking >= 8;
}

bool isBestAdultBook(Book book){
    return book.readingAge > 18 && book.readingAge >= 8;
}

int main(){
    Book book1, book2, book3;
    setBookValues(book1, "The cat in the Hat", "Adam Devine", 1957, 4, 8);
    setBookValues(book2, "The Holy Bible", "Prophet Moses", 1200, 10, 9);
    setBookValues(book3, "Oh, the places you will go!", "David Mandel", 1990, 26, 7);

    if(isBestChildrenBook(book1)){
        cout<< book1.title << " is the best children Reading Book " << endl;
    }
    if(isBestChildrenBook(book2)){
        cout<< book2.title << " is the best children Reading Book " << endl;
    }
    if(isBestChildrenBook(book3)){
        cout<< book3.title << " is the best children Reading Book " << endl;
    }

    if(isBestAdultBook(book1)){
        cout<< book1.title << " is the best Adult reading recommendation" << endl; 
    }
    
    if(isBestAdultBook(book2)){
        cout<< book2.title << " is the best Adult reading recommendation" << endl;
    }
    if(isBestAdultBook(book3)){
      cout<< book3.title << " is the best Adult reading recommendation" << endl;
    }
    return 0; 

}