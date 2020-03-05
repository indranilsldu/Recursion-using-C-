#include <iostream>
using namespace std;
int count(long long n,int c)
{
    if(n==0)
        return c;
    else
        return count(n/10,c+1);
}

int main()
{
    long long n;
    int c=0;
    cout << "Enter the number whose count of digits is to be found: ";
    cin >> n ;
    cout << "The count of digits of the number is " << count(n,c);
    return 0;
}
