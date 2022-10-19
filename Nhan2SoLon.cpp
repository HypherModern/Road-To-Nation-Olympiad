#include<bits/stdc++.h>
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

string nhan1chuso(string s, char a) {
    long long nho=0, t;
    string res="";
    for (int i = s.length()-1; i >= 0; i--) {
        t=int(s[i]-'0')*int(a-'0')+nho;
        res = char(t%10+'0')+res;
        nho = t/10;
    }
    if (nho!=0) {
        res=char(nho+'0')+res;
    }
    return res;
}
string add(string a, string b){

    while (a.size()<b.size()) a='0'+a;
	while (a.size()>b.size()) b='0'+b;
	ll carry=0, tam; string res = "";
	for(ll i = a.size()-1; i >= 0; i--){

		ll t=(a[i]-'0') + (b[i]-'0');
		tam = (t+carry) % 10;
		carry = (t+carry) / 10;

		char x = tam + '0';
		res = x + res;

	}
	if (carry>0) res = '1' + res;
	return res;
}
int main()
{
    string s1, res="", res2="", s2, cong0="";
    cin >> s1 >> s2;
    for (int j=s2.length()-1; j>=0; j--) {
        res = nhan1chuso(s1, s2[j]);
        res = res + cong0;
        res2 = add(res, res2);
        cong0 = cong0 + "0";
    }
    cout << res2;
    return 0;
}

//Baolee K6 Tin
//THPT Chuyen Chu Van An - Binh Dinh