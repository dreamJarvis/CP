#include <bits/stdc++.h>
using namespace std;

#define int long long
#define FIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int utilMemo(int a[], int n, int target, int k, unordered_map<string, int> &dp) {
	string key = to_string(n) + "_" + to_string(target);
	if (target >= k) {
		return target;
	}

	if (n < 0)
		return INT_MAX;

	if (dp.count(key))
		return dp[key];

	dp[key] = min(
	              utilMemo(a, n - 1, target + a[n], k, dp),
	              utilMemo(a, n - 1, target, k, dp)
	          );

	return dp[key];
}

int utilDP(int a[], int n, int target) {
	reverse(a, a + n);
	vector<vector<int>> dp(n + 1, vector<int>(target + 1, INT_MAX));

	for (int i = 0; i <= n; i++) {
		dp[i][0] = 0;
	}

	for (int i = 1; i <= n; i++) {
		for (int j = 0; j <= target; j++) {
			if (j > a[i - 1]) {
				dp[i][j] = min(
				               a[i - 1] + dp[i - 1][j - a[i - 1]],
				               dp[i - 1][j]
				           );
			}
			else {
				dp[i][j] = a[i - 1];
			}
		}
	}

	int minSum = INT_MAX;
	for (int i = 0; i <= n; i++) {
		minSum = min(minSum, dp[i][target]);
	}

	return minSum;
}


// minimum sum greater than K
void minSum(int a[], int n, int k) {
	unordered_map<string, int> dp;
	cout << "memo : " << utilMemo(a, n - 1, 0, k, dp) << endl;
	cout << "DP : " << utilDP(a, n, k) << endl;

	return;
}

// Driver function
signed main() {
	FIO;

	int n, k;
	cin >> n >> k;

	int a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	minSum(a, n, k);

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