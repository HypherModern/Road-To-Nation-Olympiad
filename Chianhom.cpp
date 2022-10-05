#include <bits/stdc++.h> 
#define ll long long
 
using namespace std;

ll n, k;

ll divide(ll x){

    if ((x - k) % 2 == 0 && (x > k)) return divide((x - k) / 2) + divide((x + k) / 2);
    else return 1;

}

int main(){

    //freopen("BAI2.OUT","r",stdin);
    //freopen("BAI2.OUT","w",stdout);

    cin >> n >> k;
    cout << divide(n);

}

//Baolee K6 Tin
//THPT Chuyen Chu Van An - Binh Dinh
// Problem : https://traitaodo.wordpress.com/2015/08/09/nhung-con-duong-quanh-nong-trang-vratf/