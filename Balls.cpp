//a yellow ball need 2 yellow crystals, a green ball need 1 yellow crystal and 1 blue crystals and a blue ball need 3 blue crystals.
// input: the first row is the numbers of yellow crystals and the numbers of blue crystals
// input: the second row is the numbers of yellow balls and the numbers of green balls and the numbers of blue balls
// output how many crystals needed to create those balls.
// input: 4 3 
// input: 2 1 1
// output 2
//code goes here
#include <iostream>

using namespace std;
int main() {

    int A; int B; //number of yellow crystals and number of blue crystals
    int X; int Y; int Z; //number of yellow balls, number of green balls and number of blue balls
    cin >> A >> B; //input the number of yellow crystals and number of blue crystals
    cin >> X >> Y >> Z; //input the number of yellow balls, number of green balls and number of blue balls
    int total_have = A + B; //total number of crystals
    //calculate the number of yellow crystals and blue crystals needed to create yellow balls, green balls and blue balls
    int total_yellow_crystals = X * 2 + Y;
    int total_blue_crystals =  Y + Z*3;
    int total = total_yellow_crystals + total_blue_crystals; //total number of crystals needed to create yellow balls, green balls and blue balls
    //calculate the number of crystals more needed to create those balls
     int res = total - total_have;
    //output the number of crystals more needed to create those balls
    cout << res << endl;

}