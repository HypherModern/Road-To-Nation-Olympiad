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

ll n, m, count = 0;
ll visit[3001];
ll G[3001][3001], c[3001], p[3001];
ll trace[3001];

void DFS(int u)
{
	visit[u]=1;
	for(int i=1; i<=n; i++)
	{
		if(G[u][i]==1 && visit[i]==0)
		{
			DFS(i);
		}
	}
}
int main()
{
	cin >> n >> m;
	for(int i=1; i<=m; i++){

	    ll u,v;
		cin >> u >> v;
		G[u][v]=1;
		G[v][u]=1;

    }
	for(int i=1; i<=n; i++)
        if(visit[i]==0){

        DFS(i);
        count++;

    }
    cout << count-1 << endl;
	return 0;
}

//Baolee K6 Tin
//THPT Chuyen Chu Van An - Binh Dinh