#include<iostream>
using namespace std;

int main()
{
    float in1, in2;
    char devOp = '\0'; // NULL for pointers

    cout << "Enter two numbers:\n";
    cin >> in1;
    cin >> in2;
    cout << "Enter the operation '+','-','*','/':\n";
    cin >> devOp;
    float ans;
    switch (devOp)
    {
        case '+':
            ans = in1 + in2;
            break;
        case '-':
            ans = in1 - in2;
            break;
        case '*':
            ans = in1 * in2;
            break;
        case '/':
            ans = in1 / in2;
            break;
        default:
            break;
    }
    return 0;
}