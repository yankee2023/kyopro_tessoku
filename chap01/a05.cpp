#include <iostream>
using namespace std;

int main()
{
    int n, K;
    cin >> n >> K;

    // 全探索 O(N^3)
    // int ans = 0;
    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= n; j++)
    //     {
    //         for (int k = 1; k <= n; k++)
    //         {
    //             if ((i+j+k) == K) ans++;
    //         }
    //     }
    // }

    // 全探索 O(N^2)
    int ans = 0;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            int k = K - i - j;  // 最後のカード
            if (1 <= k && k <= n) ans++;
        }
    }

    cout << ans << endl;
    return 0;
}