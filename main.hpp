#include<iostream>

//C++ allows us to 'overload' the same function name as long as
//the variable types in the function inputs are different.
/* Add two more variations on findSmaller;
create functions that accept three arguments for each of the variable types
create functions that accept an array for each variable type. */
class Compare
{
public:
    int findSmaller(int input1, int input2);
    float findSmaller(float input1, float input2);
    char findSmaller(char input1, char input2);

    int findSmaller(int input1, int input2, int input3);
    float findSmaller(float input1, float input2, float input3);
    char findSmaller(char input1, char input2, char input3);

    int findSmaller(int arrInput[], int size);
    float findSmaller(float arrInput[], float size);
    char findSmaller(char arrInput[], char size);
};

int Compare::findSmaller(int input1, int input2)
{
    if(input1<input2)
        return input1;
    return input2;
}
float Compare::findSmaller(float input1, float input2)
{
    if(input1<input2)
        return input1;
    return input2;
}

char Compare::findSmaller(char input1, char input2)
{
    if(input1<input2)
        return input1;
    return input2;
}

int Compare::findSmaller(int input1, int input2, int input3)
{
    if (input1 < input2)
    {
        if (input1 < input3)
        {
            return input1;
        }
    }
    else if (input2 < input3)
    {
        if (input2 < input1)
        {
            return input2;
        }
    }
    return input3;
}
float Compare::findSmaller(float input1, float input2, float input3)
{
    if (input1 < input2)
    {
        if (input1 < input3)
        {
            return input1;
        }
    }
    else if (input2 < input3)
    {
        if (input2 < input1)
        {
            return input2;
        }
    }
    return input3;
}
char Compare::findSmaller(char input1, char input2, char input3)
{
    if (input1 < input2)
    {
        if (input1 < input3)
        {
            return input1;
        }
        else
        {
            return input3;
        }
    }
    else
    {
        if (input2 < input3)
        {
            return input2;
        }
        else
        {
            return input3;
        }
    }

    // Method 2:
    if (input1 < input2)
    {
        if (input1 < input3)
        {
            return input1;
        }
    }
    else if (input2 < input3)
    {
        return input2;
    }
    else 
    {
        return input3;
    }
}
int Compare::findSmaller(int arrInput[], int size)
{
    int min = arrInput[0];
    for (size_t i = 1; i < size; i++)
    {
        if (arrInput[i] < min)
        {
            min = arrInput[i];
        }
    }
    return min;
}
float Compare::findSmaller(float arrInput[], float size)
{
    float min = arrInput[0];
    for (size_t i = 1; i < size; i++)
    {               
        if (arrInput[i] < min)
        {
            min = arrInput[i];
        }
    }
    return min;
}
char Compare::findSmaller(char arrInput[], char size)
{
    char min = arrInput[0];
    for (size_t i = 1; i < size; i++)
    {               
        if (arrInput[i] < min)
        {
            min = arrInput[i];
        }
    }
    return min;
}