#include <bits/stdc++.h>
#define ll long long

using namespace std;

ll n, m, q, l, r, mx;

int main(){

    cin >> n >> m;
    ll a[n+1] = {0};
    for(ll i = 1; i <= m; i++){

        cin >> l >> r;
        a[l]++;
        a[r+1]--;
        mx = max(mx, r);

    }

    for(ll i = 1; i <= n; i++) a[i] = a[i-1] + a[i];
    sort(a + 1, a + mx + 1);

    cin >> q;
    while(q--){

        ll x, d = 0, u;
        cin >> x;
        u = lower_bound(a + 1, a + mx + 1, x) - a - 1;
        if (u != -1) d +=(mx - u);
        cout << d << endl;

    }

    return 0;
}

// Problem: https://oj.vnoi.info/problem/cvabdi_dn201701
