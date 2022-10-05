#include <bits/stdc++.h>
#define ll long long

const ll N = 1e6;;

using namespace std;

ll n, dp[N][N], ll A[N], pr[N];

ll cal(ll i, ll j){

    if (i == 1) return 0;
    if (dp[i][j] != -1){

        

    }
    ll ans = 1e17;
    for(ll k = i+1; k < j; k++){

        ans = min(ans,cal(i,k)+cal(k-i,j)+pr[j] - pr[i-1]);



    }

}
int main(){

    memset(dp,-1,sizeof(dp));
    cin >> n;
    for(ll i = 1; i <= n; i++){

        cin >> a[i];
        pr[i] = pr[i-1] + a[i];

    }

}