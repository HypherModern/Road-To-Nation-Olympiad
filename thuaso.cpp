#include <bits/stdc++.h>
#define ll long long
#define db double
#define fi first
#define se second
#define pp pair<ll,ll>
#define mp unordered_map<ll,ll>
#define sp setprecision
#define pb push_back
#define lb lower_bound
#define up upper_bound

const ll N = 1e3+1;
const ll oo = 1e17;
const ll mod = 1e9+7;

using namespace std;

ll n;

void primeFactors(int n){

    ll d;
    for (int i = 2; i <= sqrt(n); i = i + 2){

        d = 0;
        while (n % i == 0){

            d++;
            n = n/i;

        }

        if (d > 1) cout << "*" << i << "^" << d;
        else if (d == 1) cout << "*" << n;

    }
    if (n > 2)
        cout << "*" << n;

}

int main(){

    cin >> n;
    primeFactors(n);
    return 0;
}

//Baolee K6 Tin
//THPT Chuyen Chu Van An - Binh Dinh
/* Problem: */