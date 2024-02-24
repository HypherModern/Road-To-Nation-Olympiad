#include <bits/stdc++.h>
#define ll long long
#define pb push_back

using namespace std;

const ll N = 1e6;

ll n;
vector<ll> a(n), dp(n+1), dd;

int main() {

    cin >> n;

    for (int i = 0; i < n; i++)
        cin >> a[i];

    dp[1] = a[0];
    if (n > 1) dp[2] = a[1] + dp[0];

    for (int i = 3; i <= n; i++)
        dp[i] = a[i-1] + max(dp[i-2], dp[i-3]);

    ll ans = *max_element(dp.begin(), dp.end());

    ll i = distance(dp.begin(), find(dp.begin(), dp.end(), ans));
    while (i >= 1) {
        if (i == 1 || i == 2) {
            dd.pb(i);
            break;
        }
        else if (dp[i-1] >= dp[i-2]) i--;
        else {
            dd.pb(i);
            i -= 2;
        }
    }

    reverse(dd.begin(), dd.end());

    cout << dd.size() << " " << ans << endl;
    for (ll i : dd) {
        cout << i << "\n";
    }

    return 0;
}
