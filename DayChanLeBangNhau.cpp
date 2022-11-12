#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    int n;
    cin>>n;
    vector<int>A(n+1);
    ll a0=0,a1=0,b0=0,b1=0;
    for(int i=1;i<=n;i++){
        cin>>A[i];
        if(A[i]%2)b1++; else b0++;
    }

    for(int i=1;i<=n;i++){
        if(A[i]%2)b1--; else b0--;
        if(a1==b1||a0==b0){
            cout<<i-1<<endl;
            return 0;
        }
        if(A[i]%2)a1++; else a0++;
    }
    cout<<-1<<endl;
}