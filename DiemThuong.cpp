#include <bits/stdc++.h>
#define ll long long
#define db double
#define fi first
#define se second
#define pp pair<ll,ll>
#define um unordered_map<ll,ll>
#define mp map<ll,ll>
#define pq priority_queue<ll, vector<ll>>
#define spq priority_queue<ll, vector<ll>, greater<ll>> 
#define sp setprecision
#define bp pop_back
#define pb push_back
#define ph push
#define lb lower_bound
#define up upper_bound

const ll N = 5e6+1;
const ll oo = 1e17;
const ll mod = 1e9+7;

using namespace std;

ll a[N], b[N], res = 0, m, n;

int main(){


    // freopen("BPOINTS.INP","r",stdin);
    // freopen("BPOINTS.OUT","w",stdout);
    cin >> m >> n;
    for(ll i = 1; i <= m; i++) cin >> a[i];
    for(ll i = 1; i <= n; i++){

        ll j = 1;
        cin >> b[i];
        if (a[j] < b[i]){

            while(a[j] < b[i]) j++;
            res += m-j+1;

        }
        else res += n;

    }
    cout << res;

    return 0;
}

//Baolee K6 Tin
//THPT Chuyen Chu Van An - Binh Dinh
/* Problem:https://oj.vnoi.info/problem/hoclentop_prehsg11_1_b2 */