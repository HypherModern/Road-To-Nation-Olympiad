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

ll a, b, c, d;

int main(){

    freopen("FRAC.INP","r",stdin);
    freopen("FRAC.OUT","w",stdout);

    cin >> a >> b >> c >> d;
    ll A = a,C = c;
    a=a/__gcd(A,b);
    b=b/__gcd(A,b);
    c=c/__gcd(C,d);
    d=d/__gcd(C,d);

    cout<< __gcd(a,c)<< "\n" << b*d/__gcd(b,d);

    return 0;
}

//Baolee K6 Tin
//THPT Chuyen Chu Van An - Binh Dinh
/* Problem: https://hsg34.contest.codeforces.com/group/6R6ktIC2Dv/contest/429089/problem/A */