#include <bits/stdc++.h>
#define ll long long
#define N = 1e5+1

using namespace std;

ll n, k, a[N];

ll fac(ll i){

    if (i == 0) return(1);
    else return(i*fac(i-1));

}
ll process(ll m, ll i){

    return(fac(m) / (fac(i)*fac(m-i)))

}
int main(){

    freopen("SILICON.INP","r",stdin)
    cin >> n >> k;
    for(ll i = 1; i <= n; i++){

        a[i] = i;

    }
    ll res = process(n,k);
    for(ll i = 1; i <= n; i++){

        for(ll j = i+1)

    }

}