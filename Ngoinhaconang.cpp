    #include <bits/stdc++.h>
    using namespace std;

    int main(){

        int T;
        cin >> T;
        while (T--){

            int n;
            cin >> n;
            short a[n]; 
            for (int i = 0; i < n; i++){
                cin >> a[i];
            }
            int max = a[0]; int count = 1;
            for (int i = 1; i < n; i++){
                if (a[i] >= max){
                    max = a[i];
                    count++;
                }
            }

        }

    }