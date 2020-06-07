#include <iostream>
#include <vector>
#include <Library.h>

using namespace std;

int main()
{
    Library libObj;
    libObj.addNewBook("DS", 13, 3);
    libObj.addNewBook("Al", 10, 2);
    libObj.addNewBook("IS", 5, 1);
    libObj.addNewCopy("IS", "2016");
    libObj.addNewCopy("DS", "2018");
    libObj.addNewCopy("Al", "2017");
    libObj.addBookBorrow("DS","Mohamed Ali", "2020-6", 30);
    libObj.addBookBorrow("IS","Sayed Ali", "2020-5", 30);
    libObj.addBookBorrow("Al","Menna Ali", "2020-3", 30);
    libObj.libraryInventory();
    libObj.addBookReturn("DS","Mohamed Ali");
    libObj.libraryInventory();
    return 0;
}
