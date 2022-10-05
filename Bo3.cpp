#include <bits/stdc++.h>
using namespace std;

bool findTriplet(vector<int> nums)
{
	for (int i = 0; i < nums.size(); i++) {
		for (int j = i + 1; j < nums.size(); j++) {
			for (int k = j + 1; k < nums.size(); k++) {
				// Triplet found, return true
				if (nums[i] < nums[j] && nums[j] < nums[k])
					return true;
			}
		}
	}
	// No triplet found, return false
	return false;
}

int main(){

    int T;
    cin >> T;
    while (T--){

        int n;
        cin >> n;
        vector<int> nums(n);
        for (int i = 0; i < n; i++)
            cin >> nums[i];
        if (findTriplet(nums))
            cout << "YES\n";
        else
            cout << "NO\n";

    }

}