#include <bits/stdc++.h>
#define ll long long
#define db double
#define fi first
#define se second
#define pp pair<ll,ll>
#define sp setprecision
#define pb push_back

const ll N = 1e5+1;
const ll oo = 1e17;
const ll mod = 1e9+7;

using namespace std;

ll binary(ll a[],ll l,ll r,ll x)
{
	ll mid;
	while(l<=r)
	{
		mid=(l+r)/2;
		if(a[mid]==x) return 1;
		if(a[mid]>=x) r=mid-1;
		else l=mid+1;
	}
	return 0;
}
int main()
{
	ll n,k,d=0,i,j;
	cin>>n>>k;
	ll a[n];

	for(i=1;i<=n;i++) cin>>a[i];
	sort(a+1,a+n+1);
	for(i=1;i<=n;i++)
	{
		ll x=a[i]-k;
		if(binary(a,1,n,x)==1)
		{
			cout<<x<<" "<<a[i];
			return 0;
		}
	}
	cout<<-1;
	
}

//Baolee K6 Tin
//THPT Chuyen Chu Van An - Binh Dinh