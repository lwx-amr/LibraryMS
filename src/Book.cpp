#include "Book.h"
#include "Copy.h"
#include "iostream"

using namespace std;

Book::Book()
{
    nextBook = NULL;
    numOfCopies = 0;
    copiesHead = NULL;
}

Book::Book(string name, int isbn, int num){
    this->name = name;
    this->isbn = isbn;
    this->numOfCopies = num;
    if(numOfCopies > 0)
        initCopies();
    else
        copiesHead = NULL;
    nextBook = NULL;
}

void Book::initCopies(){
    if(numOfCopies <= 0)
        return;
    copiesHead = new Copy();
    int numTemp = numOfCopies-1;
    Copy *current = copiesHead;
    while(numTemp != 0){
        Copy *newCopy = new Copy();
        current->setNext(newCopy);
        current = current->getNext();
        numTemp--;
    }
}

void Book::print(){
    cout<<"\nBook Name: "<<name<<"\nNumber of copies: "<<numOfCopies<<endl;
    Copy *current = copiesHead;
    while(current != NULL){
        current->print();
        current = current->getNext();
    }
}

void Book::addNewCopy(string date){
    Copy *newCopy = new Copy(date);
    if(copiesHead == NULL)
        copiesHead = new Copy(date);
    else {
        Copy *current = copiesHead;
        while(current->getNext() != NULL)
            current = current->getNext();
        current->setNext(newCopy);
    }
    this->numOfCopies++;
}

void Book::addNewBorrow(string borrowName, string date, int numOfDays){
    Copy *current = copiesHead;
    while(current != NULL){
        if(current->getAvial()){
            current->addBorrow(borrowName, date, numOfDays);
            break;
        }
        current = current->getNext();
    }
}

void Book::addBookReturn(string borrowName){
    Copy *current = copiesHead;
    while(current != NULL){
        if(current->getBorrowName() == borrowName){
            current->removeBorrow();
            break;
        }
        current = current->getNext();
    }
}

string Book::getName(){
    return this->name;
}

Book *Book::getNext(){
    return nextBook;
}

void Book::setNext(Book *nextBook){
    this->nextBook = nextBook;
}
