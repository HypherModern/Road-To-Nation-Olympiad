#include <bits/stdc++.h>
using namespace std;
int main(){
	string st,kq="",st1=""; int n;
	cin>>st;
    n = st.size();
    for (int i = 1; i < n; i++){

        if (n % i != 0) continue;
            st1 = st.substr(0, i);
            string y = st1;
            while (y.size() < n) {
                y += st1;
            }
            if (y == st) {
                kq = y;
                break;
            }

    }
	cout<<kq;

	return 0;
}

