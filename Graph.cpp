#include <bits/stdc++.h>
#define ll long long
#define db double
#define fi first
#define se second
#define pp pair<ll,ll>
#define sp setprecision
#define pb push_back

const ll N = 1e3+1;
const ll oo = 1e17;
const ll mod = 1e9+7;

using namespace std;

ll n, m, g[N][N], visited[N], trace[N], tp;

void DFS(ll u){

	visited[u]=1;

	for(ll i =1; i <= n; i++){

		if (g[u][i]==1 && visited[i]==0){

			cout << i <<" ";
			DFS(i);
			trace[i]=i;

		}

	}
}

void truyvet(ll i){
	if (i==0) return;
	truyvet(trace[i]);
	    cout << i << " ";
}
int main(){

	//freopen("DFSVLT.inp","r",stdin);
	//freopen("DFSVLT.out","w",stdout);
	cin>>n>>m;

	for (ll i=1;i<=m;i++){
		ll u,v;
		cin>>u>>v;
		g[u][v]=1;
	}
	for(ll i=1;i<=n;i++) 
		if (visited[i]==0) {

			cout << i << " ";
			DFS(i);
			tp++;
			cout << endl;

		}
	cout << tp-1;
	return 0;
}

//Baolee K6 Tin 
//THPT Chuyen Chu Van An - Binh Dinh