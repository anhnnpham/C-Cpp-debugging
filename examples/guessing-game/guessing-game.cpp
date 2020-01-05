#include <iostream>
#include<sstream>

#include <time.h> //added for the random number generator seed
#include <cstdlib>//added to use the rand function

int main()
{
    int target;
    std::string userString; // input = ALL int, char, string
    int guess = -1;

    srand(time(NULL));  //set the seed for the random number generator
    target = rand() %100 + 1; //generate the 'random' number

    while (guess != target)
    {
        std::cout<<"Guess a number between 0 and 100: ";
        std::getline (std::cin,userString);
        //convert to an int
        std::stringstream(userString) >> guess; // 0 if char/string, typecasted to int if float
        std::cout<<userString<<"\n"; // in case it's a char or string
        
        if(guess > target)
            std::cout<<"Your guess is too high\n";
        else if(guess < target)
            std::cout<<"Your guess is too low\n";
        else
            std::cout<<"You guessed the target!\n";
        if(userString == "q") // bc = string
        {
            std::cout<<"The number was "<<target<<"\n";
            break; // out of while()
        }
    }
    return 0;
}