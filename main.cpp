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
    libObj.libraryInventory();
    return 0;
}
