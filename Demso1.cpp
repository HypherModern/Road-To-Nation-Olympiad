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

ll a, b, c, d;

int main(){

    // freopen("INPUT.INP","r",stdin);
    // freopen("OUTPUT.OUT","w",stdout);

	cin >> a >> b >> c >> d;
	ll bcnn = (c*d) / __gcd(c, d);
	ll countc = (b / c) - ((a-1) / c);
	ll countd = (b / d) - ((a-1) / d);
	ll chung = (b / bcnn) - ((a-1) / bcnn);
	cout << chung;
	cout << (b - a + 1) - (countc + countd - chung);

    return 0;
}

//Baolee K6 Tin
//THPT Chuyen Chu Van An - Binh Dinh
/* Problem: */
 
