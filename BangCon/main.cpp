#include <bits/stdc++.h>

const int N = 1e3+1;

using namespace std;

string s;
string cha[13] = {"A", "2", "3", "4", "5", "6", "7", "8", "9", "10", "J", "Q", "K"};
int so[13] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13};
int m, n, a[N][N], psa[N][N], q, x, y, c, b;
int main(){

    cin >> m >> n;
    for(int i = 1; i <= m; i++)
        for(int j = 1; j <= n; j++){

            cin >> s;
            for(int k = 0; k < 13; k++)
                if (cha[k] == s) {
                    a[i][j] = so[k];
                    break;
                }

        }

        for(int i = 1; i <= m; i++){
            for(int j = 1; j <= n; j++){
                 psa[i][j] = psa[i - 1][j] + psa[i][j - 1] - psa[i - 1][j - 1] + a[i][j];
            }
        }

    cin >> q;
    while(q--){

        cin >> x >> y >> c >> b;
        cout << psa[c][b] - psa[x - 1][b] - psa[c][y-1] + psa[x-1][y-1] << endl;

    }

    return 0;
}
