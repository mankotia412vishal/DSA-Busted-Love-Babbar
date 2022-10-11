// 4
// ****
// ***
// **
// *

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, i = 1;
    cin >> n;
    while (i <= n)
    {
        int j = n;

        while (j >= i)
        {
            
           cout<<"*";
            j--;
        }
        cout << "\n";
        i++;
    }
    return 0;
}