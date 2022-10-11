// 4
// 1
// 2 3
// 3 4 5
// 4 5 6 7

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, i = 1;
    cin >> n;
    while (i <= n)
    {
        int j = 1;
        int c = i;
        while (j <= i)
        {
            cout << c++
                 << " ";
            j++;
        }
        cout << "\n";
        i++;
    }
    return 0;
}