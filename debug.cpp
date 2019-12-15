/*Goal: practice using multidimensional arrays.
**Write a program that will accept values for a 4x4 array 
**and a vector of size 4 (a one dimensional array) 
**Use the dot product to multiply the array by the vector. 
**Print the resulting vector. It should contain four elements.
*/

#include <iostream>
using namespace std;
int main()
{
    //TODO: multiply a 4x4 array with vector of size 4.
    //Print the resultant product vector
    int vtr[4];
    
    const int row = 4, column = 4;
    int arr4x4[row][column];
    for (size_t i = 0; i < row; i++)
    {
        for (size_t j = 0; j < column; j++)
        {
            cin >> arr4x4[i][j];
        }
    }

    int rslt[column];
    for (size_t i = 0; i < row; i++)
    {
        int sum = 0;
        
        cin >> vtr[i];
        for (size_t j = 0; j < column; j++)
        {
            sum += arr4x4[i][j] * vtr[i];
        }
        rslt[i] = sum;
        cout << rslt[i] << " " << endl;
    }
}