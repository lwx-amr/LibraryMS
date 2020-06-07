#ifndef COPY_H
#define COPY_H

#include <string>

using namespace std;

class Copy
{
    public:
        Copy();
        Copy(string);
        void print();
        void addBorrow(string, string, int);
        void removeBorrow();

        Copy *getNext();
        void setNext(Copy*);
        bool getAvial();
        string getBorrowName();

    private:
        string date, borrowName, borrowDate;
        bool avialable;
        int numOfReturnDays;
        Copy *nextCopy;
};

#endif // COPY_H
