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

ll n, dp[N], a[N];

int main(){

    cin >> n;
    for(ll i = 1; i <=n ; i++) cin >> a[i];
    for(ll i = n+1; i <= n+6; i++) dp[i] = 0, a[i] = 0;
    for(ll i = n;i>=1;i--){
		dp[i]=max(dp[i+2]+a[i],max(dp[i+4]+a[i]+a[i+1],dp[i+6]+a[i]+a[i+1]+a[i+2]));
    }
    cout << dp[1];
    return 0;

}

//Baolee K6 Tin
//THPT Chuyen Chu Van An - Binh Dinh