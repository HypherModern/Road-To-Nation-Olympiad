#include <bits/stdc++.h>
using namespace std;

void countt(int a[], int n){

    unordered_map<int, int> mp;

    for (int i = 0; i < n; i++) 
        mp[a[i]]++;
    for (int i = 0; i < n; i++){
        if (mp[a[i]] != -1){

            cout << a[i] << ":" << mp[a[i]] << endl;
            mp[a[i]] = -1;

        }
    }

}

int main(){

    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    sort(a, a+n);
    countt(a,n);

}