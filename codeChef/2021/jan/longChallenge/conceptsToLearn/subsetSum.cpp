#include <bits/stdc++.h>
using namespace std;

#define int long long
#define FIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

// bool subsetSum(vector<int> &nums, int n, int totalSum, int sum) {
// 	if (totalSum - sum == sum && n >= -1) {
// 		return true;
// 	}

// 	if (n < -1) {
// 		return false;
// 	}

// 	if (totalSum - sum < 0) {
// 		return subsetSum(nums, n - 1, totalSum, sum);
// 	}
// 	else {
// 		return (
// 		           subsetSum(nums, n - 1, totalSum, sum + nums[n]) ||
// 		           subsetSum(nums, n - 1, totalSum, sum)
// 		       );
// 	}
// }

unordered_map<string, int> dp;
bool subsetSum(vector<int> &nums, int n, int totalSum) {
	string key = to_string(n) + "_" + to_string(totalSum);

	if (totalSum == 0)	return true;
	if (n < 0)			return false;

	if (dp.count(key))
		return dp[key];

	if (nums[n] <= totalSum) {
		dp[key] = subsetSum(nums, n - 1, totalSum - nums[n]) ||
		          subsetSum(nums, n - 1, totalSum);
	}

	return dp[key];
}

// top-down
// O(n^2)
bool subsetSumDP(vector<int> &nums) {
	int totalSum = 0;
	for (auto i : nums)
		totalSum += i;

	int n = nums.size();
	bool dp[n + 1][totalSum / 2 + 1] = {false};
	memset(dp, false, sizeof(dp));

	for (int i = 0; i <= n; i++) {
		dp[i][0] = true;
	}

	for (int i = 1; i <= (totalSum / 2); i++) {
		dp[0][i] = false;
	}

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= totalSum / 2; j++) {
			if (j - nums[i - 1] >= 0) {
				dp[i][j] = dp[i - 1][j - nums[i - 1]] || dp[i - 1][j];
			}
			else {
				dp[i][j] = dp[i - 1][j];
			}
		}
	}

	return dp[n][totalSum / 2];
}

bool canPartition(vector<int>& nums) {
	int totalSum = 0;
	for (auto i : nums)
		totalSum += i;

	if (totalSum % 2)	return false;
	return subsetSum(nums, nums.size() - 1, (totalSum / 2));
	// return subsetSumDP(nums);
}

// Driver function
signed main() {
	FIO;

	int n;
	cin >> n;

	vector<int> a(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	cout << canPartition(a) << endl;

	return 0;
}
/*
Input: nums = 1 5 11 5
Output: true
Explanation: The array can be partitioned as [1, 5, 5] and [11].
Example 2:

Input: nums = 1 2 3 5
Output: false
Explanation: The array cannot be partitioned into equal sum subsets.
*/