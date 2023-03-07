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

ll n, a[N], res = 0;

int main(){

    cin >> n;
    for(ll i = 1; i <= n; i++) cin >> a[i];
    if (n % 2 == 0) sort(a+1,a+n+1,greater<ll>());
    
    if (n % 2 ==0)
    for(ll i = 1; i < n; i++){

        if (a[i] % 2 == 0) res += a[i]-1;
        else res += a[i];

    }
    else 
    for(ll i = 1; i <= n; i++){

        if (a[i] % 2 == 0) res += a[i]-1;
        else res += a[i];

    }
    cout << res;

    return 0;
}

//Baolee K6 Tin
//THPT Chuyen Chu Van An - Binh Dinh
/* Problem: https://oj.vnoi.info/problem/ngutin_bouquet */