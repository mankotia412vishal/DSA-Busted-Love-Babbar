#include <bits/stdc++.h>
using namespace std;
void D_to_B (int n){

    int i=0,bits,ans=0;
    while (n!=0)
    {
        bits=n&1;
        if(bits==1){
            ans=bits*pow(10,i)+ans;
        }
        n>>=1;
        i++;
    }
    cout<<"The Binary conversion is : "<<ans<<endl;
}
void B_to_D(int n)
{

    int i=0,digit,ans=0;
    while (n!=0)
    {
        digit = n %10;
        if (digit == 1)
        {
            ans = digit * pow(2, i) + ans;
        }
        n/=10;
        i++;
    }
    cout<<"The Decimal conversion is : "<<ans<<endl;
}
void reverse(int n)
{

    int digit,ans=0;
    while (n!=0)
    {
        digit = n %10;
        
            ans = ans *10 + digit;
        
        n=n/10;
        
    }
    cout<<"The Reverse  is : "<<ans<<endl;
}

int main()
{
    cout << " Vishal DSA Busted!!\n";
    while (1)
    {
        cout << "1. Convert Decimal to Binary \n";
        cout << "2. Convert Binary to decimal\n";
        cout << "3. Reverse a integer\n";
        int ch;
        cout << " Enter the choice\n";

        cin >> ch;
        switch(ch){
            case 1:
            int n;
            cout<<"Enter the Decimal no\n";
            cin>>n;
            D_to_B(n);
            break;
            case 2:
            int n1;
            cout<<"Enter the Binary no\n";
            cin>>n1;
            B_to_D(n1);
            break;
            case 3:
            int n11;
            cout<<"Enter the  no\n";
            cin>>n11;
            reverse(n11);
            break;
            default:
            cout<<"Invalid Choice\n";
            
        }
    }

    return 0;
}