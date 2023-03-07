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
#define sqr(a) (a*a)
#define FR ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

const ll N = 1001;
const ll oo = 1e17;
const ll mod = 1e9+7;

using namespace std;

ll n, h, g, dp[3][N][N];
pp a[N], b[N];

int cost(pp a, pp b){
	
	return sqr(a.fi - b.fi) + sqr(a.se - b.se);
	
}

int main(){

    // freopen("INPUT.INP","r",stdin);
    // freopen("OUTPUT.OUT","w",stdout);

	cin >> h >> g; 
	for(ll i = 1; i <= h; i++) cin >> a[i].fi >> a[i].se;
	for(ll i = 1; i <= g; i++) cin >> b[i].fi >> b[i].se;
	memset(dp,0x3f,sizeof(dp)); // +oo
	//memset(dp,0xcf,sizeof(dp)) -oo
	for(ll i = 2; i <= )
	
    return 0;
}

//Baolee K6 Tin
//THPT Chuyen Chu Van An - Binh Dinh
/* Problem: https://oj.vnoi.info/problem/cvabdi_ltt3 */

/**  /\_/\
 *  (= ._.)
 *  / >AC \>AC
**/

