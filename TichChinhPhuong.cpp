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

ll n, D[N], ans = 0;

int isPerfectSquare(ll a){
	
	for(ll i = sqrt(a); i >= 1; i--)
		if (a % (i*i) == 0) return i * i;
}



int main(){

    // freopen("INPUT.INP","r",stdin);
    // freopen("OUTPUT.OUT","w",stdout);

	cin >> n;
	for(ll i = 1; i <= n; i++) D[i / isPerfectSquare(i)]++;
	for(ll i = 1; i <= n; i++) ans += D[i / isPerfectSquare(i)];
	cout << ans;
	
    return 0;
}

//Baolee K6 Tin
//THPT Chuyen Chu Van An - Binh Dinh
/* Problem: */

