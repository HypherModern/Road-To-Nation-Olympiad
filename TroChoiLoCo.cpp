#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll m;
struct mt{
	ll h,c;
	ll mang[100][100];
};
mt nhan(mt a,mt b){
	mt kq;
	kq.h=a.h;
	kq.c=b.c;
	for(ll i=1;i<=kq.h;i++)
		for(ll j=1;j<=kq.c;j++){
			kq.mang[i][j]=0;
			for(ll p=1;p<=a.c;p++)
				kq.mang[i][j]+=(a.mang[i][p]*b.mang[p][j])%m;
		}
	return kq;
};
mt luythua(mt a,ll k){
	if(k==1) return a;
	mt kq=luythua(a,k/2);
	kq=nhan(kq,kq);
	if(k%2!=0){
		kq=nhan(kq,a);
	}
	return kq;
}
int main(){
		mt a,b,kq;
		ll n;
		cin>>n>>m;
		a.h=3;
		a.c=3;
		a.mang[1][1]=0;
		a.mang[1][2]=1;
		a.mang[1][3]=0;
		a.mang[2][1]=0;
		a.mang[2][2]=0;
		a.mang[2][3]=1;
		a.mang[3][1]=1;
		a.mang[3][2]=1;
		a.mang[3][3]=1;
		b.h=3;
		b.c=1;
		b.mang[1][1]=1;
		b.mang[2][1]=2;
		b.mang[3][1]=4;
		if (n==1){
			cout<<1<<endl;
			return 0;
		}
		kq=nhan(luythua(a,n-1),b);
		cout<<kq.mang[1][1]%m;
	return 0;
}