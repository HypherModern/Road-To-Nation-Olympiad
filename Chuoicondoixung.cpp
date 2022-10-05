#include <bits/stdc++.h>
#include <sstream>

using namespace std;
 

int longestPalindrome(string str)
{
    int n = str.size(); 
    if (n < 2)
        return n; //if n = 0 then no palin, if n == 1 then only 1 palin 
 
    int maxLength = 1, start = 0;
    int l, h;
    for (int i = 0; i < n; i++) {
        l = i - 1;
        h = i + 1;
        while (h < n && str[h] == str[i]) 
            h++;
 
        while (l >= 0 && str[l] == str[i]) 
            l--;
 
        while (l >= 0 && h < n && str[l] == str[h]) {
            l--;
            h++;
        }
 
        int length = h- l- 1;
        if (maxLength < length) {
            maxLength = length;
            start = l+ 1;
        }
    }
 
    return maxLength;
}
int main(){
    
    int n;
    cin >> n;
    string s; 
    cin >> s;
    cout << longestPalindrome(s);
    return 0;
    
}

//Baolee K6 Tin
//THPT Chuyen Chu Van An, Binh Dinh
