#include <bits/stdc++.h>
#include <sstream>

using namespace std;

int main(){

    string X, Y, S;
    cin << X << Y;
    int n;
    cin << n;
    l = n - 2;
    while ( l < n){

        Y = Y + X;
        X = Y;
        l++;

    }

    cout << Y;

}