#include "Library.h"
#include <iostream>
#include "Book.h"

Library::Library()
{
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
void Library::libraryInventory(){
    cout<<"\t\tLibrary Inventory\n";
    Book *current = booksHead;
    while(current != NULL){
        current->print();
        current = current->getNext();
    }
}
