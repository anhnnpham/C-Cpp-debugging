// constructing vectors
// constructing vectors
/* In this programming quiz, 
use these member functions to complete the functions in the header file:

assign
push_back
insert
emplace */
#include <iostream>
#include <vector>

using namespace std;

void printVector(vector<int> vIn);
void assignFunction(vector<int> vInts, int in);
void pushBackFunction(vector<int> vInts, int in);
void emplaceFunction(vector<int> vInts, int loc, int in);

void printVector(vector<int> vIn)
{   //printing the contents of vIns
    //TODO: Finish the function
    vector<int>::iterator ite;
    for (ite = vIn.begin(); ite != vIn.end(); ite++)
    {
        cout << *ite << " ";
    }
    // cout << endl;
    
}

void assignFunction(vector<int> vInts, int in)
{
    cout << "\nassigning " << in << " and printing the vector\n";
    //TODO: Finish the function
    vInts.assign(10, in);
    printVector(vInts);
}
void pushBackFunction(vector<int> vInts, int in)
{
    cout << "\npush back " << in << " and printing the vector\n";
    //TODO: Finish the function
    vInts.push_back(in);
    printVector(vInts);
    cout << '\n' << vInts.size();
}
void emplaceFunction(vector<int> vInts, int loc, int in)
{
    vector<int>::iterator it;
    cout << "\nemplacing " << in << " and printing the vector\n";
    //TODO: Finish the function
    vInts.emplace(vInts.begin() + loc, in);
    printVector(vInts);
    cout << '\n' << vInts.size();
}