#include <iostream>
#include <string>
using namespace std;
string cs="0123456789ABCDEFGHIJ";
int docso(string s, int b) {
	int t=0;
	for (int i=0; i<s.length(); i++) {
		t=t*b+(s[i]<='9'?s[i]-48:s[i]-55);
		//cout<<i<<" "<<s[i]<<" "<<t<<endl;
	}
		
	
	return t;
}

string chuyen(int n, int b) {
	int k=0;
	string s;
	while (n) {
		s=cs[n%b]+s;
		n/=b;
	}
	return s;
}

int main() {
	cout<<chuyen(255, 16);
}
