#include<iostream>
#include<string>
using namespace std;
void reverse(char *str)
{
    if (*str)
    {
        reverse(str+1);
        cout << *str;
    }
}

int main()
{
    char str[50];
    cout << "Enter the string to be reversed:\n";
    cin.get(str, 50);
    //char *a = "123 abc";
    cout << "The reversed string is: ";
    reverse(str);
    return 0;
}
