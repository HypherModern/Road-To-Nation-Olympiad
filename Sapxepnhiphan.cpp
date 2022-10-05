#include <iostream>
using namespace std;

//sort the binary array by one traversal
void sortBinaryArray(int a[], int n)
{
	int j = -1;
	for (int i = 0; i < n; i++) {

		if (a[i] < 1) {
			j++;
			swap(a[i], a[j]);
		}
	}
}

// Driver code
int main()
{
	int T;
    cin >> T;
    while (T--){

        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++){

            cin >> a[i];

        }
        sortBinaryArray(a, n);
        for (int i = 0; i < n; i++){

            cout << a[i] << " ";

        }
        cout << endl;
    }

	return 0;
}
