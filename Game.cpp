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

ll a, b;

int main(){

    // freopen("INPUT.INP","r",stdin);
    // freopen("OUTPUT.OUT","w",stdout);

	cin >> a >> b;
	if (abs(a - b) > 0) cout << 2 * max(a, b) - 1;
	else cout <<  a + b;

    return 0;
}

//Baolee K6 Tin
//THPT Chuyen Chu Van An - Binh Dinh
/* Problem: https://hsg34.contest.codeforces.com/group/6R6ktIC2Dv/contest/343059/problem/A */

