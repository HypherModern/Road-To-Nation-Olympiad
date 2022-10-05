//Using two pointers, one for the start of the array and one for the end of the array, find out 
// a pair (a[i],a[j]) such that a[i] + a[j] = 0 and i < j.

#include <bits/stdc++.h>
using namespace std;

void sort(int arr[], int n){
    for (int i = 0; i < n; i++){
        for (int j = i + 1; j < n; j++){
            if (arr[i] > arr[j]){
                swap(arr[i], arr[j]);
            }
        }
    }
}

int main(){

    std::ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    int n;
    cin >> n;
    int a[n], b[n];
    for (int i = 0; i < n; i++){
        cin >> a[i];
        b[i] = a[i];
    }
    sort(a, n);
    int i = 0, j = n - 1, vti, vtj;
    while (i < j){
        if (a[i] + a[j] == 0){
            vti = i; vtj = j;
            break;
        }
        else if (a[i] + a[j] > 0)
            j--;
        else
            i++;
    }
    for (int i = 0; i < n; i++){
        if (b[i] == a[vti]){
            cout << i+1 << " ";
            break;
        }
    }
    for (int i = 0; i < n; i++){
        if (b[i] == a[vtj]){
            cout << i+1 << endl;
            break;
        }
    }
    if (i >= j)
        cout << -1 << -1 << endl;
    return 0;
}