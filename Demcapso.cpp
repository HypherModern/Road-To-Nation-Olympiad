#include<bits/stdc++.h>
using namespace std;

long long t , n ,a[10000001] , d;

int main(){
	cin>>t;
	for(long long k=1;k<=t;k++){
		cin>>n;
	    d = 0;
		for(long long i=0;i<n;i++){
			 cin>>a[i];
			 a[i] = a[i]*i;
		} 
		for(long long j=1;j<n;j++)
			for (long long i=0;i<=j-1;i++) if(a[i]>a[j])d++;
		cout<<d<<endl;
	}
	return 0;
}