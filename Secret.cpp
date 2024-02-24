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
#define FR ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define MultiTest while(n--)
const ll N = 1e3+1;
const ll oo = 1e17;
const ll mod = 1e9+7;

using namespace std;

unordered_map<ll, unordered_set<ll>> graph;
ll m, n;

bool canReach(char start, char target, unordered_set<char> visited) {
    if (start == target) {
        return true;
    }

    visited.insert(start);

    if (graph.find(start) != graph.end()) {
        for (char neighbor : graph[start]) {
            if (visited.find(neighbor) == visited.end()) {
                if (canReach(neighbor, target, visited)) {
                    return true;
                }
            }
        }
    }

    return false;
}

int main(){
	
	FR;

     freopen("SECRET.INP","r",stdin);
     freopen("SECRET.OUT","w",stdout);
	
	cin >> m >> n;
	for(ll i = 0; i < m; i++){
		
		char from, to;
		cin >> from >> to;
		graph[from].insert(to);
		
	}
	
	MultiTest{
	
		string A, B;
		bool ans = true;
		cin >> A >> B;
		unordered_set<char> visited;
		if (A.length() != B.length()) ans = false;
		else{
		  for(ll i = 0; i < A.length(); i++){
			
			  char C = A[i];
			  char D = B[i];
			  if(canReach(C, D, visited) == false) ans = false;
			
		  }
		  
		}
		if (ans == true) cout << "yes\n"; 
		else cout << "no\n";
		
	}
	

    return 0;
}

//Baolee K6 Tin
//THPT Chuyen Chu Van An - Binh Dinh
/* Problem: */

/**  /\_/\
 *  (= ._.)
 *  / >AC \>AC
**/

