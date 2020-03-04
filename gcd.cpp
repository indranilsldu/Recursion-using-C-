#include <iostream>
using namespace std;

int gcd(int x, int y)
{
    if(x==y)
        return x;
    else if(x>y)
        return gcd(x-y,y);
    else
        return gcd(x,y-x);
}

int main()
{
    int x, y;
    cout << "Enter the numbers whose gcd is to be found: ";
    cin >> x >> y;
    cout << "The gcd of the numbers is " << gcd(x,y);
    return 0;
}
