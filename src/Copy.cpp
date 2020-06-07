#include "Copy.h"
#include "iostream"

using namespace std;

Copy::Copy()
{
    avialable = true;
    numOfReturnDays = 0;
    nextCopy = NULL;
    date = "2020";
}
Copy::Copy(string date)
{
    this->avialable = true;
    this->numOfReturnDays = 0;
    this->nextCopy = NULL;
    this->date = date;
}

Copy *Copy::getNext(){
    return nextCopy;
}

void Copy::print(){
    string avial;
    (avialable==true)? avial = "true" : avial ="false";
    cout<<"\tCopy Date: "<<date;
    cout<<"   Avialability: "<<avial<<endl;
}

void Copy::addBorrow(string borrowName, string date, int numOfDays){
    this->borrowName = borrowName;
    this->borrowDate = date;
    this->numOfReturnDays = numOfDays;
    this->avialable = false;
}

void Copy::removeBorrow(){
    this->borrowName = "";
    this->borrowDate = "";
    this->numOfReturnDays = 0;
    this->avialable = true;
}

void Copy::setNext(Copy *nextCopy){
    this->nextCopy = nextCopy;
}

bool Copy::getAvial(){
    return this->avialable;
}

string Copy::getBorrowName(){
    return borrowName;
}
