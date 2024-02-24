#include <bits/stdc++.h>
#define ll long long

const ll N = 1e5+1;

using namespace std;

ll n, a[N], d = 0;;

int main(){

    cin >> n;
    for(ll i = 1; i <= n; i++) cin >> a[i];
    sort(a+1, a+n+1);

    for(ll i = 1; i <= n; i++){

        ll u = lower_bound(a+1, a+n+1, 0.9*a[i]) - a;
        if (u < i && a[u] <= a[i]) d += i-u;

    }

    cout << d;

    return 0;
}
