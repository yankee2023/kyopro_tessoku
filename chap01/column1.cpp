#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;

    cout << (a & b) << endl;    // AND
    cout << (a | b) << endl;    // OR
    cout << (a ^ b) << endl;    // XOR

    return 0;
}