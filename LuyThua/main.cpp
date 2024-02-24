#include <bits/stdc++.h>
#define ll long long

const ll MOD = 1e9 + 7;

using namespace std;

string B;
ll A;

ll power_modulo(ll A, string B) {
    ll len = B.length();
    ll result = 1;
    ll base = A % MOD;

    for (ll i = len - 1; i >= 0; i--) {
        ll digit = B[i] - '0';
        for (ll j = 0; j < 3; j++) {
            if (digit & (1 << j)) {
                result = (result * base) % MOD;
            }
            base = (base * base) % MOD;
        }
    }
    return result;
}

int main(){

    cin >>  A >> B;
    cout << power_modulo(A, B);

    return 0;
}
