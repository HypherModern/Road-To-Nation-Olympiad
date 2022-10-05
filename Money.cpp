// Input N,A,B.
// Find X and Y that satisfy A*X + B*Y = N.
// If there are X and Y that satisfy, write "YES" and print X and Y. Otherwise print "NO".

#include <iostream>
#include <cmath> 
using namespace std;
int main() {

    int N; int A; int B; 
    cin >> N >> A >> B; //input N,A,B.
//If there is X and Y satisfy AX + BY = N then print "YES"
//and print X and Y. Otherwise print "NO".
    int X = 0; int Y = 0;
    int flag = 0;
    for (int i = 0; i <= N; i++) {
        for (int j = 0; j <= N; j++) {
            if (i * A + j * B == N) {
                X = i;
                Y = j;
                flag = 1;
                break;
            }
        }
        if (flag == 1) {
            break;
        }
    }
    if (flag == 1) {
        cout << "YES" << endl;
        cout << X << " " << Y << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;

}