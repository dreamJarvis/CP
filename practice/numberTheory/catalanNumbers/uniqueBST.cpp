#include <bits/stdc++.h>
using namespace std;

#define int long long
#define FIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int numTrees(int n) {
	int dp[n + 1];

	dp[0] = dp[1] = 1;

	for (int i = 2; i <= n; i++) {
		dp[i] = 0;
		for (int j = 0; j < i; j++)
			dp[i] += dp[j] * dp[i - j - 1];
	}

	return dp[n];
}

// Driver function
signed main() {
	FIO;


	cout << numTrees(3) << endl;

	// int t;
	// cin >> t;

	// while (t--) {
	// 	int n;
	// 	cin >> n;

	// 	cout << numTrees(n) << endl;
	// }

	return 0;
}