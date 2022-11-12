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

int solve(ll arr[], ll n){

    unordered_map<ll,ll> hash;
    for(ll i = 1; i <= n; i++){

        hash[arr[i]]++;

    }
    for(auto x : hash){

        if (x.se % 3 != 0) 
            return x.fi;

    }

}

int main(){

    cin >> n;
    for(ll i = 1; i <= n; i++) cin >> A[i];
    cout << solve(A,n);

}

//Baolee K6 Tin
//THPT Chuyen Chu Van An - Binh Dinh