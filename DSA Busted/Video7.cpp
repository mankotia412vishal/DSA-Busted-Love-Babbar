#include<bits/stdc++.h>
using namespace std;
int  reverse (){
    int n,d,ans=0;
    cout<<"Enter the number\n";
    cin>>n;
while (n!=0)
{
    d=n%10;
    if((ans>INT_MAX/10)||(ans<INT_MIN/10)){
return 0;
    }
    ans=ans*10+d;
    n/=10;

}
cout<<"The reverse of the number is \n";

  return ans;  
    
}

int  ComplementBitwise (){
    int n, d, ans = 0;
    cout << "Enter the number\n";
    cin >> n;
    int m=n,mask=0;
    while (m != 0)
    {
       mask=((mask<<1)|1);
       m=m>>1;
        
    }
    ans=(~n) &mask;
    cout << "The complement of the base 10  number is \n";

    return ans;
}

void power(){
    int n, d, ans ;
    cout << "Enter the number\n";
    cin >> n;

    for(int i=0;i<=30;i++){
        ans=pow(2,i);
        if(ans!=n){
            cout << "False\n";
        }
    }
    if(ans==n){
        cout << "True\n";
    }
}

int main()
{
    cout << " Vishal DSA Busted!!\n";
    while (1)
    {
        cout << "\n1. To reverse a Integer\n";
        cout << "2. Complement of base 10\n";
        cout << "3. Power of 2\n";
        cout << "Enter your Choice\n";
        int ch;
        cin >> ch;
        switch (ch)
        {
        case 1:
      cout<<  reverse();
        break;
        case 2:
            cout << ComplementBitwise();
            break;
        case 3:
        power();
        break;
        default:
        cout<<"Try again!!\n";
        break;
    }
}

     return 0;
}