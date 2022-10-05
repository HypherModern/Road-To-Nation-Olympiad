#include <iostream>
#include <cmath>
using namespace std;

long long convert1(long long x) {

	long long y = 0;
	while (x != 0) {
		y = y * 10 + x % 10;
			x /= 10;
	}
	return y;
}
long long convert2(long long x) {

	if (x == 0) return 5;
	long long y = 0; int d;
	while (x != 0) {

		d = x % 10;
		if (d == 0) d = 5;
		y = y * 10 + d;
		x = x / 10;

	}
	return y;

}
int main() {
	
	int T; 
	cin >> T;
	  while (T>0) {
		long long x,y
		cin >> x;
		y = convert2(x);
		cout << convert1(y) << endl;
		T--;
}
	return 0;
}