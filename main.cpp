//Write a C++ function to swap two integers without
//using a temp variable. 

//Hint: think about pointers
#include <iostream>
using namespace std;
void swap(int *a, int *b);
void swap(int &a, int &b);
int main()
{
    int a = 5;
    int b = 3;

    swap(&a, &b); --> swap(int *a, int *b)
    swap(a, b); --> swap(int &a, int &b)

    return 0;
}

void swap(int *a, int *b)
{
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
    cout << "a & b = " << *a << " " << *b << endl;
}

void swap(int &a, int &b)
{
    a = a + b;
    b = a - b;
    a = a - b;
    cout << "a & b = " << a << " " << b << endl;
}