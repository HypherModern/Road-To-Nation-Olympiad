#include <bits/stdc++.h>
using namespace std;

int main(){

    int T;
    cin >> T;
    while (T--){

        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++){
            cin >> a[i];
        }
        int k = 0; int tong = 0;
        for (int i = 0; i < n; i++){

            if (a[i] < 0){

                tong = tong + a[i];
                if (tong < k){
                    k = tong;
                }

            }
            else tong = 0;

        }
        cout << k << endl;

    }
    return 0;
}