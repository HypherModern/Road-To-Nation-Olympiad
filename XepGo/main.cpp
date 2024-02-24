#include <bits/stdc++.h>
#define ll long long

const ll mod = 1e9 + 7;

using namespace std;

ll n, k, a[100001] , dp[100001];

int main(){

    cin >> n >> k;
    for(ll i = 1; i <= k; i++) cin >> a[i];

    dp[0] = 1;

    for(ll i = 1; i <= n; i++){

        for(ll j = 1; j <= k; j++)
            if (i > a[j]) dp[i] = (dp[i] + dp[i - a[j]]) % mod;

    }

    cout << dp[n];

    return 0;
}
