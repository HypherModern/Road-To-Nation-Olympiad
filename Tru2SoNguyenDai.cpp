#include <bits/stdc++.h>
#define ll long long
using namespace std;
string a;
string b;
string sub (string a,string b)
{
    while (a.size()<b.size()) a='0'+a;
	while (a.size()>b.size()) b='0'+b;

    ll tmp = 0, borrow = 0; string res = ""; bool bll =0;
        if (a<b) swap (a,b), bll =1;
    for (ll i = a.size()-1; i >= 0; i--){

     tmp = a[i] - b[i] - borrow ;
     if (tmp<0) tmp +=10 , borrow = 1;
     else borrow =0;
     char d = tmp +48;
     res = d + res;

    }
    if (res[0]=='0' & res.size()!=1) res.erase(0,1);
    if (bll == 1) res = "-" + res;
    return res;
}
int main ()
{
    cin >> a >> b;
    cout << sub (a,b);
    return 0;
}