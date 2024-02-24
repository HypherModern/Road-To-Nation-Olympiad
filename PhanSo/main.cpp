#include <bits/stdc++.h>
#define ll long long

using namespace std;

const ll N=1e5+1;

int main (){

    ll m, n, cnt = 0;

    cin >> m >> n;

    for (ll i = 1; i < n; i++)
      cnt += ((2*m-1) / (n+i)-m / (n+i));

    cout << cnt;
    return 0;
 }

 // Problem: https://oj.vnoi.info/problem/cvabdi_dn201703
