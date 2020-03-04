#include <iostream>
using namespace std;

long int fact(int n)
{
    if(n==1)
        return 1;
    else
        return n*fact(n-1);
}

int main()
{
    int n;
    cout << "Enter the number whose factorial is to be found: ";
    cin >> n ;
    long int res = fact(n);
    cout << "The factorial of the number is " << res;
    return 0;
}
