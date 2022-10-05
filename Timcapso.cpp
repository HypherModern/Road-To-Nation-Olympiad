#include <iostream>

using namespace std;

// input an number K, output the amount pair of numbers (a,b) that 1 <= a < b < K and a + b <= K
int main()
{
    int K;
    cin >> K;
    int count = 0;
    for (int a = 1; a < K/2; a++)
    {
        for (int b = a + 1; b < K/2+1; b++)
        {
            if (a + b <= K)
            {
                count++;
            }
        }
    }
    cout << count << endl;
}