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
#define FR ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

const ll N = 1e5+1;
const ll oo = 1e17;
const ll mod = 1e9+7;

using namespace std;

ll n, k, A[N], last[N], BIT[N], dp[N];

void update(int i, int val) {
    while (i <= N) {
        BIT[i] += val;
        i += i & -i;
    }
}

ll sum(int i) {
    int res = 0;
    while (i > 0) {
        res += BIT[i];
        i -= i & -i;
    }
    return res;
}

int main(){

    // freopen("INPUT.INP","r",stdin);
    // freopen("OUTPUT.OUT","w",stdout);

    cin >> n >> k;
    for (int i = 0; i < k; i++)
        cin >> A[i];
 
    memset(last, -1, sizeof(last));
    for (int i = 0; i < k; i++) {
        for (int j = i - k + 1; j < i; j++) {
            if (j < 0) continue;
            if (last[A[j]] >= i - k) break;
            last[A[j]] = i;
        }
 
        if (i < k - 1) {
            dp[i] = accumulate(A, A + i + 1, 0);
        } else {
            dp[i] = -1;
            for (int j = 1; j <= k; j++) {
                int idx = i - j + 1;
                if (last[A[idx]] < i - j) {
                    int curr_sum = sum(idx) - sum(idx - j);
                    if (dp[i - j] != -1) {
                        dp[i] = max(dp[i], dp[i - j] + curr_sum);
                    }
                }
            }
        }
 
        update(i + 1, A[i]);
    }
 
    cout << dp[n - 1] << endl;

    return 0;
}

//Baolee K6 Tin
//THPT Chuyen Chu Van An - Binh Dinh
/* Problem: */

/**  /\_/\
 *  (= ._.)
 *  / >AC \>AC
**/
