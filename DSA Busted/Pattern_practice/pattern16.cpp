// 4
// A
// B C
// C D E
// D E F G

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, i = 1;
    cin >> n;
    while (i <= n)
    {
        int j = 1;
        char ch = 'A' + i - 1;
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