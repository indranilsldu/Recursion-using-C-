
#include <iostream>
using namespace std;

void disp(int n)
{
    if(n==0)
        return;
    else
        disp(n-1);
        cout << n << "\n";
}

int main()
{
    int n;
    cout << "First ten natural numbers: ";
    cin >> n;
    disp(n);
    return 0;
}
