#include <bits/stdc++.h>
#define ll long long
#define db double
#define fi first
#define se second
#define pp pair<ll,ll>
#define sp setprecision
#define pb push_back

const ll N = 3e3+1;
const ll oo = 1e17;
const ll mod = 1e9+7;

using namespace std;

bool kt=true;
ll n,m,s,t;
ll visit[3001];
ll G[3001][3001];
ll c[3001],p[3001];
ll trace[3001];
void DFS(int u)
{
	visit[u]=1;
	c[++j]=u;
	for(int i=1; i<=n; i++)
	{
		if(G[u][i]==1 && visit[i]==0)
		{
			DFS(i);
			trace[i]=u;
		}
	};
}
int main()
{
	cin >> n >> m >> s >> t;
	for(int i=1; i<=m; i++)
	{
		int u,v;
		cin>>u>>v;
		G[u][v]=1;
		G[v][u]=1;
    }
	DFS(s);
	if (visit[s]==1) kt=true;
	    else kt=false;
    if (kt==false) cout<<"-1";
       else {
               while (s!=t)
               {
                   cout<<t<<" ";
                   t=trace[t];
               };
               cout<<s;
            };
	return 0;
}