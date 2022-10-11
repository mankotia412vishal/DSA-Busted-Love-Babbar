// 3
// A B C
// D E F
// G H I

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, i = 1,S='A';
    cin >> n;
    while (i <= n)
    {
        int j = 1;

        while (j <= n)
        {
            cout << char(S++)
                 << " ";
            j++;
        }
        cout << "\n";
        i++;
    }
    return 0;
}