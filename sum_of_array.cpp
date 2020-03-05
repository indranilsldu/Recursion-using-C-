#include <iostream>
using namespace std;

int sumofarr(int arr[],int n)
{
    if(n==1)
        return arr[0];
    else
        return arr[n-1]+sumofarr(arr,n-1);
}

int main()
{
    int n,temp,size;
    cout << "Enter the size of array ";
    cin >> n;
    int arr[n];
    cout << "Enter the numbers one by one:\n";
    for(int i=0;i<n;i++)
    {
        cin >> temp;
        arr[i] = temp;
    }
    size = sizeof(arr)/sizeof(arr[0]);
    cout << "The sum of the array is " << sumofarr(arr,size);
    return 0;
}
