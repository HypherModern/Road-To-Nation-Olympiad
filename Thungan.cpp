#include <bits/stdc++.h>
#define ll long long
#define sp setprecision
#define pp pair<ll,ll>

using namespace std;

ll s,k;
ll x1, x2, x3;

int main(){

    cin >> s >> k;
    ll n = k - s;
    cout << n << endl;

    x1 = n / 5000;
    n = n % 5000;
    x2 = n / 2000;
    n = n % 2000;
    x3 = n / 1000;
    
    cout << x1 << " " << x2 << " " << x3;

}

//Baolee K6 Tin 
//THPT Chuyen Chu Van An - Binh Dinh 