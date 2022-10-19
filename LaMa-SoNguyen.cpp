#include <bits/stdc++.h>
#define ll long long
#define db double
#define fi first
#define se second
#define pp pair<ll,ll>
#define sp setprecision
#define pb push_back

const ll N = 1e3+1;
const ll oo = 1e17;
const ll mod = 1e9+7;

using namespace std;

ll convert(char c){

    if (c=='I') return 1;
    if (c=='V') return 5;
    if (c=='X') return 10;
    if (c=='L') return 50;
    if (c=='C') return 100;
    if (c=='D') return 500;
    return 1000;
}
ll chuyen(string s){

    ll t=0,i=0;
    while (i<s.size()-1){

        if (convert(s[i]) < convert(s[i+1]))
             t-=convert(s[i]);
        else t+=convert(s[i]);
        i++;

    }
    return t + convert(s[i]);
}
int main(){

    string s;
    cin >> s;
    cout << chuyen(s);
    return 0;
}

//Baolee K6 Tin
//THPT Chuyen Chu Van An - Binh Dinh