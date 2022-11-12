#include <bits/stdc++.h>
#define ll long long
#define db double
#define fi first
#define se second
#define pp pair<ll,ll>
#define sp setprecision
#define pb push_back

const ll N = 3e6+1;
const ll oo = 3e6;
const ll mod = 1e9+7;

using namespace std;

vector<ll> primes;
ll r,l,T,d;

void Sieve(){

    ll n = oo;
    ll nNew = sqrt(n);
 
    ll marked[n/2+500] = {0};
 
    for (int i=1; i<=(nNew-1)/2; i++)
        for (ll j = (i*(i+1)) << 1; j<=n/2; j=j+2*i+1)
            marked[j] = 1;
 
    primes.push_back(2);
 
    for (int i=1; i<=n/2; i++)
        if (marked[i] == 0)
            primes.push_back(2*i + 1);
}
bool checksumdigit(ll n){

    ll s = 0;
    while (n!=0){
      
         s += n % 10;
         n /= 10;
     
    }
    if (s % 5 == 0) return true;
    return false;
}

int main(){

    Sieve();
    cin >> T;
    while(T--){

        cin >> l >> r; 
         d = 0;
        for(ll i = 0; i < primes.size(); i++){

            if (primes[i] >= l && primes[i] <= r && checksumdigit(primes[i])) d++;
            if (primes[i] > r) break;

        }
        cout << d << endl;

    }
    return 0;

}

//Baolee K6 Tin
//THPT Chuyen Chu Van An - Binh Dinh