#include <bits/stdc++.h>
#define ll long long
#define db double
#define fi first
#define se second
#define pp pair<ll,ll>
#define um unordered_map<ll,ll>
#define mp map<ll,ll>
#define pq priority_queue<ll, vector<ll>>
#define spq priority_queue<ll, vector<ll>, greater<ll>> 
#define sp setprecision
#define bp pop_back
#define pb push_back
#define ph push
#define lb lower_bound
#define up upper_bound

const ll N = 1e3+1;
const ll oo = 1e17;
const ll mod = 1e9+7;

using namespace std;

ll a[N], n, q, sl = 0, sc = 0, sum = 0;

int main(){
	
	cin >> n >> q;
	for(ll i = 1; i <= n; i++){
		
		cin >> a[i];
		if (a[i] % 2) sl++;
		else sc++; 
		sum += a[i];

	}
	while(q--){
		
		char s;
		cin >> s; 
		if (s == 'E'){
			
			ll d; 
			cin >> d;
            sum += (d*sc);
            if (d % 2 != 0){

                sl += sc;
                sc = 0;

            }
			cout << sum << endl;
			
		}
        else{

            ll d;
            cin >> d;
            sum += (d*sl);
            if (d % 2 != 0){

                sc += sl;
                sc = 0;

            }
            cout << sum << endl;

        }
		
	}
    return 0;
}

//Baolee K6 Tin
//THPT Chuyen Chu Van An - Binh Dinh
/* Problem: https://oj.vnoi.info/problem/ngutin_tds */