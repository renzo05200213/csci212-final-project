#include "BookSorter.h"
#include <algorithm>
#include <iostream>
#include <limits>

// this function will help sort

void sort_books(std::vector<Book>& books, int option) {
    if (books.empty()) {
        std::cout << "No books to sort.\n";
        return;
    }

    switch (option) {
  // Sort by Title
            std::sort(books.begin(), books.end(),
                      [](const Book& a, const Book& b) {
                          return a.title < b.title;
                      });
            std::cout << "Books sorted by TITLE (A–Z).\n";
            break;

  // Sort by Author
            std::sort(books.begin(), books.end(),
                      [](const Book& a, const Book& b) {
                          return a.author < b.author;
                      });
            std::cout << "Books sorted by AUTHOR (A–Z).\n";
            break;

  //  Serial Number gets sorted here

            std::sort(books.begin(), books.end(),
                      [](const Book& a, const Book& b) {
                          return a.serial_number < b.serial_number;
                      });
            std::cout << "Books sorted by SERIAL NUMBER.\n";
            break;

        default:
            std::cout << "Invalid option. No sorting applied.\n";
            break;
    }
}

// Helper for user interaction

void sort_books_menu(std::vector<Book>& books) {
    if (books.empty()) {
        std::cout << "No books to sort.\n";
        return;
    }

    int choice = 0;

    std::cout << "\n=== Library Sorting Menu ===\n";
    std::cout << "1. Sort by Title (A-Z)\n";
    std::cout << "2. Sort by Author (A-Z)\n";
    std::cout << "3. Sort by Serial Number\n";
    std::cout << "Enter your choice: ";

    if (!(std::cin >> choice)) {
        std::cout << "Invalid input. Sorting cancelled.\n";
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        return;
    }

    sort_books(books, choice);
}
