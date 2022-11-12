//Write a function that transfrom a decimal number to binary number.
//Input: decimal number
//Output: binary number
#include <iostream>
using namespace std;
void decToBinary(int n){
    // array to store binary number
    int binaryNum[32];
 
    // counter for binary array
    int i = 0;
    while (n > 0) {
 
        // storing remainder in binary array
        binaryNum[i] = n % 2;
        n = n / 2;
        i++;
    }
 
    // printing binary array in reverse order
    for (int j = i - 1; j >= 0; j--)
        cout << binaryNum[j];
}
int main(){

    int T;
     cin >> T;
    while (T--){
        long long int n;
        cin >> n;
        unsigned long long c = decToBinary(n);
        //count the number of 1 in binary number
       /* int count = 0;
        while (c != 0){
            if (c % 10 == 1)
                count++;
            c = c / 10;
        }
        if (count % 2 == 0)
            cout << "even" << endl;
        else
            cout << "odd" << endl;
    } */
     cout << c << endl;
}