#include <bits/stdc++.h>
#define ll long long
#define N = 1e9+1
using pll=pair<ll,ll>;
using namespace  std;
ll n,m;
int main()
{
	cin>>n;
    ll a[n];
	for (int i=1;i<=n;i++) 
	{
        cin >> a[i];
	}
	sort(a,a+n);
	cin>>m;
	while (m--)
	{
		ll x,y;
		cin >> x >> y;        
		ll ans=0;
		ll u=lower_bound(a+1,a+n+1,x)-a;
		ll t=upper_bound(a+1,a+n+1,y)-a-1;
		if (u <= t) ans = t-u+1;
		cout << ans <<endl;
		
	}
	return 0;
} 

//Baolee K6 Tin
//THPT Chuyen Chu Van An - Binh Dinh