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

const ll N = 1e3+1;
const ll oo = 1e17;
const ll mod = 1e9+7;

using namespace std;

int countWays(ll N, ll K) {
    ll dp[N+1][K+1];
    for(ll i = 1; i <= N; i++) 
        dp[i][1] = 1;
        
    for(ll i = 1; i <= K; i++) 
        dp[i][i] = 1;
    
    for(ll i = 2; i <= N; i++) { 
        for(ll j = 2; j <= K; j++) {
            dp[i][j] = 0;
            for(ll k = 1; k <= j; k++) {
                if(i - k >= j - 1) {
                    dp[i][j] += dp[i - k][j - 1];
                }
            }
        }
    }
    return dp[N][K];
}

ll n, k;

int main(){

     freopen("CANDY.INP","r",stdin);
     freopen("CANDY.OUT","w",stdout);

	cin >> n >> k;
	cout << countWays(n, k);
	
    return 0;
}

//Baolee K6 Tin
//THPT Chuyen Chu Van An - Binh Dinh
/* Problem: */

/**  /\_/\
 *  (= ._.)
 *  / >AC \>AC
**/

