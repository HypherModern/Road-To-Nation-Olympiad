//A number A called a near perfect number if 2*A <= K, which K is sum of A's divisors.

#include <iostream>
#include <cmath>
using namespace std;
int main(){
    long long N;
    cin >> N;
    long long A[N];
    long long B[N];
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }
    int d = 0;
    for (int i = 0; i < N; i++) {
        int sum = A[i];
        for (int j = 1; j <= A[i]/2; j++) {
            if (A[i] % j == 0) {
                sum += j;
            }
        }
        if (2*A[i] <= sum) {
            d++;
            B[d] = A[i];
        }
    }
    cout << d << endl;
    for (int i = 1; i <= d; i++) {
        cout << B[i] << endl;
    }
}