#include <iostream>
using namespace std;

int main()
{
    int A, B;
    cin >> A >> B;
    bool flag = false;
    for (int i = A; i <= B; i++)
    {
        if (100 % i == 0)
        {
            flag = true;
            break;
        }
    }

    if (flag) cout << "Yes";
    else cout << "No";
}