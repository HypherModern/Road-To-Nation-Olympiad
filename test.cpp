#include <iostream>
#include <algorithm>
using namespace std;

bool isIsosceles(int a, int b, int c) {
    return (a == b || b == c || a == c);
}

bool isEquilateral(int a, int b, int c) {
    return (a == b && b == c);
}

int main() {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a, a+n);
    int count = 0;
    for (int i = 0; i < n-2; i++) {
        for (int j = i+1; j < n-1; j++) {
            for (int k = j+1; k < n; k++) {
                if (a[i]+a[j] > a[k]) {
                    if (isIsosceles(a[i], a[j], a[k]) || isEquilateral(a[i], a[j], a[k])) {
                        count++;
                    }
                }
            }
        }
    }
    cout << count << endl;
    return 0;
}
