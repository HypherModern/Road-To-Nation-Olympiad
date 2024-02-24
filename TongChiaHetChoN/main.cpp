#include <bits/stdc++.h>
#define ll long long

const ll MOD = 1e9+7;

using namespace std;

ll m, n, a[5001], dp[5001][5001] = {0};

int main(){

    cin >> m >> n;
    for(ll i = 1; i <= m ; i++) cin >> a[i], a[i] %= n;
    dp[0][0] = 1;
    for(ll i = 1; i <= m; i++)
    for(ll j = 0; j <= n; j++)
        dp[i][j] = (dp[i-1][j] + dp[i-1][(j-a[i]+n)%n]) % N;

    cout << (dp[m][0]-1) % N;
    return 0;
}
