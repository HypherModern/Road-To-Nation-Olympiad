#include<bits/stdc++.h>
#define maiydeptryso2khongaiso1 int main()
#define ll long long
#define pb push_back
#define fi first
#define se second
#define lb lower_bound
#define up upper_bound
#define pii pair<int,int>
#define pll pair<ll,ll>
#define faster ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
const int MOD = 1e9 + 7;
using namespace std;
 
int m, n, k, res;
string a, b;
int dp[1001][1001];
int f[1001][1001][11];
 
maiydeptryso2khongaiso1 {
	faster
    //freopen("TASK.INP","r",stdin);
    //freopen("TASK.OUT","w",stdout);
	cin >> m >> n >> k;
	cin >> a;
	cin >> b;
	a = '1' + a;
	b = '1' + b;
	
	for(int i = 1 ; i <= m ; i++)
		for(int j = 1 ; j <= n ; j++) 
			if (a[i] == b[j]) dp[i][j] = dp[i-1][j-1] + 1;
	
	
	for(int p = 1 ; p <= k ; p++)
		for(int i = p ; i <= m ; i++)
			for(int j = p ; j <= n ; j++) {
				f[i][j][p] = max({f[i][j][p], f[i-1][j][p], f[i][j-1][p]});
				
				int L = dp[i][j];
				f[i][j][p] = max(f[i][j][p], f[i-L][j-L][p-1] + L);
				
				res = max(res , f[i][j][p]);
			}
			
	cout << (res >= k ? res : -1);
    return 0;
}
/*        newbie    */
