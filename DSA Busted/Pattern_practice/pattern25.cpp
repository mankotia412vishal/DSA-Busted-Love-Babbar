// 4
//    1
//   121
//  12321
// 1234321

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int i = 1;
    while (i <= n)
    {
        int j = 1, space = n - i;
        // Printing space
        while (space)
        {
            cout << " ";
            space--;
        }
        // Priting Ist triangle
        while (j <= i)
        {
            cout << j;
            j++;
        }

        int start = i - 1;
        while (start)
        {
            cout << start;
            start--;
        }

        i++;
        cout << "\n";
    }

    return 0;
}