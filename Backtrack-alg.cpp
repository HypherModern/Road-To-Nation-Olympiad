#include <bits/stdc++.h>

using namespace std;

int x[1000000];

void ghinghiem(){

    for (int i = 1; i <= k; i++) cout << x[i] << ";" << " ";
    cout << endl;

}
void Backtracking(int i){

    for (int j = x[i-1]+1; j <= n-k+i; j++){
        x[i] = j;
        if (i == k) ghinghiem();
        else Backtracking(i+1);
    }

}
int main(){
    cin >> n >> k;
    Backtracking(1);
    return 0;
}