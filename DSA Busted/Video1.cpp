#include <bits/stdc++.h>
using namespace std;
void prime()
{
    int n, i = 2;
    cout << "Enter the number N\n";
    cin >> n;
    bool isprime = true;
    while (i < n)
    {
        if (n % i == 0)
        {
            isprime = false;
            cout << "Non Prime" << endl;
            break;
        }
        i++;
    }
    if (isprime)
    {
        cout << "Prime" << endl;
    }
}
void Printprime()
{
    int n;
    cout << "Enter the number N\n";
    cin >> n;
    cout << "The prime numbers are \n";
    
    for (int i = 2; i <= n; i++)
    {
        bool isprime = true;
        for (int j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                isprime = false;
                break;
            }
        }
        if (isprime)
        {
            cout << i << " ";
        }
    }
    cout << endl;
}
void fact()
{
    int m;
    cout << "Enter the number N ";
    cin >> m;
    int i = 1, ans = 1;
    while (i <= m)
    {
        ans *= i;
        i++;
    }
    cout << "The factorial of the number is " << ans << endl;
}
void SUM()
{
    int n, sum = 0;
    cout << "Enter the number N\n";
    cin >> n;
    int i = 1;
    cout << "The Sum of the numbers from 1 to N is : ";
    while (i <= n)
    {
        sum += i;
        i++;
    }
    cout << sum << endl;
}
void Even()
{
    int a;
    cout << "Enter the number N: \n";
    cin >> a;
    int i = 2;
    cout << "The Even numbers are\n";
    while (i <= a)
    {
        cout << i << " ";
        i += 2;
    }
    cout << "\n";
}
void Odd()
{
    int a;
    cout << "Enter the number N: \n";
    cin >> a;
    int i = 1;
    cout << "The odd numbers are\n";
    while (i <= a)
    {
        cout << i << " ";
        i += 2;
    }
    cout << "\n";
}
void count()
{
    int a;
    cout << "Enter the no ";
    cin >> a;
    int i = 1;
    cout << "The numbers from 1 to N are\n";
    while (i <= a)
    {
        cout << i << " ";
        i++;
    }
    cout << "\n";
}
void triangle()
{

    int a;
    cout << "Enter the side 1 \n";
    cin >> a;
    int b;
    cout << "Enter the side 2\n";
    cin >> b;
    int c;
    cout << "Enter the side 3\n";
    cin >> c;
    if (a + b >= c || b + c >= a || c + b >= a)
    {
        cout << " Triangle is valid\n";
    }
    else
    {
        cout << " Triangle is invalid\n";
    }
}
void plusminuszero()
{
    int a;
    cout << "Enter the  No 1: \n";
    cin >> a;
    if (a < 0)
    {
        cout << a << " is -ve\n";
    }
    else if (a == 0)
    {
        cout << "The number is 0 \n";
    }
    else
    {
        cout << "The number is +ve\n";
    }
}
void check()
{
    int a;
    cout << "Enter the no 1: ";
    cin >> a;
    if (a & 1)
    {
        cout << a << " is odd\n";
    }

    else
    {
        cout << a << " is Even \n";
    }
}
void Greater()
{

    int a;
    cout << "Enter the no1 \n";
    cin >> a;
    int b;
    cout << "Enter the no2\n";
    cin >> b;
    if (a < b)
    {
        cout << "Yes\n";
    }
    else
    {
        cout << "No\n";
    }
}

void Avg()
{
    int a;
    cout << "Enter the no1 \n";
    cin >> a;
    int b;
    cout << "Enter the no2\n";
    cin >> b;
    int c;
    cout << "Enter the no3\n";
    cin >> c;
    int avg = (a + b + c) / 3;
    cout << "Average is : " << avg << endl;
}
void SI()
{
    int p;
    cout << "Enter the principal amount: \n";
    cin >> p;
    int r;
    cout << "Enter the rate:\n";
    cin >> r;
    int t;
    cout << "Enter the time \n";
    cin >> t;
    cout << "SI is :" << (p * r * t) / 100 << endl;
}
void sum()
{
    int a;
    cout << "Enter the no 1: \n";
    cin >> a;
    int b;
    cout << "Enter the no 2\n";
    cin >> b;
    cout << "Sum of the two elements is: " << a + b << endl;
}
int main()
{
    cout << "Vishal DSA Busted !!" << endl;
    while (1)
    {
        cout << " 1. Sum of two nos\n";
        cout << " 2.Simple Interest\n";
        cout << " 3. Average of the three nos\n";
        cout << " 4. Check a  is greater than b\n";
        cout << " 5. Check a no is Odd or Even\n";
        cout << " 6. Check whether a Number is +ve , -ve or 0 \n";
        cout << " 7. Check whether a Triangle is valid or not\n";
        cout << " 8. Print no 1 to N\n ";
        cout << " 9. Print Even numbers\n";
        cout << " 10. Print Odd numbers\n";
        cout << " 11. Print Sum of the Numbers Inclusively\n";
        cout << " 12. Find the factorial of the number\n";
        cout << " 13. Check whether a number is prime or not \n";
        cout << " 14. Print prime numbers from 1 to N \n";

        int ch;
        cout << "Enter choice\n";
        cin >> ch;
        switch (ch)
        {
        case 1:
            sum();
            break;
        case 2:
            SI();
            break;
        case 3:
            Avg();
            break;
        case 4:
            Greater();
            break;
        case 5:
            check();
            break;
        case 6:
            plusminuszero();
            break;
        case 7:
            triangle();
            break;
        case 8:
            count();
            break;
        case 9:
            Even();
            break;
        case 10:
            Odd();
            break;
        case 11:
            SUM();
            break;
        case 12:
            fact();
            break;
        case 13:
            prime();
            break;
        case 14:
            Printprime();
            break;
        }
    }

    return 0;
}