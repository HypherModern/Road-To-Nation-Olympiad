#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int T;
    cin >> T; 
      for (int i = 1; i <= T; i++){
          
          int n;
          cin >> n;
          short a[n]; int min = 1000;
          for (int j=0; j < n; j++){
               cin >> a[j];
               if (a[j] < min) min = a[j];
          }
          cout << min << endl;
      }
    return 0;
}
//Baolee K6 Tin
//THPT Chu Van An, Binh Dinh