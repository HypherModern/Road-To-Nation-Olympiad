#include <bits/stdc++.h>
using namespace std;

void countt(int a[],int n){

    vector<bool> kt(n,false);
    //sort the array in ascending order
    sort(a,a+n);
    // count frequencies
    for (int i = 0; i < n; i++){
        if (kt[i] == true) continue;
    
        //count frequency
        int count = 1;
        for (int j = i + 1; j < n; j++){
            if (a[i] == a[j]){
              count++;
             kt[j] = true;
            }
        }
        cout << a[i] << ":" << count << endl;
    }  
}

int main(){

    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    countt(a,n);
    return 0;

}