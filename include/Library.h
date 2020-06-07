#ifndef LIBRARY_H
#define LIBRARY_H
#include "Book.h"
#include <vector>

using namespace std;

class Library
{
    public:
        Library();
        void addNewBook(string, int, int); //Done
        void addNewCopy(string, string);
        void addBookBorrow(string, string, string, int);
        void addBookReturn(string, string);
        void libraryInventory(); //Done

        // Additional functions
        Book* getBook(string);
    private:
        Book *booksHead;

};

#endif // LIBRARY_H
