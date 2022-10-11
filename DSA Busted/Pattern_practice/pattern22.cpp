// 4
//    1
//   22
//  333
// 4444

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
            if (j <= n - i)
            {
                cout << " ";

            }
           else{
                cout << i;
           }
            j++;
        }
        cout << "\n";
        i++;
    }
    return 0;
}