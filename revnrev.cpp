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

const ll N = 101;
const ll oo = 1e17;
const ll mod = 1e9+7;

using namespace std;

ll n, k, u, v, l, r, cnt=0, a[N];
bool check(){
	
	for (ll i=1; i<=n; i++) 
		if (a[i]!=i) return false;
		
  	return true;
  	
}
void daoday(ll a[],ll l,ll r){
	
  while(l<r){
  	
    swap(a[l],a[r]);
    l++;
    r--;
    
  }
  
}
int main(){
	
  freopen("REVNREV.INP","r",stdin);
  freopen("REVNREV.OUT","w",stdout);
  
  cin >> n >> k;
  cin >> u >> v;
  cin >> l >> r;
  for (ll i = 1; i <= n; i++) a[i]=i;
  ll d = n;
  while(d--){
   
  	cnt++; 
    daoday(a,u,v);
    daoday(a,l,r);
    if (checK()) break;
    
  }

  if (k > cnt) k %= cnt;
    else if (k == cnt) 
		for (ll i = 1; i <= n; i++) cout << i << endl;
  while(k--){ 
  
    daoday(a,u,v);
    daoday(a,l,r);
    
  }
	for(ll i = 1;i <= n;i++)
		cout << a[i] << endl;
		
  return 0;
}
//Baolee K6 Tin
//THPT Chuyen Chu Van An - Binh Dinh
/* Problem: */

