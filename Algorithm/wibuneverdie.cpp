#include<bits/stdc++.h>
#define ll long long
#define pll pair<ll,ll>
using namespace std;

int main()
{
	ll ans= 0;
	for ( int  i = 'a'; i < 'z'; i ++ )
		for (int j = i + 1; j <='z';j++ ) ans++;
	cout << ans;
	
	return 0;
}
