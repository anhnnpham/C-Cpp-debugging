#include<iostream>
using namespace std;

int main()
{
    int A, B, C, Q;
    cout<<"A\tB\tC\t(A && B && C)\t\t(!B||!C)\t\t(A&&(!B||!C))\t\tQ\n";

    A = B = C = 0;
    Q = (A && B && C) || (A && (!B || !C));
    cout << A << "\t" << B << "\t" << C << "\t"; // A B C
    cout << (A && B && C) << "\t\t";
    cout << (!B || !C) << "\t\t";
    cout << (A && (!B || !C)) << "\t\t" << Q << "\n";

    A = B = 0, C = 1;
    Q = (A && B && C) || (A && (!B || !C));
    cout << A << "\t" << B << "\t" << C << "\t" << (A && B && C) << "\t\t" << (!B || !C) << "\t\t" << (A && (!B || !C)) << "\t\t" << Q << "\n";

    A = 0, B = 1, C = 0;
    Q = (A && B && C) || (A && (!B || !C));
    cout << A << "\t" << B << "\t" << C << "\t" << (A && B && C) << "\t\t" << (!B || !C) << "\t\t" << (A && (!B || !C)) << "\t\t" << Q << "\n";

    A = 0, B = 1, C = 1;
    Q = (A && B && C) || (A && (!B || !C));
    cout << A << "\t" << B << "\t" << C << "\t" << (A && B && C) << "\t\t" << (!B || !C) << "\t\t" << (A && (!B || !C)) << "\t\t" << Q << "\n";

    A = 1, B = C = 0;
    Q = (A && B && C) || (A && (!B || !C));
    cout << A << "\t" << B << "\t" << C << "\t" << (A && B && C) << "\t\t" << (!B || !C) << "\t\t" << (A && (!B || !C)) << "\t\t" << Q << "\n";

    A = 1, B = 0, C = 1;
    Q = (A && B && C) || (A && (!B || !C));
    cout << A << "\t" << B << "\t" << C << "\t" << (A && B && C) << "\t\t" << (!B || !C) << "\t\t" << (A && (!B || !C)) << "\t\t" << Q << "\n";

    A = B = 1, C = 0;
    Q = (A && B && C) || (A && (!B || !C));
    cout << A << "\t" << B << "\t" << C << "\t" << (A && B && C) << "\t\t" << (!B || !C) << "\t\t" << (A && (!B || !C)) << "\t\t" << Q << "\n";

    A = B = C = 1;
    Q = (A && B && C) || (A && (!B || !C));
    cout << A << "\t" << B << "\t" << C << "\t\t" << (A && B && C) << "\t\t" << (!B || !C) << "\t\t" << (A && (!B || !C)) << "\t\t" << Q << "\n";
    return 0;
}