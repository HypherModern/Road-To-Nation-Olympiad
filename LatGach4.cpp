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

struct matrix
{
    ll d,c;
    ll M[100][100];
};
matrix mul(matrix A,matrix B )
{
    matrix C;
    C.d=A.d; C.c=B.c;
    for (ll i=1; i<=A.d; i++)
        for (ll j=1; j<=B.c; j++)
        {
            C.M[i][j]=0;
            for (ll k=1; k<=A.c; k++) C.M[i][j]=C.M[i][j]+A.M[i][k]*B.M[k][j]%111539786;
        };
    return C;
}
matrix mulk(matrix A, ll k)
{
    matrix c;
    if (k==1) return A;
       else
       {
          c=mulk(A,k/2);
          c=mul(c,c);
          if (k%2!=0) c=mul(c,A);
       };
    return c;
}
int main()
{
    int t;
    cin>>t;
    for (ll ac=1; ac<=t; ac++)
    {
        ll n;
        cin>>n;
        if (n==1) cout<<"1";
        else
            {
               if (n==2) cout<<"2";
                 else
                  {
                     matrix a,f,ff;
                     a.d=2; a.c=2; f.d=2; f.c=1; ff.d=2; ff.c=1;
                     a.M[1][1]=0; a.M[1][2]=1; a.M[2][1]=1; a.M[2][2]=1;
                     f.M[1][1]=1; f.M[2][1]=2;
                     ff=mul(mulk(a,n-1),f);
                     cout<<ff.M[1][1]%111539786;
                  };
            };
        cout<<endl;
     }
    return 0;
}

//Baolee K6 Tin
//THPT Chuyen Chu Van An - Binh Dinh
