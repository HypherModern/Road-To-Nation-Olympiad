#include <iostream>
using namespace std;

int main() {

    int n; int k; int day=0;
    int w[n];
     cin >> n >> k;
      for(int i = 0; i < n; i++) {

        cin >> w[i];

      }
        int i = 1;
        while (i <= n) {

            if (w[i] <= k) {

              i++;
              if (w[i] <= k) {

                i++;

              }
              else {

                w[i] = w[i] - k;

              }

            }
            else {

              w[i] = w[i] - k;
               if (w[i] <= k) {

                i++;

            }
          day++;

        }
    
    }
    cout << day;
    
}    