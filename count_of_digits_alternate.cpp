#include <iostream>
using namespace std;

int count(long long n)
{
    if(n==0)
        return 0;
    else
        return 1+count(n/10);
}

int main()
{
    long long n;
    cout << "Enter the number whose count of digits is to be found: ";
    cin >> n ;
    cout << "The count of digits of the number is " << count(n);
    return 0;
}
