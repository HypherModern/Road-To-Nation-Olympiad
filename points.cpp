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

const ll N = 2e5+1;
const ll oo = 1e17;
const ll mod = 1e9+7;

using namespace std;

ll n, k, a[N], b[N];

int main(){

    // freopen("INPUT.INP","r",stdin);
    // freopen("OUTPUT.OUT","w",stdout);

	cin >> n >> k;
	for(ll i = 1; i <= n; i++) cin >> a[i];
	for(ll i = 1; i <= k; i++) cin >> b[i];
	
	sort(b+1, b+k+1);
	
	ll pos = 1;
	
	for(ll i = 1; i <= n; i++){
		
		if (i == b[pos]) a[i] = a[i] + k - 1, pos++;
		else a[i] += k;
		
	}
	
	for(ll i = 1; i <= n; i++) cout << a[i] << " ";
	
    return 0;
}

//Baolee K6 Tin
//THPT Chuyen Chu Van An - Binh Dinh
/* Problem: https://oj.vnoi.info/problem/fcb049_points */

