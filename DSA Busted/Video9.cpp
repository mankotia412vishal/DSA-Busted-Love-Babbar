#include <bits/stdc++.h>
using namespace std;
int linearS(int *arr, int n,int k)
{
    for(int i=0;i<n;i++){

        if(arr[i]==k){
            return i;
        }

    }return -1;
}

int Sum(int *arr, int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
        arr[i] = arr[i] + arr[i + 1];
    }
    return sum;
}
int getMax(int *arr, int n)
{
    int maxi = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (maxi < arr[i])
        {
            maxi = arr[i];
        }
    }
    return maxi;
}
int getMin(int *arr, int n)
{
    int mini = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < mini)
        {
            mini = arr[i];
        }
    }
    return mini;
}

void reverse(int *arr, int n)
{
    int s=0,e=n-1;
    while (s<=e)
    {
        int temp=arr[e];
        arr[e]=arr[s];
        arr[s]=temp;
        s++,e--;
    }
    cout << "\nThe REverse  of an  array is ";
    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
}

int main()
{
    cout << "Vishal DSA Busted!!\n";
    while (1)
    {
        cout << "\n1. To get Maximum element from an array\n";
        cout << "2. To get Minimum element from an array\n";
        cout << "3. To sum the elements of the array\n";
        cout << "4. Linear Search \n";
        cout << "5. Reverse an array\n";
        cout << "To exit press Ctrl+C \n";
        int ch;
        cout << " Enter your choice :\n";
        cin >> ch;
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

        switch (ch)
        {
        case 1:
            cout << "\nThe Maximum element in an array is " << getMax(arr, n);
            break;
        case 2:
            cout << "\nThe Minimum element in an array is " << getMin(arr, n);
            break;
        case 3:
            cout << "\nThe Sum of the  elements of array is " << Sum(arr, n);
            break;
        case 4:
            cout << "Enter the key to search\n";
            int k;
            cin >> k;
            cout << "\nThe    elements present in the array at index  " << linearS(arr, n, k);
            break;
        case 5:
            reverse(arr, n);
            break;
        default:
            cout << "\nTry Once More!!\n ";
            break;
        }
    }

    return 0;
}