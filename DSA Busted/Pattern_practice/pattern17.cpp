// 4
// D
// C D
// B C D
// A B C D
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, i = 1;
    cin >> n;
    while (i <= n)
    {
        int j = 1;
        char ch = 'A' + n - i;
        while (j <= i)
        {

            cout << char(ch++)
                 << " ";
            j++;
        }
        cout << "\n";
        i++;
    }
    return 0;
}