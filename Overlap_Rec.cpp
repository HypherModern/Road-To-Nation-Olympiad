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

const ll N = 1001;
const ll oo = 1e17;
const ll mod = 1e9+7;

using namespace std;

ll n, coordinates[N][4], d = 0;

int count(int x1, int y1, int x2, int y2, int x3, int y3, int x4, int y4) {
    ll overlap_x1 = max(x1, x3);
    ll overlap_y1 = max(y1, y3);
    ll overlap_x2 = min(x2, x4);
    ll overlap_y2 = min(y2, y4);

    ll width = overlap_x2 - overlap_x1;
    ll height = overlap_y2 - overlap_y1;

    if (width <= 0 || height <= 0) 
        return 0;

    return 1;
}


int main() {
	
    cin >> n;

    for (int i = 0; i < n; i++) 
        cin >> coordinates[i][0] >> coordinates[i][1] >> coordinates[i][2] >> coordinates[i][3];

    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            d += count(coordinates[i][0], coordinates[i][1], coordinates[i][2], coordinates[i][3],
                coordinates[j][0], coordinates[j][1], coordinates[j][2], coordinates[j][3]);
        }
    }
	cout << d;

    return 0;
}

//Baolee K6 Tin
//THPT Chuyen Chu Van An - Binh Dinh
/* Problem: */

/**  /\_/\
 *  (= ._.)
 *  / >AC \>AC
**/

