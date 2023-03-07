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

const ll N = 1e3+1;
const ll oo = 1e17;
const ll mod = 1e9+7;

using namespace std;

ll findsum(ll a[], ll i, ll s, ll sum){

    if (i == 0) return abs((sum - s) - s);

    return min(findsum(a, i-1, s + a[i-1], sum), findsum(a, i - 1, s, sum));

}

ll find(ll a[], ll n){

    ll sum = 0;
    for(ll i = 0; i < n; i++) 
        sum += a[i];
    
    return findsum(a, n, 0, sum);

}

ll n, a[N];

int main(){

    cin >> n;
    for(ll i = 0; i < n; i++) cin >> a[i];
    cout << find(a, n);

    return 0;
}

//Baolee K6 Tin
//THPT Chuyen Chu Van An - Binh Dinh
/* Problem: https://oj.vnoi.info/problem/cvabdi_chiakeo */