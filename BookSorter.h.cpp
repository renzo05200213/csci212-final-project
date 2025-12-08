#ifndef BOOKSORTER_H
#define BOOKSORTER_H

#include <vector>
#include "Book.h"

// Options: 1 = Title, 2 = Author, 3 = Serial Number
void sort_books(std::vector<Book>& books, int option);

// Optional: menu that asks the user how they want to sort
void sort_books_menu(std::vector<Book>& books);

#endif // BOOKSORTER_H
