#include <iostream>
using namespace std;

int main()
{
    int N, X, A[109];
    bool ans = false;
    cin >> N >> X;
    for (int i = 0; i < N; ++i) cin >> A[i];
    
    for (int i = 0; i < N; i++)
    {
        if (X == A[i])
        {
            ans = true;
            break;
        }
    }

    if (ans) cout << "Yes" << endl;
    else cout << "No" << endl;
}
