#include <bits/stdc++.h> 
#define ll long long
#define db double
#define sp setprecision
#define pp pair<ll,ll>

const db ott = 5.8;
const db ttt = 8.5;
const db ttth = 10.0;
const db mtt = 12.8;
const db t = 1000.0;

using namespace std;
ll a,b;

int main(){

    cin >> a >> b;
    ll n = b - a;
    cout << sp(0) << fixed;
    if(n <= 10) cout << n*ott*t;
    else if(n > 10 && n <= 20) cout << (10*ott+(n-10)*ttt)*t;
    else if(n > 20 && n <= 30) cout << (10*ott+10*ttt+(n-20)*ttth)*t;
    else cout << (10*ott+10*ttt+10*ttth+(n-30)*mtt)*t;

    return 0;

}

//Baolee K6 Tin 
//THPT Chuyen Chu Van An - Binh Dinh