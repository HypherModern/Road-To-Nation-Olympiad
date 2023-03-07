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

ll n, a[N];

int calc(){
  
    um ps; 
    ll sum = 0, len = 0; 

    for (int i = 0; i < n; i++) {
 
        sum += a[i];
        if (sum == 0)
          len = i + 1; 

        if (ps.find(sum) != ps.end())
            len = max(len, i - ps[sum]);
        else ps[sum] = i;
    }
 
    return len;
}


int main(){

    // freopen("INPUT.INP","r",stdin);
    // freopen("OUTPUT.OUT","w",stdout);

	cin >> n;
	for(ll i = 0; i < n; i++){
		
		cin >> a[i];
		if (a[i] == 0) a[i] = -1;
		
	}
	
	cout << calc();

    return 0;
}

//Baolee K6 Tin
//THPT Chuyen Chu Van An - Binh Dinh
/* Problem: https://oj.vnoi.info/problem/cvabdi_nnc */

/**  /\_/\
 *  (= ._.)
 *  / >AC \>AC
**/

