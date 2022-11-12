#include <bits/stdc++.h>
#define ll long long
#define db double
#define fi first
#define se second
#define pp pair<ll,ll>
#define sp setprecision
#define pb push_back

const ll N = 100;
const ll oo = 1e17;
const ll mod = 1e9+7;

using namespace std;

ll n, s, p;

int main(){

    cin >> n;
    ll u = 2; s = 0; p = 0;
    while (u * u <= n){

        ll i = 0;
            while (n % u == 0){

                i++;
                n /= u;

            }
        u++;
        if (i % 2 == 0) s+= i;
        else p += i;

    }
    if (n > 1) p++;
    cout << s << endl;
    cout << p;
    return 0;

}

//Baolee K6 Tin 
//THPT Chuyen Chu Van An - Binh Dinh