#include "main.h"

int main()
{
    const int SIZE = 2;
    myStack obj(SIZE);
    
    bool j;
    do
    {
        j = obj.push(9);
    } while (j == true);

    obj.del();
    return 0;
}