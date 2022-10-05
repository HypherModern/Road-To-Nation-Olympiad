#include <iostream>
using namespace std;
int count(int x,int k){

    int r; int d = 0;
      while (x){

        r = x % 10;
        if r == k
            d++;
        x = x / 10;
      }
    return d;

}
int main(){

    int T;
    cin >> T;
      while (T--){
        int n,k;
        cin >> n >> k;
        int A[n];
        for (int i = 0; i < n; i++)
            cin >> A[i];
        int d = 0;
        for (int i = 0; i < n; i++)
            d += count(A[i],k);
        cout << d << endl;
      }
    return 0;
}