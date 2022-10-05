#include<bits/stdc++.h>
#define ll long long
#define db double
#define sp setprecision

const ll N = 3e3;

using namespace std;

ll n;
db dp[N][N], s = 0, p[N];

int main (){
    
    cin >> n;
    for (int i = 1; i <= N; i ++) cin >> p[i];
    
    dp[0][0] = 1;
    for (int i = 1; i <= n; i++) dp[i][0] = dp[i-1][0]*(1-p[i]);
	
    for (int i = 1; i <= n; i++){
        
    	for (int j = 1; j <= i; j ++){
    	    
			dp[i][j] = dp[i-1][j-1] * p[i] + dp[i-1][j] * (1-p[i]);
			
		}
		
	}    
    for (int i = 1; i <= n; i ++){
        
		if (i > n-i) s+= dp[n][i];
		
	}
	cout << sp(10) << fixed;
    cout << s;
    return 0;
}

/* 
 
	Baolee K6 Tin THPT Chuyen Chu Van An - Binh Dinh
	
	Problem: https://atcoder.jp/contests/dp/tasks/dp_i
 
*/