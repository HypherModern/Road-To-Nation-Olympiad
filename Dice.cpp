#include <iostream>
using namespace std;

int count(int n){

    return 7-n;

}
int main(){

    int T;
    cin >> T;
      while (T--){

        int n;
        cin >> n;
        cout << count(n) <<endl;

      }
    return 0;
}
