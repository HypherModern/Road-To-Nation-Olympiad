#include <bits/stdc++.h>
#define ll long long
#define db double
#define fi first
#define se second
#define pp pair<ll,ll>
#define sp setprecision
#define pb push_back
 
const ll N = 1e9;
const ll oo = 1e5;
const ll mod = 1e9+7;
 
using namespace std;
 
vector<int> primes;

void Sieve(){

    ll n = oo;
    ll nNew = sqrt(n);
    ll marked[n/2+500] = {0};
 
    for (int i=1; i<=(nNew-1)/2; i++)
        for (int j=(i*(i+1))<<1; j<=n/2; j=j+2*i+1)
            marked[j] = 1;
 
    primes.push_back(2);
 
    for (int i=1; i<=n/2; i++)
        if (marked[i] == 0)
            primes.push_back(2*i + 1);
}
 
int main(){
    
    Sieve();
    
    for(ll i = 0; i < primes.size(); i++) cout << primes[i];
    
    return 0;
}
 
//Baolee K6 Tin 
//THPT Chuyen Chu Van An - Binh Dinh