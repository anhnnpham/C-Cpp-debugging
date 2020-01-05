
#include <iostream>

using namespace std;

int main()
{
    unsigned char half_limit = 150;

    //Hint to the answer: run this code as is.
    //then uncomment the line below. What happens?
    // cout << "half_limit = " << half_limit << "\n";

    cout << "i = \n";
    for (unsigned char i = 0; i < 2 * half_limit; ++i)
    {

        cout << i << ", ";
        //This is another hint...
        //Why do we have a break here?
        if (i > 60)
        break;
    }
    return 0;
}