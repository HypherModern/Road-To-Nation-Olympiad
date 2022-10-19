#include <bits/stdc++.h>
#define ll long long
#define db double
#define fi first
#define se second
#define pp pair<ll,ll>
#define sp setprecision
#define pb push_back

const ll N = 1e3+1;
const ll oo = 1e17;
const ll mod = 1e9+7;

using namespace std;

ll a,b,c,d,dem=0;

int main(){
    cin >> a >> b >> c >> d;
    for (ll i=a;i<=b;i++){

        if (i%c!=0 && i%d!=0)
            dem++;
    }
    cout << dem;
    return 0;
}
//Baolee K6 Tin
//THPT Chuyen Chu Van An - Binh Dinh