// 4
//    1
//   23
//  456
// 78910

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    
    cin >> n;
    int i = 1, count = 1;
    while (i <= n)
    {
        int j = 1, spaces = 1;
        while (spaces <= n - i)
        {
            cout << " ";
            spaces += 1;
        }
        while (j <= i)
        {
            cout << count;
            count++;
            j++;
        }
        cout << endl;
        i += 1;
    }
}