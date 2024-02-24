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

const ll N = 1e3+1;
const ll oo = 1e17;
const ll mod = 1e9+7;

using namespace std;

ll T, l, r, x;

int main(){

    FR;

    // freopen("INPUT.INP","r",stdin);
    // freopen("OUTPUT.OUT","w",stdout);

    cin >> T;
    for(int i = 1; i <= T; i++){

        cin >> l >> r;
        for(ll k = 39; k >= 1; k--){

            x = 2;
            while(pow(x,k) <= r) x++;
            if (pow(x-1,k) >= l && pow(x-1,k) <= r){

                cout << "Case #" << i << ": " << k << "\n";
                break; 

            }

        }

    }

    return 0;
}

//Baolee K6 Tin
//THPT Chuyen Chu Van An - Binh Dinh
/* Problem: https://oj.vnoi.info/problem/power */

/**  /\_/\
 *  (= ._.)
 *  / >AC \>AC
**/
