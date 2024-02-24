#include <bits/stdc++.h>

using namespace std;

bool isPrime(int n) {
    if (n < 2) {
        return false;
    }
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {

    freopen("HPRIME.INP", "r", stdin);
    freopen("HPRIME.OUT", "w", stdout);

    int N;
    cin >> N;
    int count = 0;
    for (long long p = 2; pow(p, 2) < N; p++) {
        if (isPrime(p)) {
            count++;
        }
    }
    cout << count << endl;
    return 0;
}
