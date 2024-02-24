#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, k, i, l;
    bool ok;
    string st;
    cin>>st;
    ok=false;
    for (char c = 'a';c <='z';c++){
        for (i = 0; i<=st.length();i++){
            if (st[i]==c){
                ok = true;
            }
            
        }
        if (ok==true){
                l=l+1;
            }
        ok=false;
    }
    ok=false;
    for (char c = 'A';c <='Z';c++){
        for (i = 0; i<=st.length();i++){
            if (st[i]==c){
                ok = true;
            }
            
        }
        if (ok==true){
                l=l+1;
            }
        ok=false;
    }
    ok=false;
    for (char c = '0';c <='9';c++){
        for (i = 0; i<=st.length();i++){
            if (st[i]==c){
                ok = true;
            }
            
        }
        if (ok==true){
                l=l+1;
            }
        ok=false;
    }
    cout<<l<<endl;
	return 0;
}
