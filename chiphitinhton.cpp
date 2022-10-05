#include <bits/stdc++.h>
#define ll long long

using namespace std;

ll n, x;
int main(){

    priority_queue <ll, vector<ll>, greater<ll>> pq;

    cin >> n;
    for (int i = 0; i < n; i++){

        cin >> x;
        pq.push(x);

    }
    int t = 0;
    while (pq.size() > 1){

        int a = pq.top();
        pq.pop();
        int b = pq.top();
        pq.pop();
        int r = a + b;
        t += (a + b) * 0.05;

    }
    cout << setprecision(2) << fixed;
    cout << t;

}