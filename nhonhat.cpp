#include <bits/stdc++.h>
#define ll long long
#define db double
#define fi first
#define se second
#define pp pair<ll,ll>
#define ump unordered_map<ll,ll>
#define mp map<ll,ll>
#define sp setprecision
#define pb push_back
#define lb lower_bound
#define up upper_bound

const ll N = 1e6+1;
const ll oo = 1e17;
const ll mod = 1e9+7;

using namespace std;

ll n, a[N], maxx;

int main(){

    mp hash;
    cin >> n;
    while(n--){

        ll k; 
        cin >> k;
        hash[k] = 1;

    }
    for(ll i = 0; i < 1e9; i++)
        if (hash[i] == 0){

            cout << i;
            return 0;

        }
        
}

//Baolee K6 Tin
//THPT Chuyen Chu Van An - Binh Dinh
/* Problem: */