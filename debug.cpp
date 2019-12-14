
//*Sample program for Pointers*/

#include <iostream>
#include <string>

int main()
{
    int givenInt;
    float givenFloat;
    double givenDouble;
    std::string givenString;
    char givenChar;
    int *pointerGivenInt, **pointerPointerGivenInt;

    pointerGivenInt = &givenInt;
    pointerPointerGivenInt = &pointerGivenInt;

    std::cin >> givenDouble;    
    //We need to use cin.ignore so cin will ignore
    //the characters in the buffer leftover 
    //from the givenDouble
    std::cin.ignore();
    std::cin >> givenChar;
    // same
    std::cin.ignore();
    std::getline(std::cin, givenString);

    std::cout << "string = " << givenString << "\n";
    std::cout << "character = " << (char) givenChar << "\n\n"; // y typecast?

    std::cout << "address string = " << &givenString << "\n"; // not like C
    std::cout << "address character = " << (void *) &givenChar << "\n\n"; 
        // y typecast? y not (char *)?

    std::cout << "value of givenInt = " << *pointerGivenInt << "\n";
    std::cout << "double dereference of givenInt = " << **pointerPointerGivenInt << "\n"; 

    return 0;
}