#include <bits/stdc++.h>
#define ll long long
#define db double
#define fi first
#define se second
#define pp pair<ll,ll>
#define mp unordered_map<ll,ll>
#define sp setprecision
#define pb push_back
#define lb lower_bound
#define up upper_bound

const ll N = 1e6+1;
const ll oo = 1e17;
const ll mod = 1e9+7;

using namespace std;


ll a[N], n;

int main(){

    cin >> n;
    for(ll i = 1; i <= n; i++){
        
        cin >> a[i];

    }
    sort(a+1,a+n+1);
    for(ll i = 1; i <= n; i++){

        if (a[i] != i){
            
            cout << "NO";
            return 0;

        }

    }
    cout << "YES";
    return 0;
}

//Baolee K6 Tin
//THPT Chuyen Chu Van An - Binh Dinh
/* Problem: */