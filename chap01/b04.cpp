#include <iostream>
#include <algorithm>
using namespace std;

// convert 2進数 to 10進数
int main()
{
    string n;
    cin >> n;
    reverse(n.begin(), n.end());

    int sum = 0;
    for (int i = 0; i < n.size(); i++) // sizeで取得できるのは文字数
    {
        if (n[i] == '1') sum += (1 << i);
    }

    cout << sum << endl;
    return 0;
}
