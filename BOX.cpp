#include <iostream>
#include <cstring>
using namespace std;

const int MAXN = 20;
const int INF = 1e9;
int n, k, c[MAXN][MAXN], f[MAXN][MAXN];

int main() {

    cin >> n >> k;
 	for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cin >> c[i][j];
        }
    }

    memset(f, INF, sizeof(f));
    for (int i = 1; i <= n; i++) {
        f[i][1] = 0;
    }

    for (int j = 2; j <= n; j++) {
        for (int i = j - 1; i >= 1; i--) {
            for (int p = i; p < j; p++) {
                f[i][j] = min(f[i][j], f[i][p] + f[p+1][j] + c[i][j]);
            }
        }
    }

    int ans = INF;
    for (int i = 1; i <= n; i++) {
        if (n - i + 1 <= k) {
            ans = min(ans, f[i][n]);
        }
    }
    cout << ans << endl;

    return 0;
}

