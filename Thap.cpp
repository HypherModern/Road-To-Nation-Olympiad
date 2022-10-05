#include <bits/stdc++.h>
using namespace std;

int main(){
    std::ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    int n;
    cin >> n;
    int a[n], b[1000] = {0}, count = 0, d = 0;
    for (int i = 1; i <= n; i++){

        cin >> a[i];
        if (b[a[i]] == 0) count++;
        b[a[i]]++;
        if (b[a[i]] > d) d++;
        
    }
    cout << d << " " << count << endl;
}