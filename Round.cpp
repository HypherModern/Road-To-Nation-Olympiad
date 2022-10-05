//Input an number N, 0<= N <= 1000000000.
//Round N to the nearest integer smaller or larger that is a multiple of 10.
//Output the rounded number.
//Input: 5 Output: 10
//Input: 15 Output: 20
//Input: 113 Output: 110
//Input: 1237 Output: 1240

#include <iostream>
using namespace std;
int main() {

    int N;
    cin >> N;
    int X = N % 10;
    if (X <= 5) {
        N = N - X;
    } else {
        N = N + (10 - X);
    }
    cout << N << endl;

}
