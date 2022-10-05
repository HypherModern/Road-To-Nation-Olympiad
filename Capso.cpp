//Give a number K. Find the amount of number (a,b) that 1 <=a < b < K and a+b<=K.
//Input: First line contains an integer T, denoting the number of test cases. Then T test cases follow. Each test case contains an integer K.
//Output: Print how many pairs (a,b) exist such that 1 <=a < b < K and a+b<=K.
//Constraints: 1<=T<=100, 1<= K <= 100000
//Example:
//Input: 
//3
//2
//4
//5
//Output:
//0
//2
//4

#include <iostream>
#include <cmath>
using namespace std;
int main(){

    long long T;
    cin >> T;
    for (int i = 0; i < T; i++) {
        int K;
        cin >> K;
        long long count;
        if (K % 2 == 0) count =  (K*(K - 2)) / 4;
        else if (K % 2 == 1) count = pow(1.0*(K-1)/2, 2);
        cout << count << endl;
    }

}