#include <bits/stdc++.h>
#define ll long long
#define db double
#define fi first
#define se second
#define pp pair<ll,ll>
#define sp setprecision
#define pb push_back

const ll N = 1e9;
const ll oo = 1e6;
const ll mod = 1e9+7;

using namespace std;

vector<int> primes;

int sumdigit(ll a){
    
    ll s = 0;
    while (a!=0){
      
         s += a % 10;
         a /= 10;
     
    }
  return s;
}
void Sieve()
{
    int n = oo;
 
    int nNew = sqrt(n);
 
    int marked[n/2+500] = {0};
 
    for (int i=1; i<=(nNew-1)/2; i++)
        for (int j=(i*(i+1))<<1; j<=n/2; j=j+2*i+1)
            marked[j] = 1;
 
    primes.push_back(2);

    for (int i=1; i<=n/2; i++)
        if (marked[i] == 0)
            primes.push_back(2*i + 1);
}

int binarySearch(int left,int right,int n)
{
    if (left<=right)
    {
        int mid = (left + right)/2;

        if (mid == 0 || mid == primes.size()-1)
            return primes[mid];
 
        if (primes[mid] == n)
            return primes[mid-1];
 
        if (primes[mid] < n && primes[mid+1] > n)
            return primes[mid];
        if (n < primes[mid])
            return binarySearch(left, mid-1, n);
        else
            return binarySearch(mid+1, right, n);
    }
    return 0;
}

ll n;

int main(){
    
   // freopen("CAU1.INP","r",stdin);
   // freopen("CAU1.OUT","w",stdout);
    Sieve();
    cin >> n;
    cout << sumdigit(n) << endl;
    ll max = 0, num = 0;
    for(int i = primes.size(); i > 0; i--){
        
        if(primes[i] < n && sumdigit(primes[i]) > max){
        
            max = sumdigit(primes[i]);
            num = primes[i];
         
        }
        
    }
    cout << binarySearch(0,primes.size()-1,n) << endl;
    cout << num << endl;

    
}

//Baolee K6 Tin 
//THPT Chuyen Chu Van An - Binh Dinh