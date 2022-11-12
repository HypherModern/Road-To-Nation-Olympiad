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

ll n, a[N];

ll BinarySearch(ll a[],ll n){

    ll vtri, d = 2, c = n;
    while(d <= c){

        ll g = (d + c) / 2;
        if (a[g] == 1) d = g+1;
        else c = g-1;
        vtri = g;

    }
    return vtri;

}

int main(){

    cin >> n;
    for(ll i = 1; i <= n; i++) cin >> a[i];
    cout << BinarySearch(a,n);
    return 0;

}

//Baolee K6 Tin
//THPT Chuyen Chu Van An - Binh Dinh