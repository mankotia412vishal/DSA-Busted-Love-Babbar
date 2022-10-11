// 5
// 1234554321
// 1234**4321
// 123****321
// 12******21
// 1********1

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int i = 1;
    while (i <= n)
    {
        int j = n;
        while (j >= i)
        {
            cout << n - j + 1;
            j--;
        }
        j = n;
        int spaces = 1;
        while (spaces <= 2 * i - 2)
        {
            cout << "*";
            spaces++;
        }
        while (j >= i)
        {
            cout << j - i + 1;
            j--;
        }

        cout << endl;
        i += 1;
    }
}