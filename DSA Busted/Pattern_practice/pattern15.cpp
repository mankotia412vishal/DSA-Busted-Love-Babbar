// 3
// A
// B B
// C C C

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, i = 1;
    cin >> n;
    while (i <= n)
    {
        int j = 1;

        while (j <= i)
        {
            cout << char('A' + i -1)
                 << " ";
            j++;
        }
        cout << "\n";
        i++;
    }
    return 0;
}