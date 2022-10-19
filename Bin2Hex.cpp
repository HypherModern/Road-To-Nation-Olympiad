#include <iostream>
#include <string>
#define ll long long

using namespace std;
ll lt(ll n)
{
    ll kq=1;
    for(ll i=1;i<=n;i++) kq=kq*2;
    return kq;
}
ll chuyen(string xau)
{
    ll tong=0;
    for(ll i=0;i<xau.size();i++)
    if (xau[i]=='1') tong+=lt(xau.size()-i-1);
    return tong;
}
string cs="0123456789ABCDEFGHIJ";
string chuyen2(ll n)
{
    ll k=0;
    string s;
    while(n)
    {
        s=cs[n%16]+s;
        n/=16;
    };
    return s;
}
int main(){
    string n;
    cin>>n;
    ll k=chuyen(n);
    cout<<chuyen2(k)<<endl;
    return 0;
}