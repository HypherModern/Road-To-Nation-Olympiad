#include <bits/stdc++.h>
#define ll long long
using namespace std;
const ll N=3e5+7;
bool d[N] = {false};
ll n,k,res;
void xoa(ll a)
{   d[a]=true;
    ll k = a+a;,
}
int main()
{

    freopen("DELELEMENT.INP","r",stdin);
    freopen("DELELEMENT.OUT","w",stdout);
    cin>>n>>k;
    for (ll i=1; i<=k; i++)
    {
        ll x; cin>>x;
        sang(x);

    }
    for (ll i=1; i<=n; i++)
    {
        if (d[i]==false) res++;
    }
    cout<<res;
    return 0;
}
