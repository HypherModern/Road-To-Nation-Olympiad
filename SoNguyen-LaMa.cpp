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

string xau="";
string g[13]={"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};
ll cs[13]={1000,900,500,400,100,90,50,40,10,9,5,4,1};

string solama(int x)
{
    for (int i=0; i<13; i++)
    {
        while (x>=cs[i])
        {
           x-=cs[i];
           xau+=g[i];
        }
    }
    return xau;
}
int main()
{
    int x;
    cin>>x;
    cout<<solama(x);
    return 0;
}