#include <bits/stdc++.h>
#define ll long long
#define db double
#define fi first
#define se second
#define pp pair<ll,ll>
#define um unordered_map<ll,ll>
#define mp map<ll,ll>
#define pq priority_queue<ll, vector<ll>>
#define spq priority_queue<ll, vector<ll>, greater<ll>> 
#define sp setprecision
#define bp pop_back
#define pb push_back
#define ph push
#define lb lower_bound
#define up upper_bound

const ll N = 1e3+1;
const ll oo = 1e17;
const ll mod = 1e9+7;

using namespace std;

ll m, n, k;

int countWays(ll n, ll k, ll m) {
    ll dp[k+1][n+1];
    for (ll i = 0; i <= k; i++) {
        for (ll j = 0; j <= n; j++) {
            if (i == 1) { 
                dp[i][j] = 1;
            } else if (j == 0) {
                dp[i][j] = 1;
            } else {
                dp[i][j] = 0;
                for (ll p = 0; p <= min(j,k); p++) { 
                    dp[i][j] += dp[i-1][j-p]; 
                }
            }
        }
    }
    return dp[k][n];
}

int main(){

    // freopen("INPUT.INP","r",stdin);
    // freopen("OUTPUT.OUT","w",stdout);

    cin >> n >> m >> k;
    cout << countWays(n, k, m);

    return 0;
}

//Baolee K6 Tin
//THPT Chuyen Chu Van An - Binh Dinh
/* Problem: */