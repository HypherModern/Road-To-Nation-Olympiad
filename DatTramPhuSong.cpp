#include <bits/stdc++.h>
#define ll long long
#define db double
#define fi first
#define se second
#define pp pair<ll,ll>
#define mp unordered_map<ll,ll>
#define sp setprecision
#define pb push_back
#define lb lower_bound
#define up upper_bound

const ll N = 1e6+1;
const ll oo = 1e17;
const ll mod = 1e9+7;

using namespace std;

ll maxi , n , k , p[N] , st , en , a[N] , x[N] , res;

void quick(ll l , ll r){
    ll i = l , j = r , m = x[(l+r)/2];
	while(i<j){

		while(x[i]<m) i++;
		while(x[j]>m) j--;
		if(i<=j){

			swap(x[i],x[j]);
			swap(a[i],a[j]);
			i++; j--;

		}

	}	

	if(l<j) quick(l,j);
	if(i<r) quick(i,r);
}

int main(){
    cin >> n >> k;
    for(int i = 1 ; i <= n ; i++){
    	cin >> x[i] >> a[i];
    	maxi=max(maxi,x[i]);
	}
	quick(1,n);	
	for(int i = 1 ; i <= n ; i++) p[i] = p[i-1] + a[i];
	if(k>=1e6){
		cout << p[n];
		return 0;
	}
	for(int i = k ; i <= maxi - k ; i++){
		st = lb(x+1,x+n+1,i-k)-x;
		en = up(x+1,x+n+1,i+k)-x-1;
		res=max(res,p[en]-p[st-1]);
	}
	cout << res << "\n";
	return 0;
}


//Baolee K6 Tin
//THPT Chuyen Chu Van An - Binh Dinh
/* 
    Problem: http://ntucoder.net/Problem/Details/4408?fbclid=IwAR2SN6nEG1ncl4qm3vxnCiM35rqAZzHMx6Dn5fhmfCOyVdDfHgaLa0872_Q
*/