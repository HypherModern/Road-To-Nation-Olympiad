//Perfect number is a number that have all its divisors equal to itself.
//For example, 6 is a perfect number because it is equal to 1 + 2 + 3.
//Write a program to find out if a number is a perfect number.

#include <iostream>
using namespace std;
int main()
{
    int num;
    cin >> num;
    int sum = 0;
    for (int i = 1; i <= num/2; i++)
    {
        if (num%i==0)
        {
            sum = sum + i;
        }
    }
    if (sum == num)
    {
        cout << "perfect number";
    }
    else
    {
        cout << "not a perfect number";
    }
    return 0;
}