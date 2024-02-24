#include <bits/stdc++.h>
#define ll long long

using namespace std;


ll sum_of_digits(ll n) {
    ll sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

ll fl_x(ll N) {
    ll l = 1;
    ll r = N;
    while (l < r) {
        ll mid = (l + r + 1) / 2;
        if (1LL * mid * (mid + sum_of_digits(mid)) > N) {
            r = mid - 1;
        } else {
            l = mid;
        }
    }
    return l;
}

ll find_x(ll N) {
    ll l_x = fl_x(N);
    if (1LL * l_x * (l_x + sum_of_digits(l_x)) == N) {
        return l_x;
    } else if (1LL * (l_x + 1) * (l_x + 1 + sum_of_digits(l_x + 1)) == N) {
        return l_x + 1;
    } else {
        return -1;
    }
}

ll N;

void trau(){

    for(ll x = 1; x * x <= N; x++){

        if (x*x + sum_of_digits(x)*x == N){

            cout << x;
            return;

        }

    }
    cout << -1;

}


int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cin >> N;
    if (N < 1e14) trau();
    else{

        ll x = find_x(N);
        cout << x;

    }

    return 0;
}
