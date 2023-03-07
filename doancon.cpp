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

const ll N = 1e5+1;
const ll oo = 1e17;
const ll mod = 1e9+7;

using namespace std;

ll a[N], n, x, k;


int Solve(ll a[], ll n, ll k){

    ll i = 0, j = 0, sum = 0;
    ll maxl = INT_MIN;

    while( j < n){

        sum += a[j];
        if (sum < k) j++;
        else if (sum == k){

            maxl = max(maxl, j-i+1);
            j++;

        }
        else if (sum > k){

            while(sum > k){

                sum -= a[i];
                i++;

            }
              if (sum == k) maxl = max(maxl, j-i+1);

            j++;
        }
    }

    return maxl;
}

int main(){

    cin >> n;
    for(ll i = 0; i < n; i++) cin >> a[i];
    cin >> x;
    cout << Solve(a, n, x);
    return 0;

}

//Baolee K6 Tin
//THPT Chuyen Chu Van An - Binh Dinh
/* Problem: -NONE- */   