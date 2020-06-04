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
        void addNewCopy();
        void addBookBorrow();
        void addBookReturn();
        void libraryInventory(); //Done

    private:
        Book *booksHead;

};

#endif // LIBRARY_H
