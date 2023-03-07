#include <bits/stdc++.h>
#define ll long long
#define db double
#define fi first
#define se second
#define pp pair<ll,ll>
#define mp unordered_map<ll,ll>
#define sp setprecision
#define pb push_back

const ll N = 2e5+1;
const ll oo = 1e17;
const ll mod = 1e9+7;

using namespace std;

ll a[N], T, n;
string s;

int main(){

    cin >> T;
    while(T--){

        cin >> n;
        cin >> s;
        ll cnt1 = 0, cnt0 = 0;
        for(ll i = 0; i < n; i++){

            if(s[i] == 1) cnt1++;
            else cnt0++;

        }


    }

    return 0;
}

//Baolee K6 Tin
//THPT Chuyen Chu Van An - Binh Dinh
/* 
    Problem: https://codeforces.com/problemset/problem/1750/B 
*/