#include <bits/stdc++.h>
#define ll long long
#define db double
#define fi first
#define se second
#define pp pair<ll,ll>
#define sp setprecision
#define pb push_back

const ll N = 1e5+1;
const ll oo = 1e17;
const ll mod = 1e9+7;

using namespace std;

ll n, k, x, a[N];

int main(){

    cin >> n >> k >> x;
    for(ll i = 1; i <= n; i++) cin >> a[i];
    for(ll i = n; i >= k; i--) a[i+1] = a[i];
    a[k] = x;
    for(ll i = 1; i <= n+1; i++) cout << a[i] << " ";
    return 0;

}

//Baolee K6 Tin
//THPT Chuyen Chu Van An - Binh Dinh