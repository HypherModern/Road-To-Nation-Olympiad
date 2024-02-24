#include <bits/stdc++.h>
#define ll long long

using namespace std;

ll n, m, k;
string s;

int main(){

    cin >> s;
    cin >> n >> m;

    k = s.length();
    while(n > 1){

        if (m > pow(2, n-1) * k) m -= pow(2, n-1) * k;
        n--;

    }

    if (m <= k) cout << s[m];
    else cout << s[2*k - m];

    return 0;
}
