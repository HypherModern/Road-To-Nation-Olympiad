#include <bits/stdc++.h>
#define ll long long

using namespace std;

ll n, a[3];

int main(){

    cin >> n;
    for(int i = 1; i <= n; i++){

        ll x;
        cin >> x;
        a[x % 3]++;

    }
    ll res = (a[0] * a[0]-1) / 2 + a[1] * a[2];

    cout << "";

    return 0;
}