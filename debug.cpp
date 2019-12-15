/* Goal: Practice array manipulation in C++. 
The user will input 40 integers. 
**Put them into an array. Then print the array in the order the numbers were
**entered. Then print in reverse order. Then sort the array in ascending order 
**and print it. 
**separate the numbers in the array by one space. 
**For example: the array were [3,4,55] the printout would be 3 4 55
 */

#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
    int userInput[41], counter = 0;
    for(int i = 0; i < 41; i++)
    {
        cin.ignore();
        cin >> userInput[i];
        ++counter;
    }

    for (int i = 0; i < 41; i++)
    {
        cout << userInput[i] << " ";
    }
    cout << "\n";

    while (counter > 0)
    {
        cout << userInput[counter - 1] << " ";
        --counter;
    }
    cout << "\n";

    // sort array 
    int swap = 0;
    for (int i = 0; i < 41; i++) 
    {
        for (int j = 0; j < 40; j++) // damn 40 not 41!
        {
            if (userInput[j] > userInput[j + 1])
            {
                swap = userInput[j];
                userInput[j] = userInput[j + 1];
                userInput[j + 1] = swap;
            }
        }
    }

    for (int i = 0; i < 41; i++)
    {
        cout << userInput[i] << " ";
    }
    cout << "\n";
    return 0;
}