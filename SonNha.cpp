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
#define MultiTest while(T--)

const ll N = 21;
const ll oo = 1e17;
const ll mod = 1e9+7;

using namespace std;

ll T, r[N], g[N], b[N], R[N], G[N], B[N], n;

int main(){

    // freopen("INPUT.INP","r",stdin);
    // freopen("OUTPUT.OUT","w",stdout);

	cin >> T;
	MultiTest{
	
		cin >> n;
		for(ll i = 1; i <= n; i++) cin >> r[i] >> g[i] >> b[i];
		R[1] = r[1]; G[1] = g[1]; B[1] = b[1];
		for(ll i = 2; i <= n; i++){
				
			R[i] = min(G[i-1], B[i-1]) + r[i];	
			G[i] = min(R[i-1], B[i-1]) + g[i];
			B[i] = min(G[i-1], R[i-1]) + b[i];
		
		}
		
		cout << min(R[n], min(G[n], B[n])) << "\n";
		
	}
    return 0;
}

//Baolee K6 Tin
//THPT Chuyen Chu Van An - Binh Dinh
/* Problem: https://oj.vnoi.info/problem/cvabdi_cbh20172 */

/**  /\_/\
 *  (= ._.)
 *  / >AC \>AC
**/

