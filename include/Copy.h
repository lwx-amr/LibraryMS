#ifndef COPY_H
#define COPY_H

#include <string>

using namespace std;

class Copy
{
    public:
        Copy();
        Copy *getNext();
        void setNext(Copy*);
        void print();

    private:
        string date, borrowName, borrowDate;
        bool avialable;
        int numOfReturnDays;
        Copy *nextCopy;
};

#endif // COPY_H
