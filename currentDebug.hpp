/* the constructor sets each value of gameSpace to the char value '-'
each position to be set with a single char
each position can be read individually
printInfo will print gameSpace as a 4x4 matrix
the helper function 'fourInRow' checks every row, looking for four 'x's. When it finds four x's in the same 
row, it returns a '1', otherwise it returns a '0'. */
#include <iostream>
#include <iomanip> // std::setw()
using namespace std;

class Gameboard
{
    char gameSpace[4][4]; // 4x4 array that accepts a char for each of the 16 positions.
public:
    Gameboard(); //initialize the board with '-' in all 16 spaces
    void setGameSpace(int row,int column, char value); // x,y,or '-' in each game square
    char getGameSpace(int row,int column);
    int fourInRow(); //four 'x's in any row 'wins'
    void printInfo(); //print the game board in a 4x4 matrix
};

Gameboard::Gameboard()
{
    for (size_t row = 0; row < 4; row++)
    {
        for (size_t col = 0; col < 4; col++)
        {
            gameSpace[row][col] = '-';
        }
    }
}
void Gameboard::setGameSpace(int row, int column, char value) // x,y,or '-' in each game square
{
    gameSpace[row][column] = value;
}
char Gameboard::getGameSpace(int row, int column)
{
    return gameSpace[row][column];
}
int Gameboard::fourInRow()  //four 'x's in any row 'wins'
{
    int counter;
    for (size_t row = 0; row < 4; row++)
    {
        counter = 0;
        for (size_t col = 0; col < 4; col++)
        {
            if (gameSpace[row][col] == 'x')
            {
                ++counter;
            }
        }
        if (counter == 4)
        {
            return 1;
        }
    }
    return 0;
}
void Gameboard::printInfo() //print the game board in a 4x4 matrix
{
    for (size_t row = 0; row < 4; row++)
    {
        for (size_t col = 0; col < 4; col++)
        {
            cout << gameSpace[row][col] << " ";
        }
        cout << '\n' // no need to check col == 3!!!
    }
}