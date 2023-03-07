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

ll m, n, a[N], prefixsum[N], ans;

bool check(int L) {
    for (int i = 1; i <= n - L; i++) {
        if (prefixsum[i + L] - prefixsum[i] < m) {
            return false;
        }
    }
    return true;
}

int main(){

    // freopen("INPUT.INP","r",stdin);
    // freopen("OUTPUT.OUT","w",stdout);

	cin >> m >> n;
    for (ll i=1; i<=n; i++){
    	
	  	cin >> a[i];
    	prefixsum[i] = prefixsum[i-1] + a[i];
    	
	}
	ll l = 1, r = n;
	while (l<=r){
		
		ll mid=(l+r)/2;
		if (check(mid)==1){
			
		  ans = mid; 
		  r = mid-1;
		  
		}
		   else l=mid+1;
		   
	}
	cout << ans;
    return 0;

    return 0;
}

//Baolee K6 Tin
//THPT Chuyen Chu Van An - Binh Dinh
/* Problem: https://oj.vnoi.info/problem/cvabdi_lk1 */

