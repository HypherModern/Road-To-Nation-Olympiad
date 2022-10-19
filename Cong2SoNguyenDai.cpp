#include <bits/stdc++.h>
#define ll long long

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

    string a, b;
    cin >> a >> b;
    cout << add(a,b);
    return 0;

}