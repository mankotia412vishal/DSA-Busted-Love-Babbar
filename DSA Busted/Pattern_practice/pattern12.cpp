// 3
// A B C
// A B C
// A B C

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, i = 1;
    cin >> n;
    while (i <= n)
    {
        int j = 1;

        while (j <= n)
        {
            cout << char('A' + j - 1)
                 << " ";
            j++;
        }
        cout << "\n";
        i++;
    }
    return 0;
}