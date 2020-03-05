/*Number of ways in which n steps in stairs can be climbed*/

#include <iostream>
using namespace std;

int step(int n)
{
    if(n==1)
        return 1;

    else if(n==2)
        return 2;

    else if(n==3)
        return 4;

    else
        return step(n-1)+step(n-2)+step(n-3);
}

int main()
{
    int n;
    cout << "Enter the number of steps: ";
    cin >> n ;
    cout << "The total no of ways stairs can be climbed is " << step(n);
    return 0;
}
