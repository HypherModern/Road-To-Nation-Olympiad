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

const ll N = 1e5+1;
const ll oo = 1e17;
const ll mod = 1e9+7;

using namespace std;

ll n, m, x;
ll a[N];
mp hashmap;

int main(){

    cin >> n >> m; 
    for(ll i = 0; i < 1e5+1; i++) hashmap[i]++;
    for(ll i = 0; i < n; i++){
        
        cin >> a[i];
        hashmap[a[i]]++;
    
    }

    while(m--){

        cin >> x;
        for(auto y : hashmap){

            if (y.fi == x){

                if (y.se != 0) cout << y.se-1 << endl;
                else cout << 0 << endl;
                break;

            }

        }

    }

    return 0;
}

//Baolee K6 Tin
//THPT Chuyen Chu Van An - Binh Dinh
/* Problem: https://oj.vnoi.info/problem/cvabdi_ltt */