#include <bits/stdc++.h>
#define ll long long
#define db double
#define fi first
#define se second
#define pp pair<ll,ll>
#define sp setprecision
#define pb push_back

const ll N = 1e6;
const ll oo = 1e17;
const ll mod = 1e9+7;

using namespace std;

ll n, dp[N][3];

int main(){

    cin >> n;
    dp[1][0] = 1; dp[1][1] = 1;
    for(ll i = 2; i <= n; i++){

        dp[i][0] = dp[i-1][0]+dp[i-1][1];
        dp[i][1] = dp[i-1][0];

    }
    cout << dp[n][0] + dp[n][1]; 

}

//Baolee K6 Tin
//THPT Chuyen Chu Van An - Binh Dinh