#include <bits/stdc++.h>
using namespace std;

int main(){

    int cnt[26] = {0};
    int k;
    string s;
    cin >> k >> s;
    // count the number of each character
    for (int i = 0; i < s.size(); i++){

        cnt[s[i] - 'a']++;

    }
    string q = "";
    // find the longest substring
    for (int i = 0; i < 26; i++){

        if (cnt[i] % k){

            cout << "-1\n";
            return 0;

        }
        // if the number of character is divisible by k, then we can use it to make the string
        for (int j = 1; j <= cnt[i] / k; j++){

            q += (char)(i + 'a');

        }
    }
    for (int i = 1; i <= k; i++){

        cout << q;

    }
    return 0;
}