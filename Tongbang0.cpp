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

ll n, A[N], B[N], C[N], D[N], d = 0;

int main(){

    // freopen("INPUT.INP","r",stdin);
    // freopen("OUTPUT.OUT","r",stdout);

    cin >> n;
    for(ll i = 1; i <= n; i++)
        cin >> A[i] >> B[i] >> C[i] >> D[i];

    for(ll i = 1;  i <= n; i++)
        for(ll j = 1; j <= n; j++)
            for(ll k = 1; k <= n; k++)
                for(ll l = 1; l <= n; l++)
                    if (A[i] + B[j] + C[k] + D[l] == 0) d++;

    cout << d;

    return 0;
}

//Baolee K6 Tin
//THPT Chuyen Chu Van An - Binh Dinh
/* Problem: */