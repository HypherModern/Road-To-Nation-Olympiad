#include <bits/stdc++.h>
#define ll long long
#define db double 
#define pp pair<ll,ll>
#define sp setprecision

using namespace std;

ll n, a[6] = {10000, 20000, 50000, 100000, 200000, 500000};
ll x1, x2, x3, x4, x5, x6;


int main(){

    cin >> n;
    if(n < 50000){ cout << "KHONG THUC HIEN DUOC"; return 0;}
    x6 = n / 500000; 
    if (x6 > 1000){n = n % 500000; n = n + (x6-1000)*500000; x6 = 1000; }
    else n = n % 500000;
    x5 = n / 200000;
    if (x5 > 1000){n = n % 200000; n = n + (x5-1000)*200000; x5 = 1000; }
    else n = n % 200000;
    x4 = n / 100000;
    if (x4 > 1000){n = n % 100000; n = n + (x4-1000)*100000; x4 = 1000; }
    else n = n % 100000;
    x3 = n / 50000;
    if (x3 > 1000){n = n % 50000; n = n + (x3-1000)*50000; x3 = 1000; }
    n = n % 50000;
    x2 = n / 20000;
    if (x2 > 1000) n = n + (x2-1000)*20000;
    n = n % 20000;
    x1 = n / 10000;
    if (x1 > 1000) n = n + (x1-1000)*10000;
    cout << x1+x2+x3+x4+x5+x6 << endl;
    cout << x1 << " " << x2 << " " << x3 << " " << x4 << " " << x5 << " " << x6; 
    return 0;

}

//Baolee K6 Tin
//THPT Chuyen Chu Van An - Binh Dinh
