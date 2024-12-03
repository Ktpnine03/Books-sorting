#include "Book.h"

int main() {
    // Array for ascending order
    vector<Book> ascendingBooks = {
        Book("Jane Eyre", "Charlotte Bront?", "00254", true, "2022-01-10"),
        Book("Harry Potter and the Philosopher's Stone", " J. K. Rowling", "00523", true, "2022-03-15"),
        Book("To Kill a Mockingbird", "Harper Lee", "15368", true, "2022-06-20"),
    };

    // Array for descending order
    vector<Book> descendingBooks = {
        Book("To Kill a Mockingbird", "Harper Lee", "15368", true, "2022-06-20"),
        Book("Harry Potter and the Philosopher's Stone", " J. K. Rowling", "00523", true, "2022-03-15"),
        Book("Jane Eyre", "Charlotte Bront?", "00254", true, "2022-01-10"),

    };

    // Array for mixed order
    vector<Book> mixedBooks = {
        Book("Animal Farm", "George Orwell", "12346", true, "2023-02-15"),
        Book("To Kill a Mockingbird", "Harper Lee", "15368", true, "2022-06-20"),
        Book("Harry Potter and the Philosopher's Stone", " J. K. Rowling", "00523", true, "2022-03-15"),
    };

    // Display arrays
    cout << "Books in Ascending Order:\n";
    for (const auto& book : ascendingBooks) {
        book.displayBookDetails();
    }

    cout << "\nBooks in Descending Order:\n";
    for (const auto& book : descendingBooks) {
        book.displayBookDetails();
    }

    cout << "\nBooks in Mixed Order:\n";
    for (const auto& book : mixedBooks) {
        book.displayBookDetails();
    }

    return 0;
}
