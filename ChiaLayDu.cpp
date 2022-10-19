#include <bits/stdc++.h>
#define ll long long
#define db double
#define fi first
#define se second
#define pp pair<ll,ll>
#define sp setprecision
#define pb push_back

const ll N = 1e3+1;
const ll oo = 1e17;
const ll mod = 1e9+7;

using namespace std;

ll n, a, m;

int main(){

    cin >> n >> a >> m;
    ll ans = ((n*(n+1)/2)*a) % m;
    cout << ans;

}
//Baolee K6 Tin 
//THPT Chuyen Chu Van An - Binh Dinh