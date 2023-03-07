#include <bits/stdc++.h>
#define ll long long
#define db double
#define fi first
#define se second
#define pp pair<ll,ll>
#define mp unordered_map<ll,ll>
#define sp setprecision
#define pb push_back
#define lb lower_bound
#define up upper_bound

const ll N = 2001;
const ll oo = 1e17;
const ll mod = 1e9+7;

using namespace std;

ll x[N], y[N];
ll n;

int solve(ll x[], ll y[], ll n){

    map<pp,ll> cnt;
    for(ll i = 0; i < n; i++)
        for(ll j = i+1; j < n; j++){

            ll midX = x[i] + x[j];
            ll midY = y[i] + y[j];
            cnt[make_pair(midX, midY)]++;

        }
    ll res = 0;
    for(auto i = cnt.begin(); i != cnt.end(); i++){

        ll ans = i->se;
        res += ans*(ans-1)/2;

    }
    return res;

}

int main(){

    cin >> n;
    for(ll i = 0; i < n; i++) cin >> x[i] >> y[i];
    cout << solve(x, y, n);
    return 0;

}

//Baolee K6 Tin
//THPT Chuyen Chu Van An - Binh Dinh
/* Problem: https://oj.vnoi.info/problem/cvabdi_dhbh */  