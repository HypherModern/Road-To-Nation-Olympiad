#include <bits/stdc++.h>
#define ll long long
#define db double
#define fi first
#define se second
#define pp pair<ll,ll>
#define sp setprecision
#define pb push_back

const ll N = 1e6+1;
const ll oo = 1e17;
const ll mod = 1e9+7;

using namespace std;

ll n, A[N];

void solve(){

    ll ones = 0, twos = 0, chung;
    for(ll i = 1; i <= n; i++){

        twos = twos | (ones & a[i]);
        ones = ones ^ a[i];
        chung = ~(ones & two);
        ones = ones & chung;
        twos = twos & chung;

    }
    cout << ones;

}

int main(){

    cin >> n;
    for(ll i = 1; i <= n; i++){

        cin >> a[i];

    }
    solve();

}

//Baolee K6 Tin
//THPT Chuyen Chu Van An - Binh Dinh