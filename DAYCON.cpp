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

const ll N = 1e6+1;
const ll oo = 1e17;
const ll mod = 1e9+7;

using namespace std;

ll n, sum = 0, d = 1, c = 1, ans = INT_MIN, x = 1, a[N];

int main(){

    // freopen("DAYCON.INP","r",stdin);
    // freopen("DAYCON.OUT","w",stdout);

	cin >> n;
	for(ll i = 1; i <= n; i++){
		
		cin >> a[i];
		if (sum < 0){
			
			sum = a[i];
			x = i;
			
		}
		else sum += a[i];
		if (sum > ans){
			
			ans = sum;
			d = x;
			c = i;
			
		}
		
	}
	cout << ans << endl;
	for(ll i = d; i <= c; i++) cout << a[i] << " ";

    return 0;
}

//Baolee K6 Tin
//THPT Chuyen Chu Van An - Binh Dinh
/* Problem: https://cvatin.contest.codeforces.com/group/Qvz90CeIDX/contest/430178/problem/C */

/**  /\_/\
 *  (= ._.)
 *  / >AC \>AC
**/

