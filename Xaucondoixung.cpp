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

const ll N = 1e4+1;
const ll oo = 1e17;
const ll mod = 1e9+7;

using namespace std;

ll n, dd = 1;
string s, ans = " ";
bool dp[N][N];

int main(){

    // freopen("INPUT.INP","r",stdin);
    // freopen("OUTPUT.OUT","r",stdout);

    cin >> n;
    cin >> s;

    dp[0][0] = true;
    for(ll i = 1; i <= n; i++){

        if (s[i] == s[i+1]) dp[i][i+1] = true;
        dp[i][i] = true;

    } 
    for(ll k = 0; k < n; k++)
        for(ll i = 1; i <= n - k; i++){

            ll j = i + k - 1;
            if (dp[i+1][j-1] && s[i] == s[j]){

                dp[i][j] = true;
                dd = max(dd,j-i+1);
                

            }

        }

    for(ll i = 0; i <= n; i++)
    for(ll j = 0; j <= n; j++){

        if (dp[i][j] == true && j - i + 1 == dd){

            ans = max(ans,s.substr(i,j));

        }

    }

    cout << dd << endl;
    cout << ans;

    return 0;
}

//Baolee K6 Tin
//THPT Chuyen Chu Van An - Binh Dinh
/* Problem: https://oj.vnoi.info/problem/cvabdi_xcdx */