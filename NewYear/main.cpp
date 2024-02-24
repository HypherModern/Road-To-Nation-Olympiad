#include <bits/stdc++.h>
#define ll long long

using namespace std;

ll t, n, k, cnt = 0;

int main(){

    cin >> n >> k;
    t = 240 - k;
    for(ll i = 1; i <= n; i++){

        if (t < i * 5) break;
        cnt++;
        t -= i * 5;


    }

    cout << cnt;

    return 0;
}
