#include <bits/stdc++.h>
#include <sstream>

using namespace std;

int main(){

    string X, Y, s, st;
    cin << X << Y;
    int n = Y.size()-1;
    s = X.substr(0, n);
    X = X + s;
    for (int i = 0; i < X.size()-n; i++){

        if X.substr(i, n+1) == Y{

            cout << i << " ";

        }

    }
    return 0;

}