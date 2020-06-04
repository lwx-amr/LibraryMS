#ifndef BOOK_H
#define BOOK_H
#include "Copy.h"
#include <string>

using namespace std;

class Book
{
    public:
        Book();
        Book(string, int, int);
        void initCopies();
        void print();
        Book* getNext();
        void setNext(Book *);

    private:
        string name;
        int isbn, numOfCopies;
        Copy *copiesHead;
        Book *nextBook;
};

#endif // BOOK_H
