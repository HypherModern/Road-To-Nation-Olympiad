#include<bits/stdc++.h>
#define ll long long

const ll N = 3e3 + 1;

using namespace std;

ll n, dp[N][N], a[N];

int main(){
    
    cin >> n;
    
    for (ll i=1;i<=n;i++) cin >> a[i];
    
    dp[0][0]=0;
    
    for (ll i=n;i>=1;i--)
        for (ll j=i;j<=n;j++){
            if (i==j)
                dp[i][j]=a[i];
            else
                dp[i][j]=max((a[i]-dp[i+1][j]),(a[j]-dp[i][j-1]));
                
    }
    
    cout << dp[1][n] << endl;
    
    return 0;
    
}

/* 
 
	Baolee K6 Tin THPT Chuyen Chu Van An - Binh Dinh
	
	Problem: https://atcoder.jp/contests/dp/tasks/dp_l
 
*/