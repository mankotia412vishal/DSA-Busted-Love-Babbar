#include <bits/stdc++.h>
using namespace std;
// 3. for Rectangluar Pattern: 

// 4
// * * * *
// * * * *
// * * * *
// * * * *

// 4. For Number Pattern :

// 3
// 4
// 1 1 1 1 
// 2 2 2 2 
// 3 3 3 3 
void NumberPattern()
{

    int r, i = 1;
    cin >> r;
    int c;
    cin >> c;
    while (i <= r)
    {
        int j = 1 ;
        while (j <= c)
        {
            cout << i << " ";
            j++;
        }
        cout << "\n";
        i++;
    }
}

void RectanglePattern()
{
    int n, i = 1;
    cin >> n;
    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {
            cout << "* ";
            j++;
        }
        i++;
        cout << endl;
    }
}
void SumEven()
{
    int i = 2, s = 0;
    int n;
    cout << "Enter the number N: ";
    cin >> n;
    cout << "The Sum os the Even no are: " << endl;
    while (i <= n)
    {
        if (i % 2 == 0)
        {
            s += i;
        }
       

       
        i += 2;
    }
    cout << s << endl;
}
void oddSum()
{
    int i = 1, s = 0;
    int n;
    cout << "Enter the number N: ";
    cin >> n;
    cout << "The Sum os the Odd no are: " << endl;
    while (i <= n)
    {
        if (i % 2 != 0)
        {
            s += i;
        }

        
        i += 2;
    }
    cout << s << endl;
}

int main()
{
    cout << " Vishal DSA Busted!!\n";
    while (true)
    {
        cout << "1. Sum of the Even  No\n";
        cout << "2. Sum of the odd  No\n";
        cout << " 3. For Rectangle pattern\n";
        cout << " 4. For Number pattern\n";

        int ch;
        cout << "Enter the choice\n";
        cin >> ch;
        switch (ch)
        {
        case 1:
            SumEven();
            break;
        case 2:
            oddSum();
            break;
        case 3:
            RectanglePattern();
            break;
        case 4:
            NumberPattern();
            break;
        default:
            cout << "Invalid Choice\n";
            break;
        }
    }

    return 0;
}