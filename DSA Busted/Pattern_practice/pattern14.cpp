// 3
// A B C
// B C D
// C D E

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
            cout << char('A'+ i+ j - 2)
                 << " ";
            j++;
        }
        cout << "\n";
        i++;
    }
    return 0;
}