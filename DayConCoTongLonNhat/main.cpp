#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll n,ans = INT_MIN,t=0;
ll a[1000001];
void xuly()
{
    for(ll i=1; i<=n; i++)
    {
        t=max(a[i], t+a[i]);
        ans=max(ans, t);
    }
    cout<<ans;
}
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    freopen("DAYCON.INP", "r", stdin);
    freopen("DAYCON.OUT", "w", stdout);
    cin>>n;
    for(ll i=1; i<=n; i++) cin>>a[i];
    xuly();
	return 0;
}
