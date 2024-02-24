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

int n , k;
string s, t;

void Bfs(string a, string b) {
	queue<string> q;
	q.push(a);
	
	while(q.size()) {
		string x = q.front();
		q.pop();
		
		if (x == b) {
			cout << "YES\n";
			
			return;
		}
		
		for(int i = 0 ; i < x.size() - 3 ; i++) {
			swap(s[i], s[i + 3]);
			if (mp[x] == false)
				q.push(x);
			swap(s[i], s[i + 3]);
			
			if (i + 4 < x.size()) {
				swap(s[i], s[i + 4]);
				if (mp[x] == false)
					q.push(x);
				swap(s[i], s[i + 4]);
			}
		}
	}	
	
	cout << "NO\n";
}

void query() {
	cin >> n >> k;
	
	cin >> s;
	cin >> t;
	
	Bfs(s, t);
}

int main(){
    // freopen("INPUT.INP","r",stdin);
    // freopen("OUTPUT.OUT","w",stdout);

	int t = 1;
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

