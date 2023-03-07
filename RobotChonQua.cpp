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

ll n, m = 3, A[4][N], F[4][N] = {0};
int main(){

    // freopen("INPUT.INP","r",stdin);
    // freopen("OUTPUT.OUT","w",stdout);

	cin >> n;
	
	for(ll i = 1; i <= m; i++)
		for(ll j = 1; j <= n; j++)
 			cin >> A[i][j];
 	
 	F[1][1] = A[1][1];
 	for(ll i = 2; i <= n; i++) F[1][i] = F[1][i-1] + A[1][i];
 	for(ll i = 2; i <= m; i++) F[i][1] = F[i-1][1] + A[i][1];
 	
 	for(ll i = 2; i <= m; i++)
 		for(ll j = 2; j <= n; j++)
 			F[i][j] = max(F[i-1][j], F[i][j-1]) + A[i][j];
 	
 	cout << F[m][n];
 	
    return 0;
}

//Baolee K6 Tin
//THPT Chuyen Chu Van An - Binh Dinh
/* Problem: https://oj.vnoi.info/problem/cvabdi_qt2 */

