#include <bits/stdc++.h>
#define ll long long

using namespace std;

ll n;

int sln(ll n) {

	int lar = 0;

	while (n > 0) {

		int r = n % 10;
		lar = max(lar, r);
		n = n / 10;

	}
	return lar;
}
int main(){

	int n;
	cin >> n;
	ll count = 0;
	while (n > 0) {

		count++;
		n -= sln(n);

	}
	cout << count;
	return 0;
}