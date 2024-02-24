# include<bits/stdc++.h>
#define ll long long

using namespace std;

ll x, y;

ll tuoc(ll n){

    ll res = 0;
    for(ll i = 1; i <= sqrt(n); i++)
        if (n % i == 0) res+= i, res += n / i;
    ll a=sqrt(n);
    if (a * a == n) res -= a;

    return res;
}

int main(){


    freopen("ABU.INP","r",stdin);
    freopen("ABU.OUT","w",stdout);

    cin >> x >> y;
    ll ux = tuoc(x), uy = tuoc(y);
    ll ucln = __gcd(x, ux);
    if (ux * y == uy * x) cout << ux / ucln << "\n" << x / ucln;
    else cout << -1;

    return 0;
}
