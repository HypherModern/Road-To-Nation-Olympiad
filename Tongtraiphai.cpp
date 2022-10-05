//input an array with N elements, calculate the sum of first N/2 elements and the sum of last N/2 elements, then return multiple of these two sums.

#include <iostream>
#include <cmath>
using namespace std;

int main(){

    int T;
    cin >> T;
    while (T--){

        int N;
        cin >> N;
        if (N = 1) {
            cout << "0" << endl;	
            continue;
        }
        int arr[N];
        for(int i = 0; i < N; i++){
            cin >> arr[i];
    }
        int sum1 = 0;
        int sum2 = 0;
        for(int i = 0; i < N/2; i++){
             sum1 += arr[i];
    }
        for(int i = N/2; i < N; i++){
        sum2 += arr[i];
    }
        cout << sum1 * sum2 << endl;
        
    }
   
    return 0;

}