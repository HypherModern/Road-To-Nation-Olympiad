#include <bits/stdc++.h>
using namespace std;

void find(int arr[], int n)
{
	int mid = n / 2;
	int leftSum = 0, rightSum = 0;
    //calculate left sum
	for (int i = 0; i < mid; i++)
	{
		leftSum += arr[i];
	}
    //calculate right sum
	for (int i = n - 1; i > mid; i--)
	{
		rightSum += arr[i];
	}
	if (rightSum > leftSum)
	{
		while (rightSum > leftSum && mid < n - 1)
		{
			rightSum -= arr[mid + 1];
			leftSum += arr[mid];
			mid++;
		}
	}
	else
	{
		while (leftSum > rightSum && mid > 0)
		{
			rightSum += arr[mid];
			leftSum -= arr[mid - 1];
			mid--;
		}
	}
    //check if sum is equal
	if (rightSum == leftSum)
	{
		cout << mid << endl;
		return;
	}

	cout << -1 << endl;
}
int main()
{
	
    int T;
    cin >> T;
    while (T--){
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        find(arr, n);
    }
    return 0;
}
