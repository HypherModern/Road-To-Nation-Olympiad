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
#define FR ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

const ll N = 1e5+1;
const ll oo = 1e17;
const ll mod = 1e9+7;

using namespace std;

ll n, d = 0;
pp a[N];

bool cmp(pp a, pp b){
	
	return (abs(a.fi - a.se) < abs(b.se - b.fi));
	
}

int main(){

    // freopen("INPUT.INP","r",stdin);
    // freopen("OUTPUT.OUT","w",stdout);

	cin >> n;
	for(ll i = 1; i <= n; i++) cin >> a[i].fi >> a[i].se;
	sort(a+1, a+n+1, cmp);
	for(ll i = 1; i < n; i++)
    	for(ll j = i+1; j <= n; j++)
      		if(a[i].second < a[j].second && a[i].first > a[j].first ){ d++; break; }
      		
	cout << d; 

    return 0;
}

//Baolee K6 Tin
//THPT Chuyen Chu Van An - Binh Dinh
/* Problem: https://oj.vnoi.info/problem/cvabdi_vtt2 */

/**  /\_/\
 *  (= ._.)
 *  / >AC \>AC
**/ 
