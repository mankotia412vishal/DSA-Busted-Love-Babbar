#include <bits/stdc++.h>
using namespace std;

int hammingWeight(uint32_t n)
{
    int c = 0;
    while (n != 0)
    {
        if (n & 1)
        {
            c++;
        }
        n = n >> 1;
    }
    return c;
}
int subtractProductAndSum(int n)
{
    int s = 0, p = 1;
    while (n != 0)
    {
        int digit = n % 10;
        p *= digit;
        s += digit;
        n /= 10;
    }
    int ans = p - s;
    return ans;
}
int main()
{

    while (1)
    {
        cout << "\n1. To find the difference & product oof the no. \n";
        // cout << "2. count the no of set bits\n";
       
        int ch;
        cin >> ch;
        int n;
        cout<<"Enter the no\n";
        cin >> n;
        switch (ch)
        {
        case 1:
        
            cout << subtractProductAndSum(n);
            break;
        case 2:
            // cout << hammingWeight(n);
            break;

        default:
            cout << "Invalid Choice\n";
            break;
        }
    }

    return 0;
}