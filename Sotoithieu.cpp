#include <bits/stdc++.h>
#include <sstream>

using namespace std;
int n, k;
int main(){

    int T;
    cin >> T;
    while (T--){

        cin >> n >> k;
        string s;
        cin >> s;
        //if there is no change then print out the orignal s
        if (k==0) cout << s << endl;
        else 
            //if only 1 digit then print 0;
            if (n==1) cout << 0 << endl;
            else{
                
                if (s[0]!='1') s[0]='1', k--; 
                for (int i = 1; i < n && k; i++){
                    
                    if (s[i]!='0') s[i] = '0', k--;
                }
                cout << s << endl;
            }
    }
    return 0;
}

//Baolee K6 Tin
//THPT Chuyen Chu Van An, Binh Dinh
