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
#define sqr(a) (a*a)

const ll N = 5;
const ll oo = 1e17;
const ll mod = 1e9+7;

using namespace std;

pp A, B, C, D, F[N];

ll len(pp A, pp B){
	
	if (A.fi == B.fi) return abs(A.se - B.se);
	else if (A.se == B.se) return abs(A.fi - B.fi);
	 
}

int main(){

    // freopen("INPUT.INP","r",stdin);
    // freopen("OUTPUT.OUT","w",stdout);

	for(ll i = 1; i <= 4; i++) cin >> F[i].fi >> F[i].se;
	sort(F+1, F+5);	
	A = F[1]; B = F[2]; C = F[4]; D = F[3];
	
	if (A.fi == B.fi && C.fi == D.fi && A.se == D.se && B.se == C.se){
		
		if (len(A, B) == len(B, C) && len(B, C) == len(C,D) && len(C, D) == len(D, A))
			cout << 1LL * len(A, B) * len(A, B);
		else cout << -1;
		
	}
	else cout << -1;

    return 0;
}

//Baolee K6 Tin
//THPT Chuyen Chu Van An - Binh Dinh
/* Problem: https://oj.vnoi.info/problem/cvabdi_bacgiang1 */

/**  /\_/\
 *  (= ._.)
 *  / >AC \>AC
**/

