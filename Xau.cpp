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

ll k, n;

bool check(string s){

    for(ll len = 1; len <= n / 3; len++)
        for(ll i = 1;  i <= n - len * 2 - 1; i++){

            string s1 = s.substr(len,i);
            string s2 = s.substr(i,i+len);
            string s3 = s.substr(i+len,i+len+len);
            if(s1 == s2 && s2 == s3) return false;

}

int main(){

    // freopen("INPUT.INP","r",stdin);
    // freopen("OUTPUT.OUT","r",stdout);

    cin >> k;
    for(ll i = 1; i <= k; i++)
    

    return 0;
}

//Baolee K6 Tin
//THPT Chuyen Chu Van An - Binh Dinh
/* Problem: https://oj.vnoi.info/problem/cvabdi_tb1 */