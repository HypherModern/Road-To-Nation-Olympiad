#include <bits/stdc++.h>
#include <sstream>

using namespace std;

int main(){

    int T;
    cin >> T;
    while (T--){

        string s;
        cin >> s;
        if (s.size() <= 10) cout << s << endl;
        else cout << s[0] << s.size() - 2 << s[s.size() - 1] << endl;

    }
    return 0;

}