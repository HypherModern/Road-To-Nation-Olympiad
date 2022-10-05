#include <bits/stdc++.h>

using namespace std;

void res(int a[], int n){

    bool kt = true;
    for (int i = 0; i < n; i++){

        if (a[i] == 1 && a[i] == a[i+1]){
            kt = false;
            break;
        }

    }
    if (kt == true) count++;

}
void gen(int n, int a[], int i){ 

    if (i==n){
        res(a,n);
        return;
    }

    a[i] = 0;
    gen(n,a,i+1);

    a[i] = 1;
    gen(n,a,i+1);

}
int count = 0;
int main(){

    int n;
    cin >> n;
    int a[n];
    gen(n,a,0);

}