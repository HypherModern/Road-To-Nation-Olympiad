#include <bits/stdc++.h>
#include <sstring>

int main(){

    
    cin >> s;
    int n = s.size();
    int i = 1;
    cout << s << endl;
    while (i < n){

        st = s.substr(0,1);
        s.erase(0,1);
        s = s + st;
        cout << s << endl;
        i++

    }

}