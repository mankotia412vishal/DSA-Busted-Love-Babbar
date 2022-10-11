// 4
// ****
//  ***
//   **
//    *
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
            if (j <= i-1)
            {
                cout << " ";
            }
            else
            {
                cout << "*";
            }
            j++;
        }
        cout << "\n";
        i++;
    }
    return 0;
}