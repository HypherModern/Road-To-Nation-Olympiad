#include <bits/stdc++.h>
#define ll long long
#define pp pair<ll,ll>
#define sp setprecision
#define db double

using namespace std;

ll a, b, c;

int main(){

    cin >> a >> b >> c;
    ll t = 0;
    while (a >= c){

        t += a / b;
        r = a % b;
        a = (t+r) / c;
        cout << a << endl;
    }
    cout << t;

}

//Baolee K6 Tin 
//THPT Chuyen Chu Van An - Binh Dinh