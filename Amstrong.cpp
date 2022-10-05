//Amstrong number is a number that is the sum of its own digits raised to the power of the number of digits.
//For example, 371 is an Armstrong number because 3 + 7 + 1 = 371.
//Write a program to find out if a number is an Armstrong number.

#include <iostream>
using namespace std;
int main()
{
    int num;
      cin >> num;
    int sum = 0;
    int temp = num;
    int count = 0;
      while (temp != 0)
      {
          count++;
          temp = temp/10;
      }
    temp = num;
      while (temp != 0)
      {
          sum = sum + pow(temp%10,count);
          temp = temp/10;
      }
        if (sum == num)
        {
            cout << "armstrong number";
        }
        else
        {
            cout << "not an armstrong number";
        }
    return 0;
}