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

string add(string a, string b){

    while (a.size()<b.size()) a='0'+a;
	while (a.size()>b.size()) b='0'+b;
	ll carry=0, tam; string res = "";
	for(ll i = a.size()-1; i >= 0; i--){

		ll t=(a[i]-'0') + (b[i]-'0');
		tam = (t+carry) % 10;
		carry = (t+carry) / 10;

		char x = tam + '0';
		res = x + res;

	}
	if (carry>0) res = '1' + res;
	return res;
}

ll n, i, j, h, k;
string ans, a, b, s;

int main(){

    // freopen("INPUT.INP","r",stdin);
    // freopen("OUTPUT.OUT","w",stdout);

	cin >> n;
	while(n--){
		
		cin >> i >> j;
		cin >> s;
		
		ll cnt = 1;
		string x = "0", y = "1", tmp;
		
		while(cnt < i){
			
			tmp = y;
			y = add(x,y);
			x = tmp;
			cnt++;
				
		}
		a = y;
		x = "0", y = "1";
		cnt = 1;
		while(cnt < j){
			
			tmp = y;
			y = add(x,y);
			x = tmp;
			cnt++;
			
		}
		b = y;
		ans = add(a,b);
		if (ans == s) cout << "YES" << endl;
		else cout << "NO" << endl;
			
	}

    return 0;
}

//Baolee K6 Tin
//THPT Chuyen Chu Van An - Binh Dinh
/* Problem: https://oj.vnoi.info/problem/cvabdi_nbk2 */

