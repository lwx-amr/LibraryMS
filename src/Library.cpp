#include "Library.h"
#include <iostream>
#include "Book.h"

Library::Library(){
    booksHead = NULL;
}

void Library::addNewBook(string name, int isbn, int num){
    Book *newBook = new Book(name, isbn, num);
    if(booksHead == NULL) // First book Condition
        booksHead = newBook;
    else if(booksHead->getNext() == NULL) // Second book Condition
        booksHead->setNext(newBook);
    else{ // Other adds condition
        Book *current = booksHead;
        while(current->getNext() != NULL)
            current = current->getNext();
        current->setNext(newBook);
    }
}

Book* Library::getBook(string bookName){
    Book *current = booksHead;
    while(current != NULL){
        if (current->getName() == bookName)
            return current;
        current = current->getNext();
    }
}

void Library::addNewCopy(string bookName, string copyDate){
    Book *current = getBook(bookName);
    current->addNewCopy(copyDate);
}

void Library::addBookBorrow(string bookName, string borrowName, string date, int numOfDays){
    Book *current = getBook(bookName);
    current->addNewBorrow(borrowName, date, numOfDays);
}

void Library::addBookReturn(string bookName, string borrowName){
    Book *current = getBook(bookName);
    current->addBookReturn(borrowName);
}

void Library::libraryInventory(){
    cout<<"\n\n\t\tLibrary Inventory\n";
    Book *current = booksHead;
    while(current != NULL){
        current->print();
        current = current->getNext();
    }
}
