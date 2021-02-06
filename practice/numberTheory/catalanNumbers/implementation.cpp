#include <bits/stdc++.h>
using namespace std;

#define int long long
#define FIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

// tc : e^x
int nthCatalan(int n) {
	if (n <= 1)
		return 1;

	int ans(0);
	for (int i = 0; i < n; i++)
		ans += nthCatalan(i) * nthCatalan(n - i - 1);
	return ans;
}


// tc : O(n^2)
int nthCatalanDP(int n) {
	int catalanDp[n + 1];

	catalanDp[0] = catalanDp[1] = 1;

	for (int i = 2; i <= n; i++) {
		catalanDp[i] = 0;
		for (int j = 0; j < i; j++) {
			catalanDp[i] += catalanDp[j] * catalanDp[i - j - 1];
		}
	}

	return catalanDp[n];
}

///////////// using binomial coefficient ////////////
// tc : O(n)
// sc : O(1)
int nCr(int n, int k) {
	int res(1);

	if (k > n - k)
		k = n - k;

	for (int i = 0; i < k; i++) {
		res *= (n - i);
		res /= (i + 1);
	}

	return res;
}

int catalanBC(int n) {
	int c = nCr(2 * n, n);
	return (c / (n + 1));
}

signed main() {
	FIO;

	cout << nthCatalan(10) << endl;						// recursive
	cout << nthCatalanDP(3) << endl;					// DP
	cout << catalanBC(10) << endl;						// binary coefficient( nCr )

	return 0;
}