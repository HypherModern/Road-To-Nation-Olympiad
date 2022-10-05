#include <bits/stdc++.h>
#define ll long long
#define pp pair<int, int>

using namespace std;

ll n, res = 0, d;
int main()
{
    cin >> n;
    pp a[n];
    for (int i=1; i<=n; i++) {
        int l, r;
        cin >> l >> r;
        a[++d] = pp(l,0);
        a[++d] = pp(r,1);
    }
    sort(a+1, a+2*n+1);
        d=0;
        ll s=0;
        for (int i=1; i<=2*n; i++) {

            if (d>0) s += a[i].first-a[i-1].first;
            if (a[i].second==0) d++;
            else d--;
            if (d==0) {
                res=max(s, res);
                s=0;
            }
            
        }
        cout << res;
        return 0;
}

//Baolee K6 Tin
//THPT Chuyen Chu Van An - Binh Dinh
