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

int doi(char c)
{
    if (c=='I') return 1;
    if (c=='V') return 5;
    if (c=='X') return 10;
    if (c=='L') return 50;
    if (c=='C') return 100;
    if (c=='D') return 500;
    return 1000;
}
int chuyen (string s)
{
    int t=0,i=0;
    while (i<s.size()-1)
    {
        if (doi(s[i]) < doi(s[i+1]))
            t-=doi(s[i]);
        else t+=doi(s[i]);
        i++;
    }
    return t + doi(s[i]);
}
string xau="";
string g[13]={"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};
int cs[13]={1000,900,500,400,100,90,50,40,10,9,5,4,1};
string solama(int x)
{
   for (int i=0; i<13; i++)
    {
        while (x>=cs[i])
        {
           x=x-cs[i];
           xau=xau+g[i];
        };
    };
   return xau;
}
int main()
{
    string x;
    cin>>x;
    if (x==solama(chuyen(x))) cout<<"YES";
       else cout<<"NO";
    return 0;
}

//Baolee K6 Tin
//THPT Chuyen Chu Van An - Binh Dinh