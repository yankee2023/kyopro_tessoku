#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[101] = {0};
    for (int i = 0; i < n; i++) cin >> a[i];

    bool ans_flag = false;
    for (int i = 0; i < n-2; i++)
    {
        for (int j = i+1; j < n-1; j++)
        {
            for (int k = j+1; k < n; k++)
            {
                if ((a[i]+a[j]+a[k]) == 1000)
                {
                    ans_flag = true;
                    break;
                }
            }
        }
    }

    if (ans_flag) cout << "Yes";
    else cout << "No";

    return 0;
}