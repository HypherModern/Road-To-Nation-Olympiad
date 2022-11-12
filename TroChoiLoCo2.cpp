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

ll m;

struct matrix
{
    ll d,c;
    ll M[100][100];
};
matrix mul(matrix A,matrix B )
{
    matrix C;
    C.d=A.d; C.c=B.c;
    for (ll i = 1; i <= A.d; i++)
        for (ll j = 1; j <= B.c; j++){

            C.M[i][j]=0;
            for (ll k=1; k<=A.c; k++) C.M[i][j]+=(A.M[i][k]*B.M[k][j])%m;
        
        }
    return C;
}
matrix mulk(matrix A, ll k){

    if (k==1) return A;
    matrix c = mulk(A,k/2);
    c = mul(c,c);
    if (k % 2 != 0) c = mul(c,A);
    return c;

}
int main(){

    matrix a,b,kq;
    ll n;
    cin >> n >> m;
    a.h = 3; a.c = 3;
    a.M[1][1]=0;
	a.M[1][2]=1;
	a.M[1][3]=0;
	a.M[2][1]=0;
	a.M[2][2]=0;
	a.M[2][3]=1;
	a.M[3][1]=1;
	a.M[3][2]=1;
	a.M[3][3]=1;
    b.h = 3; b.c = 1;
    b.M[1][1]=1;
	b.M[2][1]=2;
	b.M[3][1]=4;
    if (n == 1){

        cout << 1 << endl;
        return 0;

    }
    kq = mul(mulk(a,n-1),b);
    cout << kq.M[1][1]%m;
    return 0;
}

//Baolee K6 Tin
//THPT Chuyen Chu Van An - Binh Dinh
