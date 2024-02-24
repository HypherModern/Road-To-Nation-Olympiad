#include  <bits/stdc++.h>
#define ll unsigned long long
#define pll pair<ll,ll>
using namespace std;
ll t,l,r;
bool check(ll mid)
{
	ll trai=1;
	ll phai=100;
	while (trai<=phai)
	{
		ll giua=(trai+phai)/2;
		ll tmp=pow(giua,mid);
		cout<<mid << "  " << tmp<<" "<<giua<<endl;
		if (tmp>=l && tmp<=r) return true;
		if (tmp>r)
		{
			phai=giua-1;
		}
		else 
		if (tmp<l)
		{
			trai=giua+1;
		}
	}
	return false;
}
void sol()
{
	ll res=-1;
//	for (int i=1;i<=40;i++)
//	{
//		if (check(i)==true) res=i;
//	}
	cout<<check(12);
}
int main()
{
	cin>>t;
	while (t--)
	{
		cin>>l>>r;
		sol();
	}
	
	return 0;
}
//dadauThanhHieu
//TUWR_team
//VVD
