#include <bits/stdc++.h>
#define ll long long


using namespace std;

ll n,u,v,x;
string s;

int main(){

    cin >> n;
    cin >> u >> v;
    cin >> s;
    ll t = n*(u-1)+v;
    for (auto i : s){

        if (i == 'U') t += n;
        if (i == 'D') t -= n;
        if (i == 'R') t--;
        if (i == 'L') t++;

    }
    cout << t;
    return 0;

}