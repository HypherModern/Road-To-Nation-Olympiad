#include <bits/stdc++.h>
#define ll long long
#define db double
#define fi first
#define se second
#define pp pair<ll,ll>
#define sp setprecision
#define pb push_back

const ll N = 1e7+1;
const ll oo = 1e17;
const ll mod = 1e9+7;

using namespace std;

ll x, y, n;
ll f[6] = {0};

int main(){

    cin >> x >> y;
    cin >> n;
    f[0] = x % mod;
    f[1] = y % mod;
    for(ll i= 2;i < 6;i++){
        ll tmp = f[i-1] - f[i-2];
        f[i] = tmp % mod;
    }
    n %= 6;
    if (n == 0) n = 6;
    if (f[n-1] >= 0) cout << f[n-1];
    else cout << mod + f[n-1];

    return 0;

}

//Baolee K6 Tin
//THPT Chuyen Chu Van An - Binh Dinh