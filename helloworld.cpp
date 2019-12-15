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
    cout << endl;
}