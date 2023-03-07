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

const ll N = 40;
const ll oo = 1e17;
const ll mod = 1e9+7;

using namespace std;

ll sum, n, a[N];

ll find(){

	um pre;
	ll res = 0, presum = 0;

	for(ll i = 0; i < n; i++){

		presum += a[i];
		if (presum == sum) res++;
		if (pre.find(presum - sum) != pre.end()) res += pre[presum - sum];
		pre[presum]++;

	}

	return res;

}}

int main(){

    // freopen("INPUT.INP","r",stdin);
    // freopen("OUTPUT.OUT","w",stdout);

	cin >> n >> sum;
	for(ll i = 0; i < n; i++) cin >> a[i];
	cout << find();

    return 0;
}

//Baolee K6 Tin
//THPT Chuyen Chu Van An - Binh Dinh
/* Problem: */

/**  /\_/\
 *  (= ._.)
 *  / >AC \>AC
**/
