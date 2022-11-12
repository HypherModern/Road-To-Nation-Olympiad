#include <iostream>
#define ll long long

using namespace std;

const ll N = 1e3+1;

ll n, d, a[N][N];

int main(){

    cin >> n;
    for(ll i = 1; i <= n; i++)
        for(ll j = 1; i <= n; j++) cin >> a[i][j];n
    for(ll i = 1; i <= n; i++) 
        for(ll j = 1; j <= n; j++){

            ll t1 = 0, t2 = 0;
            for(ll k = 1; k <= n; k++){
                t1 = t1+a[i][k];
                t2 = t2+a[k][j];
            }
            if 

        }

}

//Baolee K6 Tin
//THPT Chuyen Chu Van An - Binh Dinh
