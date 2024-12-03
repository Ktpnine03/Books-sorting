#ifndef BOOK_H
#define BOOK_H

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

class Book {
private:
    string title;
    string author;
    string isbn;
    bool available;
    string dateAdded;

public:
    // Constructor
    Book(string t, string a, string i, bool avl, string date)
        : title(t), author(a), isbn(i), available(avl), dateAdded(date) {
    }

    // Display book details
    void displayBookDetails() const {
        cout << "Title: " << title << ", Author: " << author
            << ", ISBN: " << isbn
            << ", Availability: " << (available ? "Available" : "Borrowed")
            << ", Date Added: " << dateAdded << endl;
    }

    // Getter for title (used for sorting)
    string getTitle() const { return title; }
};

// Sorting helpers
bool ascendingOrder(const Book& a, const Book& b) { return a.getTitle() < b.getTitle(); }
bool descendingOrder(const Book& a, const Book& b) { return a.getTitle() > b.getTitle(); }

#endif // BOOK_H
#pragma once
