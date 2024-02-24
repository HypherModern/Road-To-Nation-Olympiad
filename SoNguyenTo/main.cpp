#include <bits/stdc++.h>
#define ll long long

using namespace std;

bool check[100001];
ll ps[100001];

void Sieve(){

    for(ll i = 2; i <= 1e5; i++){

        if (check[i])
            for(ll j = i*2; j <= 1e5; j+=i) check[j] = false;

    }

}
int main(){

    memset(check,true, sizeof(check));
    check[1] = false;
    ps[0] = 0;

    Sieve();

    //for(ll i = 1; i <= 50; i++) if (check[i]) cout << i << endl;
    for(ll i = 1; i <= 1e5; i++) if (check[i]) ps[i] = ps[i-1] + 1; else ps[i] = ps[i-1];

    ll q, l, r;

    cin >> q;
    while(q--){

        cin >> l >> r;
        cout << ps[r] - ps[l-1] << "\n";

    }

    return 0;
}
