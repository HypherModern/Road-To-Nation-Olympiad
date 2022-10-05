#include <iostream>
using namespace std;

int main(){

    int T;
    cin >> T;
      while (T--){

        int N,X;
        cin >> N >> X;

        int d = X + 10*(N-1) - X*N;
        if (d < 0)
            d = 0;
        cout << d << endl;

      }
    return 0;
}