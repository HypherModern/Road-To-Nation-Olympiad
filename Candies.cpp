#include <bits/stdc++.h>
#define ll long long

using namespace std;

const ll mod = 1e9 + 7;
const ll N = 1e5 + 1;
const ll M = 101;

ll n, k, a[M], dp[M][N];

int main (){

    cin >> n >> k;

    for (ll i=1; i <= n; i ++) cin >> a[i];
    for (ll i=0; i <= n; i++) dp[i][0] = 1;
    for (ll j=0; j <= k; j++) dp[0][j] = 1;
    for (ll i=1; i<= n; i++) {

        for (ll j=1; j <= k; j++) {

            if (i == 0 || j == 0) dp[i][j] = 1;
            if (j - a[i]>0) dp[i][j] = (dp[i-1][j] + dp[i][j-1] - dp[i-1][j - a[i] - 1]) % mod;
            else dp[i][j] = (dp[i-1][j] + dp[i][j-1]) % mod;

        }

    }
    cout << (dp[n][k] - dp[n][k-1]+mod) % mod;

    return 0;

}
