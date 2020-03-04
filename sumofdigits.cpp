#include <iostream>
using namespace std;

int sum(int n)
{
    if(n==0)
        return 0;
    else
        return (n%10)+sum(n/10);
}

int main()
{
    int n;
    cout << "Enter the number whose sum of digits is to be found: ";
    cin >> n ;
    cout << "The sum of digits of the number is " << sum(n);
    return 0;
}
