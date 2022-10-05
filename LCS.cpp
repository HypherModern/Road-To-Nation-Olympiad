#include <bits/stdc++.h> 
#define ll long long
const ll N = 3e3+1;

using namespace std;

string s,t,x;
ll dp[N][N];

int main(){

	cin >> s >> t;

	ll n=s.size(); ll m=t.size();
	s='a'+s; t='a'+t;

	for(int i=1; i<=n; i++) dp[i][0]=0;
	for(int j=1; j<=m; j++) dp[0][j]=0;

	for(int i=1; i<=n; i++){

		for(int j=1; j<=m; j++){

			if(s[i]==t[j]) dp[i][j]=dp[i-1][j-1]+1;
			else dp[i][j]=max(dp[i-1][j], dp[i][j-1]);

		}

	}
    while(n>0 && m>0){

    	if(s[n]==t[m]){

    		x=s[n]+x;
    		n--;
    		m--;

		}
		else if(dp[n][m]==dp[n-1][m]) n--;
		else m--;

	}

	cout << x;
	return 0;

}
