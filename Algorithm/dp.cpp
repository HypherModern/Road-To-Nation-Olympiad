#include <bits/stdc++.h>
#define ll long long
#define db double
#define fi first
#define se second
#define pp pair<ll,ll>
#define um unordered_map<ll,ll>
#define mp make_pair
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
const ll N = 3e5 + 7;
const ll oo = 1e17;
const ll mod = 1e9+7;

using namespace std;

int par[N], n, ans[N];

int fi(int a) {
	if (par[a] == 0)
		return a;
	
	return par[a] = fi(par[a]);
}

void query() {
	cin >> n;
	
	for(int x, u , i = 1 ; i <= n ; i++) {
		cin >> x;
			
		u = fi(x);
		
		ans[i] = u;
		
		par[x] = (x + 1 == n ? n : (x + 1) % n);
		
		par[u] = (u + 1 == n ? n : (u + 1) % n);
	}
	
	for(int i = 1 ; i <= n ; i++)
		cout << ans[i] << ' ';
}
	
int main(){
    // freopen("INPUT.INP","r",stdin);
    // freopen("OUTPUT.OUT","w",stdout);
	int t = 1;
	//cin >> t;
	while(t--) query();
    return 0;
}


