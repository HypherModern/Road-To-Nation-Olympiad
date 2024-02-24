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
const ll N = 1e5+7;
const ll oo = 1e17;
const ll mod = 1e9+7;

using namespace std;

ll n, ans;
int a[N];
int T[4 * N];

void build(int id, int l, int r) {
	if (l == r) {
		T[id] = a[l];
		return;
	}
	
	int m = (l + r) >> 1;
	build(id * 2, l , m);
	build(id * 2 + 1, m + 1 ,r);
	
	T[id] = max(T[id * 2], T[id * 2 + 1]);
}

int getmax(int id, int l,int r,int u,int v) {
	if (r<u || l>v) return -1e9;
	
	if (u<=l && r<=v) return T[id];
	
	int m = (l + r) >> 1;
	
	return max(getmax(id*2,l,m,u,v),getmax(id*2+1,m+1,r,u,v));	
}

int fi(int i, int j) {
	int l = i , m , r = j;
	int id = i;
	
	while(l <= r) {
		m = (l + r) >> 1;
		if (getmax(1,1,n,m,j) == a[j]) {
			id = m;
			r = m - 1;
		}
		else l = m + 1;
	} 	
	
	return (j - id + 1);
}

int fi1(int i, int j) {
	int l = i , m , r = j;
	int id = i;
	
	while(l <= r) {
		m = (l + r) >> 1;
		if (getmax(1,1,n,i,m) == a[i]) {
			id = m;
			l = m + 1;
		}
		else r = m - 1;
	} 	
	
	return (id - i + 1) + ();	
}

void sub12(long long m) {
	for(int i = 1 ; i <= m ; i++) {
		ll l, r;
		cin >> l >> r;
		
		ans = 0;
		
		for(int i = 1 ; i <= n ; i++) 
			if (a[i] >= l && a[i] <= r) {
				ans += (fi(1,i) * fi1(i,n));
				//cout << fi(1,i) << ' ' << fi1(i,n) << endl;
			}
				
		cout << ans << '\n';
	}	
}

void sub3(long long m) {
	for(int i = 1 ; i <= m ; i++) {
		ll l, r;
		cin >> l >> r;
		
		ans = 0;
	}
	
	cout << ans << '\n';
}

int main(){
    // freopen("INPUT.INP","r",stdin);
    // freopen("OUTPUT.OUT","w",stdout);
	cin >> n;
	for(int i = 1 ; i <= n ; i++) cin >> a[i];
	long long m;
	cin >> m;
	if (m * n <= 1e6) sub12(m);
	else sub3(m);
    return 0;
}


