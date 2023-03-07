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

const ll N = 1e5+1;
const ll oo = 1e17;
const ll mod = 1e9+7;

using namespace std;

ll n, a[N], b[N];
bool check = true;

int main(){

    // freopen("INPUT.INP","r",stdin);
    // freopen("OUTPUT.OUT","r",stdout);

    cin >> n;
    for(ll i = 1; i <= n; i++){

        cin >> a[i];
        b[i] = a[i];

    }
    sort(b,b+n+1);
    for(ll i = 1; i <= n; i++){

        if (abs(b[i]-a[i]) > 1) check = false;

    }
    
    if (check) cout << "YES";
    else cout << "No";

    return 0;
}

//Baolee K6 Tin
//THPT Chuyen Chu Van An - Binh Dinh
/* Problem: https://oj.vnoi.info/problem/cvabdi_ld1 */