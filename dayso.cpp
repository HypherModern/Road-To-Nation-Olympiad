#include <iostream>

#define ll long long
using namespace std;

const ll N = 1e6+1;

ll n, m, d = 0, a[N], b[N];

int main(){

    cin >> n >> m;
    for(ll i = 1; i <= n; i++) cin >> a[i];
    for(ll i = 1; i <= m; i++) cin >> b[i];
    for(ll i = 1; i <= n; i++){
        
        if (a[i] == INT_MAX) continue;
        for(ll j = 1; i <= m; j++) if (a[j] != INT_MAX && a[i] = a[j]){

            d++;
            a[j] = INT_MAX;

        }
        a[i] = INT_MAX;         
    }

    cout << d;

    return 0;
}