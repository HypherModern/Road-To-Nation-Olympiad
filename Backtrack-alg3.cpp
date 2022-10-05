#include <bits/stdc++.h>

using namespace std;

int x[1000000], d[1000000] = {0};

void ghinghiem(){

    for (int i = 1; i <= k; i++) cout << x[i] << ";" << " ";
    cout << endl;

}
void Backtracking(int i){

    for (int j = 1; j <= n; j++){

        if (d[j] == 0){
            x[i] = j;
            d[j] = 1;
            if (i == k) ghinghiem();
            else Backtracking(i+1);
        }
        d[j] = 0;
    }

}
int main(){
    Backtracking(1);
    return 0;
}