// input the present age of father and son such that father is older than son and find out how many years the father age will be twice the son age
#include <iostream>
using namespace std;
int main()
{
    int father_age,son_age;
      cin >> father_age;
      cin >> son_age;

    for (int i = 0; i < 100-father_age; i++)
    {
         if (father_age+i==(son_age+i)*2)
         {
             int flag = 1;
             cout << "father age will be twice the son age in " << i << " years";
             break;
         }
    }
     if (flag != 1)
     {
         cout << "father age will not be twice the son age";
     }
    return 0;
}