#include <bits/stdc++.h>

#define ll long long
#define db double
#define fi first
#define se second
#define pp pair<ll,ll>
#define sp setprecision
#define pb push_back

const ll N = 1e2+1;
const ll oo = 1e17;
const ll mod = 1e9+7;

using namespace std;

ll n,m;
ll w[N+10], v[N+10], a[N+10], dp[10001]={0};

int main(){

	cin >> n >> m;

	for(ll i=1;i<=n;i++) cin >> w[i] >> v[i] >> a[i];

	for(ll i=1;i<=n;i++){

		for(ll j=m;j>=w[i];j--){

			ll t=min(a[i],j/w[i]);
			    for(ll z=0;z<=t;z++)
			        if(dp[j]<dp[j-z*w[i]]+z*v[i]) dp[j]=dp[j-z*w[i]]+z*v[i];

		}

	}
	cout<<dp[m]<<endl;

}

//Baolee K6 Tin
//THPT Chuyen Chu Van An - Binh Dinh