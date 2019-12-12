#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    vector<string> msg {"Hello", "C++", "World", "from", "VS Code!"};
    int i = 0; 
    for (const string& word : msg)
    {
        ++i;
        cout << word << " ";     
    }
    helloworld
    cout << endl;
}
void guessingGame(int *ranNum) {
    int guessedNum = 0, counter = 0;
    printf("Guess it bitch!\n");
    do {
        scanf("%d", &guessedNum);
        if (guessedNum < *ranNum) {
            printf("Higher bitch!\n");
        } 
        else if (guessedNum > *ranNum) {
            printf("Lower bitch!\n");
        }
        counter++;
    } 
    while (guessedNum != *ranNum);
    printf("%d tries.\n", counter);
}