#include <iostream>
using namespace std;

int main()
{
    int n, k, p[101], q[101];
    cin >> n >> k;
    for (int i = 0; i < n; i++) cin >> p[i];
    for (int i = 0; i < n; i++) cin >> q[i];
    
    int sum = 0;
    bool ans_flag = false;
    for (int i = 0; i < n; i++)
    {
        sum += p[i];
        for (int j = 0; j < n; j++)
        {
            sum += q[j];
            if (sum == k) 
            {
                ans_flag = true;
                break;
            }
        }
        sum = 0;
    }
    
    if (ans_flag) cout << "Yes";
    else cout << "No";
}