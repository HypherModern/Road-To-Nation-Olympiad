#include <iostream>

using namespace std;
 
int main() 
{

    int score = 5; 
    int *scorePtr;
    scorePtr = &score; 
    cout << "The value of score is " << scorePtr << endl;

}

