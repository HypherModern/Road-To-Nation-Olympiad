#include <bits/stdc++.h>
#define ll long long
#define db double
#define fi first
#define se second
#define pp pair<ll,ll>
#define sp setprecision
#define pb push_back

const ll N = 1e5+1;
const ll oo = 1e17;
const ll mod = 1e9+7;

using namespace std;

ll n, q, T, x, a[N], prefix[N];

int BinarySearch(ll d, ll c, ll x){

    ll l = 1; ll r = c;
    while(l <= r){

        ll mid = (l+r)/2;
        if (prefix[mid] < x && prefix[mid + 1] >= x) return mid;
        if (prefix[mid] > x) return BinarySearch(1, mid-1, x);
        else l = mid+1;

    }

}

int main(){

    cin >> T;
    prefix[0] = 0;
    while(T--){

        cin >> n >> q;
            for(ll i = 1; i <= n; i++) cin >> a[i];
            sort(a+1,a+n+1);
            for(ll i = 1; i <= n; i++) prefix[i] = prefix[i-1] + a[i];
                while(q--){

                    cin >> x;
                    if (prefix[n] < x) cout << n;
                    else cout << BinarySearch(1, n, x) << endl;

                }

    }

    return 0;

}

//Baolee K6 Tin
//THPT Chuyen Chu Van An - Binh Dinh
//Problem : https://www.hackerearth.com/practice/algorithms/searching/binary-search/practice-problems/algorithm/longest-subsequence-queries-9c45a765/