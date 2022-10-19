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
bool chia(string a, string b){
     string s=a,xau;
     ll i; char d=0;
     for ( i=0; i<=b.size()-1; i++) xau=xau+s[i];
     while (xau!=0){
        if (xau%b!=0) { d=0;
                        xau=xau/a;
                        for (ll j=xau.size();j<=b.size();j++){
                            i++;
                            if (s[i-1]==0) break;
                            xau=xau+s[i];
                        };
                      }
          else { d=1;
                 xau="";
                 for (ll j=xau.size();j<=b.size();j++){
                    i++;
                    if (s[i-1]==0) break;
                    xau=xau+s[++i];
               }
     }
     if (d==0) return false;
        else return true;
     
}
int main(){
    string a,b;
    cin>>a>>b;
    if (chia(a,b)==true) cout<<"YES";
       else cout<<"NO";
    return 0;

}

//Baolee K6 Tin
//THPT Chuyen Chu Van An - Binh Dinh