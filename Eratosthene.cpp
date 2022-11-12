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

ll n, a[N];
bool kt[N] = {true};

void eratosthenes(ll n){

    for(ll i = 2; i <= n; i++) a[i] = i;
    for(ll i = 2; i <= floor(sqrt(n)); i++)
        if (a[i] == true)   
            for(j = j*j; j <= n; j+=a[i]) kt[j] = false;
    for ll(i = 2; i <= n; i++) if (kt[i]) cout << a[i] << " ";

}

int main(){

    cin >> n;


    eratosthenes(n);

} 
