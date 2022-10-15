#include <bits/stdc++.h>
using namespace std;
int  BinaryS (){
    int n;

    cout << "Enter the size of the array\n";
    cin >> n;
    int arr[n];
    cout << " Enter the elements of the array\n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "The elements in  the array are: \n";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;
    cout<<"Enter the Key:"<<endl;
    int k;
    cin>>k;
    cout<<"\n";
    int s=0,e=n-1;
    int mid=(s+e)/2;
    while (s<=e)
    {
       if(arr[mid]==k){
        return mid;
       }
       if(arr[mid]<k){
        s=mid+1;
       }
       else{
        e=mid-1;
       }
       mid=(s+e)/2;

    }
    return -1;
    
}



void sort012()
{

    int n;

    cout << "Enter the size of the array\n";
    cin >> n;
    int arr[n];
    cout << " Enter the elements of the array\n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "The elements in  the array are: \n";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    sort(arr, arr + n);
    cout << "The elements in  the array are: \n";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void swap()
{
    int n;

    cout << "Enter the size of the array\n";
    cin >> n;
    int arr[n];
    cout << " Enter the elements of the array\n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "The elements in  the array are: \n";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < n; i += 2)
    {
        if (arr[i + 1] < n)
        {
            swap(arr[i], arr[i + 1]);
        }
    }
    cout << "The new swapped   array is : \n";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main()
{
    cout << "Vishal DSA Busted!!\n";
    while (1)
    {
        cout << "\n1. Swap alternate elements of the arrays\n";
        cout << "2. Sort 0 and 1 's and 2's \n";
        cout << "3. Binary Search \n";

        cout << " Enter your choice\n";
        int ch,g;
        cin >> ch;
        switch (ch)
        {
        case 1:
            swap();
            break;
        case 2:
            sort012();
            break;
        case 3:
        g = BinaryS();
                        cout
                    << " The element is present at index " << g;
            break;

        default:
            cout << "Try Again" << endl;
            break;
        }
    }

    return 0;
}