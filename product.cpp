#include <iostream>
using namespace std;

long int prod(int x,int y)
{
    if(y>x)
        return prod(y,x);
    else if(y==1)
        return x;
    else
        return x+prod(x,y-1);
}

int main()
{
    int x, y;
    cout << "Enter the numbers whose product is to be found: ";
    cin >> x >> y;
    long int res = prod(x,y);
    cout << "The product of the numbers is " << res;
    return 0;
}

