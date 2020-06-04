#include "Copy.h"
#include "iostream"

using namespace std;

Copy::Copy()
{
    avialable = true;
    numOfReturnDays = 0;
    nextCopy = NULL;
}

Copy *Copy::getNext(){
    return nextCopy;
}

void Copy::print(){
    cout<<"\tNode! "<<avialable<<"  "<<numOfReturnDays<<endl;
}

void Copy::setNext(Copy *nextCopy){
    this->nextCopy = nextCopy;
}
