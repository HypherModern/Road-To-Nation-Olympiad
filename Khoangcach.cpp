#include <bits/stdc++.h>
#include <sstring>
using namespace std;
//intput a string <= 255 chars, the string contains D with mean a ligts and between 2 Ds is a number is the distance between the ligts
//ouput the distance between the first and last light
//input: D2D3D10D 
//output: 15 (2+3+10)

int main(){

    string s; 
    cin >> s;
    int sum, k = 0;
    for (int i = 0; i < s.size(); i++) {

        if (s[i] != 'D') {
    
            k = k * 10 + stoi(s[i]);
            k = i; 

        }
        else {
            sum += k;
            k = 0;
        }

    }
    cout << sum;

}