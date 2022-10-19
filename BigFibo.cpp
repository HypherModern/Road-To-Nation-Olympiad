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

int main(){
	string a,b;
	cin>>a>>b;
	string fb1,fb2,fb3;
	fb1="0";
	fb2="1";
	fb3="1";
	ll dem=0;
	while (fb3.size()<a.size()) fb3='0'+fb3;
	while (fb3.size()>a.size()) a='0'+a;
	while (fb3<a){
		fb1=fb2;
		fb2=fb3;
		fb3=add(fb1,fb2);
		while (fb3.size()<a.size()) fb3='0'+fb3;
		while (fb3.size()>a.size()) a='0'+a;
	}
	while (fb3.size()<a.size()) fb3='0'+fb3;
	while (fb3.size()>a.size()) a='0'+a;
	while (fb3<=b){
		fb1=fb2;
		fb2=fb3;
		fb3=add(fb1,fb2);
		dem++;
		while (fb3.size()<b.size()) fb3='0'+fb3;
		while (fb3.size()>b.size()) b='0'+b;
	}
	cout<<dem;
	return 0;
}

//Baolee K6 Tin
//THPT Chuyen Chu Van An - Binh Dinh