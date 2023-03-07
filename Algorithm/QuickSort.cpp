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

ll a[N], n;

void QuickSort(ll a[], ll l, ll r){

    ll i = l; ll j = r; ll m = (l+r)/2;
    while( i < j){

        while(a[i] < a[m]) i++;
        while(a[j] > a[m]) j--;
        if (i <= j){

            swap(a[i], a[j]);
            i++; j--;

        }

    }
    if (l < j) QuickSort(a, l, j);
    if (i < r) QuickSort(a, i, r);

}

int main(){

    cin >> n;
    for(ll i = 1; i <= n; i++) cin >> a[i];
    QuickSort(a, 1, n);
    for(ll i = 1; i <= n; i++) cout << a[i] << " ";

    return 0;
}

//Baolee K6 Tin
//THPT Chuyen Chu Van An - Binh Dinh    