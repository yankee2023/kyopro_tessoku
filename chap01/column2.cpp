#include <iostream>>
using namespace std;

int main()
{
    int n, k, a[22];
    cin >> n >> k;
    for (int i = 0; i < n; i++) cin >>a[i];

    bool ans = false;
    for (int i = 0; i < (1 << n); i++)
    {
        int sum =0;
        for (int j = 0; j <= n; j++)
        {
            int wari  = (1 << (j - 1));
            if ((i / wari) % 2 == 1) sum += a[j];
        }
        if (sum == k) ans = true;
    }
    
    if (ans) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}