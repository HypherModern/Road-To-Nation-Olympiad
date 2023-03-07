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

const ll N = 1e3+1;
const ll oo = 1e17;
const ll mod = 1e9+7;

using namespace std;

ll n, a[N][N], dp[N][N], cnt[5];

void countFactors(int n) {
   int count2 = 0, count5 = 0;

   while (n % 2 == 0) {
      count2++;
      n = n / 2;
   }
   while (n % 5 == 0) {
      count5++;
      n = n / 5;
   }
   for (int i = 3; i <= sqrt(n); i = i + 2) {
      while (n % i == 0) {
         if (i == 2) {
            count2++;
         }
         else if (i == 5) {
            count5++;
         }
         n = n / i;
      }
   }
   if (n == 2) {
      count2++;
   }
   else if (n == 5) {
      count5++;
   }
}


int main(){

    // freopen("INPUT.INP","r",stdin);
    // freopen("OUTPUT.OUT","r",stdout);

    cin >> n;
    for(ll i = 1; i <= n; i++)
        for(ll j = 1; j <= n; j++){



        }

    return 0;
}

//Baolee K6 Tin
//THPT Chuyen Chu Van An - Binh Dinh
/* Problem: https://oj.vnoi.info/problem/cvabdi_tb4 */