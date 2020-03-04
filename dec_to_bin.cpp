#include <iostream>
using namespace std;

int dectobin(int n)
{
    if(n==0)
        return 0;
    else
        dectobin(n/2);
        cout << n%2;
}

int main()
{
    int n;
    cout << "Enter the number to be converted to binary: ";
    cin >> n ;
    dectobin(n);
    return 0;
}
