#include <bits/stdc++.h>
#define ll long long

using namespace std;

string chuyen(ll a)
{ string s;
  while (a>0)
  { char t=a%2+48;
    s=t+s;
    a/=2;
  }
  return s;
}

int main(){

ll n;
    cin>>n;n++;
  string s=chuyen(n);
  for (ll i=1; i<s.size(); i++)
  {
    if (s[i]=='0') cout<<1;
       else cout<<2;
  }
    return 0;
}
