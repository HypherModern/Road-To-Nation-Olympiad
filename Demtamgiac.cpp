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

const ll N = 1e5+1;
const ll oo = 1e17;
const ll mod = 1e9+7;

using namespace std;

ll n, a[N];

bool check(ll a, ll b, ll c){

    if (a+b > c && a+c > b && b+c > a) return true;
    return false;

}

int countTriangles() {
    sort(a, a + n);
    int ans = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            int k = lower_bound(a, a + n, a[i] + a[j]) - a;
            if (k < n && k > j) {
                if (a[i] == a[j] && a[j] == a[k])
                    ans++;
                else if (a[i] == a[j] || a[j] == a[k] || a[i] == a[k])
                    if (check(a[i],a[j],a[k])) ans++;
            }
        }
    }
    return ans;
}

int main(){

    // freopen("INPUT.INP","r",stdin);
    // freopen("OUTPUT.OUT","w",stdout);

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int ans = countTriangles();
    cout << ans;

    return 0;
}

//Baolee K6 Tin
//THPT Chuyen Chu Van An - Binh Dinh
/* Problem: */