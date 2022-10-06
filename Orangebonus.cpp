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

ll result , n , p[N][N], x , k;
int main(){

    cin >> n >> k;
    for(int i = 1; i <= n; i++) 
        for(int j = 1; j <= n; j++){
        	cin >> x;
        	p[i][j] = p[i-1][j] + p[i][j-1] - p[i-1][j-1] + x;
		}
    for(int i = 1 ; i <= n - k + 1 ; i++)
	    for(int j = 1 ; j <= n - k + 1 ; j++){
	    	ll i1 = i + k - 1 , j1 = j + k - 1;
			result = max(result , p[i1][j1] - p[i-1][j1] - p[i1][j-1] + p[i-1][j-1]); 
		}	
    cout << result;
    return 0;
}

//Baolee K6 Tin 
//THPT Chuyen Chu Van An - Binh Dinh
