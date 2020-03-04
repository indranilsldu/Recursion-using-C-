#include <iostream>
using namespace std;

long int power(int x,int y)
{
    if(y==1)
        return x;
    else
        return x*power(x,y-1);
}

int main()
{
    int x, y;
    cout << "Enter the first number raised to second number: ";
    cin >> x >> y;
    long int res = power(x,y);
    cout << "The power of the first number raised to second number is " << res;
    return 0;
}

