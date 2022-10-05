#include <bits/stdc++.h>
#define ll long long

const ll oo = 1e17;

using namespace std;

// Duy ga 

ll n;
string a, b;

ll solve(string a, string b)
{
    ll n, val, ans = oo;
 
    val = stol(b);
    n = a.length();

    sort(a.begin(), a.end());
 
    if (stol(a) > val) 
        ans = min((ll)stol(a), ans);
    
    while (next_permutation(a.begin(),a.end())) {
        if (stol(a) > val)
            ans = min((ll)stol(a), ans);
    }

    if (ans != oo) {
        return ans;
    }
    else {
        return 0;
    }
}

int main(){
          
    cin >> n;
    cin >> a; b = a;
    cout << solve(a, b);
    return 0;
}

//Baolee K6 Tin
//THPT Chuyen Chu Van An - Binh Dinh