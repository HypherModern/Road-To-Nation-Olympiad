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
const ll N = 1e5+10;
const ll oo = 1e17;
const ll mod = 1e9+7;

using namespace std;

ll n, a[N];

int main(){
	
	FR;
	
    freopen("CASSIA.INP","r",stdin);
    freopen("CASSIA.OUT","w",stdout);
    
    cin >> n;
    for(ll i = 1; i <= n; i++) cin >> a[i];
    sort(a+1,a+n+1);
    a[n+1] = a[n]+n;
    ll i = 1, j = 1, res = n-1;
    while(i <= n){
    	
    	while(a[j] <= a[i]+n-1) j++;
    	res = min(res,n-j+i);
    	i++;
    	
	}
	cout << res;
    
    return 0;
}

//Baolee K6 Tin
//THPT Chuyen Chu Van An - Binh Dinh
/* Problem: */

/**  /\_/\
 *  (= ._.)
 *  / >AC \>AC
**/

