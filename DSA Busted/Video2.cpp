#include <bits/stdc++.h>
using namespace std;
void Cast(){
    int a=65;
    cout<<"The character value of the 65 will be printed "<<char(a)<<endl;
    char b='B';
    cout<<"The value of the integer is: "<<int(b)<<endl;
}
void size()
{
    int a;
    float b;
    double d;
    char c;
    bool bl;
    cout << "The size of the Integer is : " << sizeof(a) << endl;
    cout << "The size of the float is : " << sizeof(b) << endl;
    cout << "The size of the double is : " << sizeof(d) << endl;
    cout << "The size of the Char is : " << sizeof(c) << endl;
    cout << "The size of the Boolean  is : " << sizeof(bl) << endl;
}
int main()
{
    cout << " Vishal DSA Busted \n";
    while (1)
    {
        cout << "1.  Print the Size of the Variables\n";
        cout<<" 2. Type Casting program\n";

        cout << "Enter the Choice\n";
        int ch;
        cin >> ch;
        switch (ch)
        {
        case 1:
            size();
            break;
        case 2:
            Cast();
            break;
        default:
            cout << "Invalid Choice\n";
            break;
        }
    }

    return 0;
}