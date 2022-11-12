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

int main()
{                               
    ll n, aws=-1;
    ll k;
    cin >> n >> k;
    ll a[n+5], b[n+5], l=1, r=n, mid;
    b[0]=0;
    for (int i=1; i<=n; i++)
    {
        cin >> a[i];
        b[i]=b[i-1]+a[i];
    }
    while (l<=r) {
        mid=(l+r)/2;
        int i;
        for (i=mid; i<=n; i++)
        {
            if (b[i]-b[i-mid]>k)
            {
                break;
            }
        }
        if (i>n){

            aws=mid;
            l=mid+1;
            
        }
        else r=mid-1;
    }
    cout << aws;
    return 0;
}

//Baolee k6 Tin
//THPT Chuyen Chu Van An - Binh Dinh