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

const ll N = 1e3+1;
const ll oo = 1e17;
const ll mod = 1e9+7;

using namespace std;

ll m, n, a[N][N], dem = 0;

void loang(ll x, ll y){

    if (a[x][y] == 1){

        a[x][y] = 0;
        loang(x+1,y); loang(x,y+1);
        loang(x-1,y); loang(x,y-1);

    }

}

int main(){

    // freopen("INPUT.inp","r",stdin);
    // freopen("OUTPUT.OUT","r",stdout);
    cin >> m >> n;
    for(ll i = 1; i <= m; i++)
        for(ll j = 1; j <= n; j++) cin >> a[i][j];
    for(ll i = 1; i <= m; i++)
        for(ll j = 1; j <= n; j++){

            if (a[i][j] == 1){

                loang(i,j);
                dem++;

            }

        }
    cout << dem;

    return 0;
}

//Baolee K6 Tin
//THPT Chuyen Chu Van An - Binh Dinh
/* Problem: https://oj.vnoi.info/problem/hoclentop_vung1 */ 