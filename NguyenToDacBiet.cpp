#include <bits/stdc++.h>
#define ll long long
#define db double
#define fi first
#define se second
#define pp pair<ll,ll>
#define um unordered_map<ll,ll>
#define mp map<ll,ll>
#define pq priority_queue<ll, vector<ll>>
#define spq priority_queue<ll, vector<ll>, greater<ll>>
#define sp setprecision
#define bp pop_back
#define pb push_back
#define ph push
#define lb lower_bound
#define up upper_bound
#define FR ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define MultiTest while(T--)

const ll N = 1e3+1;
const ll oo = 3e5;
const ll mod = 1e9+7;

using namespace std;

ll n, k, T;

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

   
int sumdigits(ll n){
	
	ll ans = 0;
	while(n > 0){
		
		ans += n % 10;
		n = n / 10;
		
	}
	return ans;
	
}
	

int main(){

     freopen("SPRIME.INP","r",stdin);
     freopen("SPRIME.OUT","w",stdout);
    
    FR;

	Sieve();

	cin >> T;
	MultiTest{
	
		ll d = 0;
		cin >> n >> k;
		for(ll i = 0; i <= primes.size(); i++){
			
			if (primes[i] < n) continue;
			if (primes[i] > k) break;
			if (sumdigits(primes[i]) % 5 == 0)d++;
			
		}
		cout << d << endl;
	
	}
	
    return 0;
}

//Baolee K6 Tin
//THPT Chuyen Chu Van An - Binh Dinh
/* Problem: */
/**  /\_/\
 *  (= ._.)
 *  / >AC \>AC
**/

