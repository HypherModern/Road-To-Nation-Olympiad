#include<bits/stdc++.h>
#define ll long long 
 
const ll N = 5e5+100;

using namespace std;

ll dp[N], v[N], w[N];
ll n, W, sum;
 
int main(){
	
	cin >> n >> W;

	for(int i = 1; i <= n; i ++)
		cin >> w[i] >> v[i], sum += v[i];
	
	memset(dp, 88, sizeof(dp));
		
	dp[0] = 0;
    
	for(int i = 1; i <= n; i++){

		for(int j = M; j >= v[i]; j --)
			dp[j] = min(dp[j], dp[j - v[i]] + w[i]);
            
	}
	
	for(int i = M; i >= 0; i--)
		if(dp[i] <= W){

			cout << i << endl;
			return 0;
            
		}
}