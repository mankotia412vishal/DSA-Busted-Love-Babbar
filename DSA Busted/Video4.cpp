#include<bits/stdc++.h>
using namespace std;
int main(){
    int a =2;
    int b=3;
    cout<<"The And of a and b is "<<(a&b)<<endl;
    cout << "The OR of a and b is " << (a | b) << endl;
    cout << "The Not of a  is " << ~a << endl;
    cout << "The XOR of a and b is " << (a ^ b) << endl;
    cout << "The left shitf of a is  " << (a << 1) << endl;
    cout << "The Right shitf of a is  " << (a >>1) << endl;


    // Pre post Inc/Dec

    int d=12;
    cout<<(++d)<<endl;
    //d=13
    cout<<(d++)<<endl;
    //d=13
    cout<<(d--)<<endl;
    //14
    cout<<(--d)<<endl;
    //12
    return 0;
}