#include <bits/stdc++.h>

using namespace std;

int main(){

    int T;
    cin >> T;
    while (T--){

        string s;
        cin >> s;
        int l = 0, r = 0, u = 0, d = 0;
        for (int i = 0; i < s.size(); i++){

            if (s[i] == 'L') l++;
            else if (s[i] == 'R') r++;
            else if (s[i] == 'U') u++;
            else if (s[i] == 'D') d++;

        }
        l = min(l, r);
        u = min(u, d);
        r = min(l, r);
        d = min(u, d);
        int t = l + u + r + d;
        cout << t << endl;
        if (u==0 && l!=0 && r!=0) l=r=1;
		if (l==0 && u!=0 && d!=0) u=d=1;
        for (int i = 0; i <= r; i++) cout << "R";
        for (int i = 0; i <= u; i++) cout << "D";
        for (int i = 0; i <= l; i++) cout << "L";
        for (int i = 0; i <= d; i++) cout << "U";
        cout << endl;
    }
    return 0;

}