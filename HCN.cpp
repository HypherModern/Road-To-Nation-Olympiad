//Write a program to find out greatest  common divisor of 2 numbers.

#include <iostream>
using namespace std;
int main()
{
    int a,b;
    cin >> a;
    cin >> b;
    int c = a;
    while (c != 0)
    {
        if (a%c==0 && b%c==0)
        {
            cout << c;
            break;
        }
        c--;
    }
    return 0;
}