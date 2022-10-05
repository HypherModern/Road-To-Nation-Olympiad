# include<iostream>
# include<climits>

using namespace std;

int fnr(string str) {
	int fi[201];
	for(int i = 0; i<201; i++)
        fi[i] = -1;
 
	//if the character haven't repeated then return its index 
	//else return -2
	for(int i = 0; i<str.length(); i++) {
		if(fi[str[i]] == -1) {
			fi[str[i]] = i;
		}else {
			fi[str[i]] = -2;
		}
	}

	int res = INT_MAX;

	for(int i = 0; i<201; i++) {

        //find the min index of first non-repeating character
		if(fi[i] >= 0)
			res = min(res, fi[i]);
			
	}
	
	if(res == INT_MAX) return -1;
	else return res;
}

int main(){
    
    int n; 
    cin >> n;
    while (n--){
        
        string s;
        cin >> s;
        if (fnr(s) == -1) cout << -1 << endl; 
        else cout << fnr(s)+1 << endl;
        
    }
    return 0;
}

//Baolee K6 Tin
//THPT Chuyen Chu Van An, Binh Dinh
