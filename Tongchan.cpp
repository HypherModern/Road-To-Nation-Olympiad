#include<bits/stdc++.h>
using namespace std;

int main(){

    int T;
    cin >> T;
    while (T--){

        int n;
        cin >> n; 
        int a[n],s[100001];
        for (int i = 1; i <= n; i++){
            cin >> a[i];
        }
        s[1] = a[1];        
        //count the number of consecutive subsequences whose sum even in the given array
        int count = 0;
        int sum = 0;
        for (int i = 1; i <= n; i++){
            
            s[i]= s[i-1] + a[i];
            
        }
        for (int i = 1; i <=n; i++){
            
            for (int j = i; j <=n; j++){
                
                sum = s[j] - s[i-1];
                if (sum % 2 == 0) count++;
                
            }
            
        }
        cout << count << endl;
    }
    return 0;
}