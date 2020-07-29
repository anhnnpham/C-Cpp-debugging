#include <stdio.h>
/* Create a union that stores an array of 21 characters including '\0' and 6 ints */
typedef union {
  // order matters for (initializer lists)
  int intArr[6]; // byte[0] -> 23
  int intArr0, intArr1, intArr2, intArr3, intArr4, intArr5; // TODO: DOESNT WORK!!!
  char chars[21];
} abcUnion;

int main() {
    // TODO: initializer lists are assigned to the First member of the union/struct -> union var order matters!
    // TODO: 6 ints here outputs "I understand Unions!"
    abcUnion intCharacters = {1853169737, 1936900, 1684955508, 1768838432, 561213039, 0}; // TODO: byte[20] -> 23 = '\0' since (0 = NULL in ASCII)
  
    for(int i = 0; i < 19; ++i) // byte[16] -> 19
        printf("%c, ", intCharacters.chars[i]);
    printf("%c\n", intCharacters.chars[19]); // '!', [20] = '\0'
    printf("%s\n", intCharacters.chars);
}