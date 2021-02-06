#include <bits/stdc++.h>
using namespace std;

#define int long long
#define FIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

// tc : 2^n
int binomailCoeff(int n, int k) {
	if (k > n)	return 0;
	if (k == 0 || k == n)	return 1;

	return (binomailCoeff(n - 1, k - 1) + binomailCoeff(n - 1, k));
}


// tc : O(n*k)
// sc : O(n*k)
int binomailCoeffDP(int n, int k) {
	int dp[n + 1][k + 1] = {0};
	memset(dp, 0, sizeof(dp));

	for (int i = 0; i <= n; i++) {
		for (int j = 0; j <= min(i, k); j++) {
			if (j == 0 || j == i) {
				dp[i][j] = 1;
			} else {
				dp[i][j] = dp[i - 1][j - 1] + dp[i - 1][j];
			}
		}
	}

	return dp[n][k];
}

// space efficient
// tc : O(n*k)
// sc : O(k)
int binomailCoeffDPII(int n, int k) {
	int dp[k + 1];
	memset(dp, 0, sizeof(dp));

	dp[0] = 1; // nC0 == 1

	for (int i = 1; i <= n; i++) {
		for (int j = min(i, k); j > 0; j--) {
			dp[j] = dp[j] + dp[j - 1];
		}
	}

	return dp[k];
}


///////////////////////////// space & time efficient ////////////////////////////
// tc : O(n)
// sc : O(1)
int nCr(int n, int k) {
	int res(1);

	// C(n, k) == C(n, n-k) : if k > n-k
	if (k > n - k)
		k = n - k;

	for (int i = 0; i < k; i++) {
		res *= (n - i);
		res /= (i + 1);
	}

	return res;
}


signed main() {
	FIO;

	cout << binomailCoeff(5, 2) << endl;
	cout << binomailCoeffDP(5, 2) << endl;
	cout << binomailCoeffDPII(5, 2) << endl;
	cout << nCr(5, 2) << endl;

	return 0;
}