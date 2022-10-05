#include <bits/stdc++.h> 
#define ll long long 
const ll N = 1e3 + 1;
const ll M = 1e9 + 7;

using namespace std;

ll h, w;
string s[N][N], k;

int main(){

    cin >> h >> w;

    for(ll i = 1; i <= h; i++){

        cin >> k;
        for (ll j = 1; j <= w; j++) s[i][j] = k[j-1];

    }

    ll dp[N][N];
    for (ll i = 0; i <= h; i++) for (ll j = 0; j <= w; j++) dp[i][j] = 0;

    for (ll i = 1; i <= h; i++){

        for(ll j = 1; j <= w; j++){

            dp[1][1] = 1;
            if (s[i][j] == ".") dp[i][j] = (dp[i-1][j] + dp[i][j-1]) % M;

        }

    }
    cout << dp[h][w];

    return 0;

}