#include <bits/stdc++.h>
using namespace std;

int main() {

    int T;
    cin >> T;
    while (T--) {

        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        int min = 0; 
        int sm[n] = {-1}; 

        // Find the smallest element in the array
        for (int i = 0; i < n; i++){

            if (a[i] <= a[min]) {
                min = i;
            }
            else sm[i] = min;

        }
        int max = n-1;
        int bi[n] = {-1};

        // Find the biggest element in the array
        for (int i = n-1; i >= 0; i--){
            if (a[i] >= a[max]) {
                max = i;
            }
            else bi[i] = max;
        }
        bool kt = true;
        for (int i = 0; i < n; i++){
            if (sm[i] != -1 && bi[i] != -1){

                    kt = false;
                    break;

            }

        }
        if (kt) cout << "NO\n";
        else cout << "YES\n";
    }

}
