#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
void guessingGame(int *ranNum);
int difficultySel();	// ctrK F12 open def 2 side	    
int againYe();                              // go to definition F12
int main() {    // sh alt A Blocks      ctr / Cmts
    int ranNum = 0, difficultMax = 0; // ctrK R ctrK O deal w files
    difficultMax = difficultySel();

    srand(time(NULL));
    ranNum = (rand() % difficultMax) + 1;

	int *addranNum = &ranNum;
    guessingGame(addranNum);                    // delete line Shift Del
    againYe();
}
int againYe() {
    char yesNo[5];
    printf("Again bitch? \"yes\" or \"no\".\n");
    scanf("%s", yesNo);
    if (strcmp(yesNo, "yes") == 0) {
        main();
    }
    else {
        return 0;
    }
}
int difficultySel() {
    int difficultMax = 0;
    char difficulty[10];
    printf("Easy: 1 -> 100, Medium: 1 -> 1000, Hard: 1 -> 10000?\n");
    scanf("%s", difficulty);
    if (strcmp(difficulty, "easy") == 0) {
        difficultMax = 100;
    }
    else if (strcmp(difficulty, "medium") == 0) {
        difficultMax = 1000;
    }
    else {
        difficultMax = 10000;
    }
    return difficultMax;
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