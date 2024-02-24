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
const ll N = 1e3+1;
const ll oo = 1e17;
const ll mod = 1e9+7;

using namespace std;

int n, k;
string x, s;
long long f[26][26], res, p[100007][26];

void query() {
	cin >> n >> k;
	cin >> s;
	res = 0;
	memset(f,0,sizeof(f));
	
	for(int j = 1 ; j <= n ; j++)
		for(int i = 0 ; i < 26 ; i++) {
			f[i][s[j - 1] - 'a'] += p[j-1][i];
			p[j][i] = p[j-1][i] + (s[j-1] - 'a' == i);
		}
		
	for(int i = 1 ; i <= k ; i++) {
		cin >> x;
		res += f[x[0] - 'a'][x[1] - 'a'];
	}
	
	cout << res << '\n';
}

int main(){

    // freopen("INPUT.INP","r",stdin);
    // freopen("OUTPUT.OUT","w",stdout);
	int t;
	cin >> t;
	while(t--) query();
    return 0;
}

//Baolee K6 Tin
//THPT Chuyen Chu Van An - Binh Dinh
/* Problem: */

/**  /\_/\
 *  (= ._.)
 *  / >AC \>AC
**/

