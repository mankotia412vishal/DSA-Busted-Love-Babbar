#include <iostream>
using namespace std;
int fact(int n){
    int f=1,i=1;
    while(i<=n){
        f*=i;
        i++;
    }
    return f;
}
void Binomial (){
    int n,r;
    cout<<"Enter the value of n and r\n";
    cin>>n>>r;
    int num=fact(n);
    int den=fact(r)*fact(n-r);
    int ans=num/den;
    cout<<" Result is "<<ans<<endl;
    
    
    
}
void arthmetic()
{
int n;
cout<<"Enter the value of n ";
cin>>n;
    // int a;
    // cout << "Enter the number to get the AP\n";
    // cin >> a; 
    int ans=  (3 * n + 7);
    cout<<"Ans is : "<<ans<<endl;
}

void fib()
{

    int n;
    cout << "Enter the number till you want the fiboncci series\n ";
    cin >> n;
    int f[n];
    int i;
    f[0] = 0;
    f[1] = 1;
    for (i = 2; i < n; i++)
    {
        f[i] = f[i - 1] + f[i - 2];
    }
    for (i = 0; i < n; i++)
    {
        cout << f[i] << " ";
    }
}


void NotesP()
{
    int n, hundred = 0, fifty = 0, twenty = 0, one = 0;

    cout << "Enter the number for which you want to check " << endl;
    cin >> n;

    switch (1)
    {
    case 1:
        hundred = hundred + n / 100;
        n = n % 100;
        cout << hundred << " -->100 Rupee Notes" << endl;

    case 2:
        fifty = fifty + n / 50;
        n %= 50;
        cout << fifty << " -->50 Rupee Notes" << endl;

    case 3:
        twenty = twenty + n / 20;
        n = n % 20;
        cout << twenty << " -->20 Rupee Notes" << endl;

    case 4:
        one = one + n / 1;
        n = n % 1;
        cout << one << " -->1 Rupee Notes" << endl;
        break;
    default:
        cout << "Invalid input " << endl;
        break;
    }
}

int main()
{

cout<<"Vishal DSA Busted!!\n";
while (1)
{
    cout<<"\n 1 . Notes Problem\n";
    cout<<" 2. Binomial Theorem\n";
    cout<<"3. fibonacci series\n";
  
    cout<<"4. AP series equation ";

    int ch;
    cin>>ch;
    switch (ch)
    {
    case 1:
       NotesP();
        break;
    case 2:
        Binomial();
        break;
    case 3:
        fib();
        break;
    
    


       
        
       
    case 4:
        

        arthmetic();
    
        break;
    default:
        break;
    }
}

   
}