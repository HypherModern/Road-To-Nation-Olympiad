#include <bits/stdc++.h>
#define ll long long
 
using namespace std;

ll n, k, x, y;

int main(){

    cin >> n >> k;
    
    ll a[n] = {0}; ll b[n] = {0};

    for(ll i = 1; i <= n; i++){

        cin >> a[i] >> b[i];

    }
    ll res = 0;
    sort(b+1,a+n+1);
    for(ll i = k+1; i <= b[n]-k; i++){

        ll x = i, y = i, temp = 0, count = 0;
        while(count != k){

            x--; y++; k++;
            if (b[x] != 0) temp += b[x];
            if (b[y] != 0) temp += b[y];

            res = max(temp,res);

        }
    
    }
    cout << res;
    return 0;

}