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

const ll N = 1e5+1;
const ll oo = 1e15;
const ll mod = 1e9+7;

using namespace std;

ll a[N], m, n, d = 0;

int main(){

    cin >> m >> n;
    for(ll i = 1; i <= m*n; i++) cin >> a[i];
    sort(a+1,a+n*m+1);  
    ll n2 = n, n1 = 1;
    for(ll i = 1; i <= m; i++){

        if (i % 2 == 1){

            for (ll i = n1; i < n2; i++) cout << a[i] << " ";
            cout << a[n2] << endl;
            n1+=n;
            n2+=n;

        }
        if (i % 2 == 0){

            for(ll i = n2; i > n1; i--) cout << a[i] << " ";
            cout << a[n1]<< endl;
            n1+=n;
            n2+=n;

        }

    }

    return 0;
}

//Baolee K6 Tin
//THPT Chuyen Chu Van An - Binh Dinh
/* Problem: */