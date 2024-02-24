#include <bits/stdc++.h>
#define ll long long

const ll N = 1e5+1;

using namespace std;

ll n, a[N], x;

int main(){

    cin >> n;
    for(ll i = 1; i <= n; i++){

        ll x, y;
        cin >> x >> y;
        a[i] = x * 60 + y;

    }
    sort(a+1, a+n+1);
    ll cnt = 1;
    for(ll i = 1; i <= n; i++) if (a[i] == a[i+1]) cnt++;

    cout << cnt;

    return 0;
}
