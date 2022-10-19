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
ll a, b, c, d;

ll count(ll a, ll b, ll c){

    ll n = a / b;
    ll m = a / c;
    ll p = a / ((b*c) / gcd(b,c));
    return n+m-p;

}

int main(){

    cin >> a >> b >> c >> d;
    cout << (b - a + 1) - (count(b,c,d) - count(a-1,c,d));
    return 0;

}
//Baolee K6 Tin
//THPT Chuyen Chu Van An - Binh Dinh