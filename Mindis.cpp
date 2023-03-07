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

ll n, a[N], mn = INT_MAX, mx = INT_MIN;

int mindist(int x, int y){
         
    ll p = -1, minDist = INT_MAX;
    for(ll i = 1; i < n ; i++){

        if (a[i] == x || a[i] == y){
            
            if (p != -1 && a[i] != a[p])
                minDist = min(minDist , i-p);
            p=i;
        }
    }
 
    return minDist+1;
}

int main(){

    // freopen("INPUT.inp","r",stdin);
    // freopen("OUTPUT.OUT","r",stdout);

    cin >> n;
	for(ll i = 1; i <= n; i++){

		cin >> a[i];
		if (a[i] < mn) mn = a[i];
		if (a[i] > mx) mx = a[i];

	}
	cout << mindist(mn, mx);

    return 0;
}

//Baolee K6 Tin
//THPT Chuyen Chu Van An - Binh Dinh
/* Problem: https://oj.vnoi.info/problem/cvabdi_tdc */