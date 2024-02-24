#include <bits/stdc++.h>

using namespace std;

int main() {
    string s;
    char c;
    int n, i, j, k;

    getline(cin, s);

    i = 0;
    while (i < s.length()) {
        if (s[i] >= '0' && s[i] <= '9') {
            i++;
        } else {
            s.erase(i, 1);
        }
    }

    for (i = 0; i < 3; i++) {
        k = i;
        for (j = i; j < s.length() + i - 2; j++) {
            if (s[k] < s[j]) {
                k = j;
            }
        }
        if (k > i) {
            s.erase(i, k - i);
        }
    }
    if (s.length() > 3) {
        s.erase(3, s.length() - 3);
    }

    cout << s;

    return 0;
}
