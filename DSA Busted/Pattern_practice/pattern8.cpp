// 4
// 1
// 2 3
// 4 5 6
// 7 8 9 10

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, i = 1,c=1;
    cin >> n;
    while (i <= n)
    {
        int j = 1;
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