#include <bits/stdc++.h>

using namespace std;

int x[1000000];

void ghinghiem(){

    for (int i = 1; i <= k; i++) cout << x[i] << ";" << " ";
    cout << endl;

}
void Backtracking(int i){

    for (int j = 0; j <= 1; j++){
        x[i] = j;
        if (i == k) ghinghiem();
        else Backtracking(i+1);
    }

}
int main(){
    Backtracking(1);
    return 0;
}